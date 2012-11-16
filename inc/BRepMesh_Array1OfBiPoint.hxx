// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_Array1OfBiPoint_HeaderFile
#define _BRepMesh_Array1OfBiPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class BRepMesh_BiPoint;



class BRepMesh_Array1OfBiPoint  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepMesh_Array1OfBiPoint(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   BRepMesh_Array1OfBiPoint(const BRepMesh_BiPoint& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const BRepMesh_BiPoint& V) ;
  
  Standard_EXPORT     void Destroy() ;
~BRepMesh_Array1OfBiPoint()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const BRepMesh_Array1OfBiPoint& Assign(const BRepMesh_Array1OfBiPoint& Other) ;
   const BRepMesh_Array1OfBiPoint& operator =(const BRepMesh_Array1OfBiPoint& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const BRepMesh_BiPoint& Value) ;
  
       const BRepMesh_BiPoint& Value(const Standard_Integer Index) const;
     const BRepMesh_BiPoint& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        BRepMesh_BiPoint& ChangeValue(const Standard_Integer Index) ;
      BRepMesh_BiPoint& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   BRepMesh_Array1OfBiPoint(const BRepMesh_Array1OfBiPoint& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item BRepMesh_BiPoint
#define Array1Item_hxx <BRepMesh_BiPoint.hxx>
#define TCollection_Array1 BRepMesh_Array1OfBiPoint
#define TCollection_Array1_hxx <BRepMesh_Array1OfBiPoint.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
