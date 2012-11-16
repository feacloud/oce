// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrimAPI_MakeWedge_HeaderFile
#define _BRepPrimAPI_MakeWedge_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepPrim_Wedge_HeaderFile
#include <BRepPrim_Wedge.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_DomainError;
class StdFail_NotDone;
class gp_Ax2;
class BRepPrim_Wedge;
class TopoDS_Shell;
class TopoDS_Solid;


//! Describes functions to build wedges, i.e. boxes with inclined faces. <br>
//! A MakeWedge object provides a framework for: <br>
//! -   defining the construction of a wedge, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result. <br>
class BRepPrimAPI_MakeWedge  : public BRepBuilderAPI_MakeShape {
public:

  DEFINE_STANDARD_ALLOC

  //! Make a STEP right angular wedge. (ltx >= 0) <br>
  Standard_EXPORT   BRepPrimAPI_MakeWedge(const Standard_Real dx,const Standard_Real dy,const Standard_Real dz,const Standard_Real ltx);
  //! Make a STEP right angular wedge. (ltx >= 0) <br>
  Standard_EXPORT   BRepPrimAPI_MakeWedge(const gp_Ax2& Axes,const Standard_Real dx,const Standard_Real dy,const Standard_Real dz,const Standard_Real ltx);
  //! Make a wedge. The face at dy is xmin,zmin xmax,zmax <br>
  Standard_EXPORT   BRepPrimAPI_MakeWedge(const Standard_Real dx,const Standard_Real dy,const Standard_Real dz,const Standard_Real xmin,const Standard_Real zmin,const Standard_Real xmax,const Standard_Real zmax);
  //! Make a wedge. The face at dy is xmin,zmin xmax,zmax <br>
  Standard_EXPORT   BRepPrimAPI_MakeWedge(const gp_Ax2& Axes,const Standard_Real dx,const Standard_Real dy,const Standard_Real dz,const Standard_Real xmin,const Standard_Real zmin,const Standard_Real xmax,const Standard_Real zmax);
  //! Returns the internal algorithm. <br>
//! <br>
  Standard_EXPORT     BRepPrim_Wedge& Wedge() ;
  //! Stores the solid in myShape. <br>
  Standard_EXPORT   virtual  void Build() ;
  //! Returns the constructed box in the form of a shell. <br>
  Standard_EXPORT    const TopoDS_Shell& Shell() ;
Standard_EXPORT operator TopoDS_Shell();
  //! Returns the constructed box in the form of a solid. <br>
  Standard_EXPORT    const TopoDS_Solid& Solid() ;
Standard_EXPORT operator TopoDS_Solid();





protected:





private:



BRepPrim_Wedge myWedge;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
