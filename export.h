#ifndef EXPORT_H
#define EXPORT_H

// Needed for brep
#include <BRepTools.hxx>
#include <Standard_CString.hxx>
#include <TopoDS_Shape.hxx>

// Needed for step
#include <STEPControl_Writer.hxx>
#include <BRepBuilderAPI_Transform.hxx>
#include <gp_Trsf.hxx>

class Export
{
public:
    Export(TopoDS_Shape);
    int brep(Standard_CString);
    int step(Standard_CString);
private:
    TopoDS_Shape shape;
};

#endif // EXPORT_H
