#include <iostream>

#include <BRepPrimAPI_MakeCylinder.hxx>

#include "export.h"

//using namespace std;

int main()
{
    std::cout << "Hello World!!!" << std::endl;

    BRepPrimAPI_MakeCylinder cyl = BRepPrimAPI_MakeCylinder(3,5);

    Export(cyl).brep("woot.brep");
    Export(cyl).step("woot.step");

    return 0;
}
