// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_CheckResult_HeaderFile
#define _BOP_CheckResult_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _BOP_CheckStatus_HeaderFile
#include <BOP_CheckStatus.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
class TopoDS_Shape;
class TopTools_ListOfShape;


//! contains information about faulty shapes and faulty types <br>
//!         can't be processed by Boolean Operations <br>
class BOP_CheckResult  {
public:

  DEFINE_STANDARD_ALLOC

  //! empty constructor <br>
  Standard_EXPORT   BOP_CheckResult();
  //! sets ancestor shape (object) for faulty sub-shapes <br>
  Standard_EXPORT     void SetShape1(const TopoDS_Shape& TheShape) ;
  //! adds faulty sub-shapes from object to a list <br>
  Standard_EXPORT     void AddFaultyShape1(const TopoDS_Shape& TheShape) ;
  //! sets ancestor shape (tool) for faulty sub-shapes <br>
  Standard_EXPORT     void SetShape2(const TopoDS_Shape& TheShape) ;
  //! adds faulty sub-shapes from tool to a list <br>
  Standard_EXPORT     void AddFaultyShape2(const TopoDS_Shape& TheShape) ;
  //! returns ancestor shape (object) for faulties <br>
  Standard_EXPORT    const TopoDS_Shape& GetShape1() const;
  //! returns ancestor shape (tool) for faulties <br>
  Standard_EXPORT    const TopoDS_Shape& GetShape2() const;
  //! returns list of faulty shapes for object <br>
  Standard_EXPORT    const TopTools_ListOfShape& GetFaultyShapes1() const;
  //! returns list of faulty shapes for tool <br>
  Standard_EXPORT    const TopTools_ListOfShape& GetFaultyShapes2() const;
  //! set status of faulty <br>
  Standard_EXPORT     void SetCheckStatus(const BOP_CheckStatus TheStatus) ;
  //! gets status of faulty <br>
  Standard_EXPORT     BOP_CheckStatus GetCheckStatus() const;





protected:





private:



TopoDS_Shape myShape1;
TopoDS_Shape myShape2;
BOP_CheckStatus myStatus;
TopTools_ListOfShape myFaulty1;
TopTools_ListOfShape myFaulty2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
