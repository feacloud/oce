// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrimAPI_MakeOneAxis_HeaderFile
#define _BRepPrimAPI_MakeOneAxis_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class StdFail_NotDone;
class TopoDS_Face;
class TopoDS_Shell;
class TopoDS_Solid;


//! The abstract class MakeOneAxis is the root class of <br>
//! algorithms used to construct rotational primitives. <br>
class BRepPrimAPI_MakeOneAxis  : public BRepBuilderAPI_MakeShape {
public:

  DEFINE_STANDARD_ALLOC

  //! The inherited commands should provide the algorithm. <br>
//!          Returned as a pointer. <br>
  Standard_EXPORT   virtual  Standard_Address OneAxis()  = 0;
  //! Stores the solid in myShape. <br>
  Standard_EXPORT   virtual  void Build() ;
  //! Returns the lateral face of the rotational primitive. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Face& Face() ;
Standard_EXPORT operator TopoDS_Face();
  //! Returns the constructed rotational primitive as a shell. <br>
  Standard_EXPORT    const TopoDS_Shell& Shell() ;
Standard_EXPORT operator TopoDS_Shell();
  //! Returns the constructed rotational primitive as a solid. <br>
  Standard_EXPORT    const TopoDS_Solid& Solid() ;
Standard_EXPORT operator TopoDS_Solid();





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
