// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_BuilderTools_HeaderFile
#define _BOP_BuilderTools_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BooleanOperations_StateOfShape_HeaderFile
#include <BooleanOperations_StateOfShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BOP_Operation_HeaderFile
#include <BOP_Operation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
class TopoDS_Face;
class TopoDS_Edge;
class TColStd_IndexedMapOfInteger;
class BOPTools_CArray1OfSSInterference;
class BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger;
class TopTools_ListOfShape;
class BOP_ListOfConnexityBlock;



//!  Some  handy tools used by classes <br>
//!  BOP_ShellShell, <br>
//!  BOP_ShellSolid, <br>
//!  BOP_SolidSolid <br>
//!  to build a result <br>
class BOP_BuilderTools  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  BooleanOperations_StateOfShape StateToCompare(const Standard_Integer iRank,const BOP_Operation anOp) ;
  
  Standard_EXPORT   static  Standard_Boolean ToReverseSection(const Standard_Integer iRank,const BOP_Operation anOp) ;
  
  Standard_EXPORT   static  Standard_Boolean ToReverseFace(const Standard_Integer iRank,const BOP_Operation anOp) ;
  
  Standard_EXPORT   static  void OrientSectionEdgeOnF1(const TopoDS_Face& aF1,const TopoDS_Face& aF2,const Standard_Integer iRank,const BOP_Operation anOp,TopoDS_Edge& aE) ;
  
  Standard_EXPORT   static  Standard_Boolean IsSameDomainFaceWithF1(const Standard_Integer nF1,const Standard_Integer nF2,const TColStd_IndexedMapOfInteger& aFFM,BOPTools_CArray1OfSSInterference& aFFs) ;
  
  Standard_EXPORT   static  Standard_Boolean IsPartIN2DToKeep(const TopAbs_State aSt,const Standard_Integer iRank,const BOP_Operation anOp) ;
  
  Standard_EXPORT   static  Standard_Boolean IsPartOn2dToKeep(const TopAbs_State aSt,const Standard_Integer iRank,const BOP_Operation anOp) ;
  
  Standard_EXPORT   static  void DoMap(BOPTools_CArray1OfSSInterference& aFFs,BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger& aFFMap) ;
  
  Standard_EXPORT   static  void MakeConnexityBlocks(const TopTools_ListOfShape& aLE,const TopAbs_ShapeEnum aType,BOP_ListOfConnexityBlock& aLConBlks) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
