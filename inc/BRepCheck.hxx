// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepCheck_HeaderFile
#define _BRepCheck_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepCheck_Status_HeaderFile
#include <BRepCheck_Status.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class BRepCheck_ListOfStatus;
class TopoDS_Wire;
class TopoDS_Face;
class TopoDS_Edge;
class BRepCheck_Result;
class BRepCheck_Vertex;
class BRepCheck_Edge;
class BRepCheck_Wire;
class BRepCheck_Face;
class BRepCheck_Shell;
class BRepCheck_Analyzer;
class BRepCheck_ListOfStatus;
class BRepCheck_DataMapOfShapeListOfStatus;
class BRepCheck_DataMapOfShapeResult;
class BRepCheck_ListNodeOfListOfStatus;
class BRepCheck_ListIteratorOfListOfStatus;
class BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus;
class BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus;
class BRepCheck_DataMapNodeOfDataMapOfShapeResult;
class BRepCheck_DataMapIteratorOfDataMapOfShapeResult;


//! This package  provides tools to check the validity <br>
//!          of the BRep. <br>
class BRepCheck  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  void Add(BRepCheck_ListOfStatus& List,const BRepCheck_Status Stat) ;
  
  Standard_EXPORT   static  void Print(const BRepCheck_Status Stat,Standard_OStream& OS) ;
  
  Standard_EXPORT   static  Standard_Boolean SelfIntersection(const TopoDS_Wire& W,const TopoDS_Face& F,TopoDS_Edge& E1,TopoDS_Edge& E2) ;





protected:





private:




friend class BRepCheck_Result;
friend class BRepCheck_Vertex;
friend class BRepCheck_Edge;
friend class BRepCheck_Wire;
friend class BRepCheck_Face;
friend class BRepCheck_Shell;
friend class BRepCheck_Analyzer;
friend class BRepCheck_ListOfStatus;
friend class BRepCheck_DataMapOfShapeListOfStatus;
friend class BRepCheck_DataMapOfShapeResult;
friend class BRepCheck_ListNodeOfListOfStatus;
friend class BRepCheck_ListIteratorOfListOfStatus;
friend class BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus;
friend class BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus;
friend class BRepCheck_DataMapNodeOfDataMapOfShapeResult;
friend class BRepCheck_DataMapIteratorOfDataMapOfShapeResult;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
