// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_IndexedDataMapOfVertexPoint_HeaderFile
#define _TopOpeBRepDS_IndexedDataMapOfVertexPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint_HeaderFile
#include <Handle_TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopOpeBRepDS_Point;
class TopTools_ShapeMapHasher;
class TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint;



class TopOpeBRepDS_IndexedDataMapOfVertexPoint  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepDS_IndexedDataMapOfVertexPoint(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TopOpeBRepDS_IndexedDataMapOfVertexPoint& Assign(const TopOpeBRepDS_IndexedDataMapOfVertexPoint& Other) ;
    TopOpeBRepDS_IndexedDataMapOfVertexPoint& operator =(const TopOpeBRepDS_IndexedDataMapOfVertexPoint& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TopOpeBRepDS_IndexedDataMapOfVertexPoint()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const TopoDS_Shape& K,const TopOpeBRepDS_Point& I) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const TopoDS_Shape& K,const TopOpeBRepDS_Point& T) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const TopoDS_Shape& K) const;
  
  Standard_EXPORT    const TopoDS_Shape& FindKey(const Standard_Integer I) const;
  
  Standard_EXPORT    const TopOpeBRepDS_Point& FindFromIndex(const Standard_Integer I) const;
   const TopOpeBRepDS_Point& operator ()(const Standard_Integer I) const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT     TopOpeBRepDS_Point& ChangeFromIndex(const Standard_Integer I) ;
    TopOpeBRepDS_Point& operator ()(const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const TopoDS_Shape& K) const;
  
  Standard_EXPORT    const TopOpeBRepDS_Point& FindFromKey(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     TopOpeBRepDS_Point& ChangeFromKey(const TopoDS_Shape& K) ;
  
  Standard_EXPORT     Standard_Address FindFromKey1(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFromKey1(const TopoDS_Shape& K) ;





protected:





private:

  
  Standard_EXPORT   TopOpeBRepDS_IndexedDataMapOfVertexPoint(const TopOpeBRepDS_IndexedDataMapOfVertexPoint& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
