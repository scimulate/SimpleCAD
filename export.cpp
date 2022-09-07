#include "export.h"

Export::Export(TopoDS_Shape geometry)
{
    shape = geometry;
}

int Export::brep(Standard_CString filename)
{
    return BRepTools::Write(shape, filename);
}

int Export::step(Standard_CString filename)
{
    // STEPCONTROL_Writer defaults to millimeter units, and modifying
    // "write.step.unit" did not sucessfully translate the part.

    STEPControl_Writer writer;

    // (This didn't work.)
    // Interface_Static::SetCVal("write.step.unit", "METER");
    // writer.Transfer(shape, STEPControl_AsIs);

    // This hack works.
    gp_Trsf scale;
    scale.SetScale(gp_Pnt(0,0,0), 1.0e3);
    writer.Transfer(BRepBuilderAPI_Transform(shape, scale), STEPControl_AsIs);

    writer.Write(filename);
}
