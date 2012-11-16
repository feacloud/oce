// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ArgumentAnalyzer_HeaderFile
#define _BOP_ArgumentAnalyzer_HeaderFile

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
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BOP_Operation_HeaderFile
#include <BOP_Operation.hxx>
#endif
#ifndef _BOP_ListOfCheckResult_HeaderFile
#include <BOP_ListOfCheckResult.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
class TopoDS_Shape;
class BOP_ListOfCheckResult;


//! check the validity of argument(s) for Boolean Operations <br>
class BOP_ArgumentAnalyzer  {
public:

  DEFINE_STANDARD_ALLOC

  //! empty constructor <br>
  Standard_EXPORT   BOP_ArgumentAnalyzer();
  //! sets object shape <br>
  Standard_EXPORT     void SetShape1(const TopoDS_Shape& TheShape) ;
  //! sets tool shape <br>
  Standard_EXPORT     void SetShape2(const TopoDS_Shape& TheShape) ;
  //! returns object shape; <br>
  Standard_EXPORT    const TopoDS_Shape& GetShape1() const;
  //! returns tool shape <br>
  Standard_EXPORT    const TopoDS_Shape& GetShape2() const;
  //! returns ref <br>
  Standard_EXPORT     BOP_Operation& OperationType() ;
  //! returns ref <br>
  Standard_EXPORT     Standard_Boolean& StopOnFirstFaulty() ;
  //! Returns (modifiable) mode <br>
//!          that means checking types of shapes. <br>
        Standard_Boolean& ArgumentTypeMode() ;
  //! Returns (modifiable) mode that means <br>
//!          checking of self-intersection of shapes. <br>
        Standard_Boolean& SelfInterMode() ;
  //! Returns (modifiable) mode that means <br>
//!          checking of small edges. <br>
        Standard_Boolean& SmallEdgeMode() ;
  //! Returns (modifiable) mode that means <br>
//!          checking of possibility to split or rebuild faces. <br>
        Standard_Boolean& RebuildFaceMode() ;
  //! Returns (modifiable) mode that means <br>
//!          checking of tangency between subshapes. <br>
        Standard_Boolean& TangentMode() ;
  //! Returns (modifiable) mode that means <br>
//!          checking of problem of merging vertices. <br>
        Standard_Boolean& MergeVertexMode() ;
  //! Returns (modifiable) mode that means <br>
//!          checking of problem of merging edges. <br>
        Standard_Boolean& MergeEdgeMode() ;
  //! performs analysis <br>
  Standard_EXPORT     void Perform() ;
  //! result of test <br>
  Standard_EXPORT     Standard_Boolean HasFaulty() const;
  //! returns a result of test <br>
  Standard_EXPORT    const BOP_ListOfCheckResult& GetCheckResult() const;





protected:

  
  Standard_EXPORT     void TestTypes() ;
  
  Standard_EXPORT     void TestSelfInterferences() ;
  
  Standard_EXPORT     void TestSmallEdge() ;
  
  Standard_EXPORT     void TestRebuildFace() ;
  
  Standard_EXPORT     void TestTangent() ;
  
  Standard_EXPORT     void TestMergeSubShapes(const TopAbs_ShapeEnum theType) ;
  
  Standard_EXPORT     void TestMergeVertex() ;
  
  Standard_EXPORT     void TestMergeEdge() ;




private:



TopoDS_Shape myShape1;
TopoDS_Shape myShape2;
Standard_Boolean myStopOnFirst;
BOP_Operation myOperation;
Standard_Boolean myArgumentTypeMode;
Standard_Boolean mySelfInterMode;
Standard_Boolean mySmallEdgeMode;
Standard_Boolean myRebuildFaceMode;
Standard_Boolean myTangentMode;
Standard_Boolean myMergeVertexMode;
Standard_Boolean myMergeEdgeMode;
BOP_ListOfCheckResult myResult;


};


#include <BOP_ArgumentAnalyzer.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
