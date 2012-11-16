// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_PaveSet_HeaderFile
#define _TopOpeBRepBuild_PaveSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _TopOpeBRepBuild_ListOfPave_HeaderFile
#include <TopOpeBRepBuild_ListOfPave.hxx>
#endif
#ifndef _TopOpeBRepBuild_ListIteratorOfListOfPave_HeaderFile
#include <TopOpeBRepBuild_ListIteratorOfListOfPave.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TopOpeBRepBuild_LoopSet_HeaderFile
#include <TopOpeBRepBuild_LoopSet.hxx>
#endif
#ifndef _Handle_TopOpeBRepBuild_Pave_HeaderFile
#include <Handle_TopOpeBRepBuild_Pave.hxx>
#endif
#ifndef _Handle_TopOpeBRepBuild_Loop_HeaderFile
#include <Handle_TopOpeBRepBuild_Loop.hxx>
#endif
class TopoDS_Shape;
class TopOpeBRepBuild_Pave;
class TopOpeBRepBuild_Loop;
class TopoDS_Edge;
class TopOpeBRepBuild_ListOfPave;



//! class providing an exploration of a set of vertices to build edges. <br>
//! It is similar to LoopSet from TopOpeBRepBuild where Loop is Pave. <br>
class TopOpeBRepBuild_PaveSet  : public TopOpeBRepBuild_LoopSet {
public:

  DEFINE_STANDARD_ALLOC

  //! Create a Pave set on edge <E>. It contains <E> vertices. <br>
  Standard_EXPORT   TopOpeBRepBuild_PaveSet(const TopoDS_Shape& E);
  
  Standard_EXPORT     void RemovePV(const Standard_Boolean B) ;
  //! Add <PV> in the Pave set. <br>
  Standard_EXPORT     void Append(const Handle(TopOpeBRepBuild_Pave)& PV) ;
  
  Standard_EXPORT   virtual  void InitLoop() ;
  
  Standard_EXPORT   virtual  Standard_Boolean MoreLoop() const;
  
  Standard_EXPORT   virtual  void NextLoop() ;
  
  Standard_EXPORT   virtual const Handle_TopOpeBRepBuild_Loop& Loop() const;
  
  Standard_EXPORT    const TopoDS_Edge& Edge() const;
  
  Standard_EXPORT     Standard_Boolean HasEqualParameters() ;
  
  Standard_EXPORT     Standard_Real EqualParameters() const;
  
  Standard_EXPORT     Standard_Boolean ClosedVertices() ;
  
  Standard_EXPORT   static  void SortPave(const TopOpeBRepBuild_ListOfPave& Lin,TopOpeBRepBuild_ListOfPave& Lout) ;





protected:





private:

  
  Standard_EXPORT     void Prepare() ;


TopoDS_Edge myEdge;
TopOpeBRepBuild_ListOfPave myVertices;
TopOpeBRepBuild_ListIteratorOfListOfPave myVerticesIt;
Standard_Integer myEdgeVertexIndex;
Standard_Integer myEdgeVertexCount;
Standard_Boolean myHasEqualParameters;
Standard_Real myEqualParameters;
Standard_Boolean myClosed;
Standard_Boolean myPrepareDone;
Standard_Boolean myRemovePV;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
