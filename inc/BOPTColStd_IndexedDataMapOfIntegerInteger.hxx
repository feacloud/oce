// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTColStd_IndexedDataMapOfIntegerInteger_HeaderFile
#define _BOPTColStd_IndexedDataMapOfIntegerInteger_HeaderFile

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
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerInteger_HeaderFile
#include <Handle_BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerInteger.hxx>
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
class TColStd_MapIntegerHasher;
class BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerInteger;



class BOPTColStd_IndexedDataMapOfIntegerInteger  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BOPTColStd_IndexedDataMapOfIntegerInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     BOPTColStd_IndexedDataMapOfIntegerInteger& Assign(const BOPTColStd_IndexedDataMapOfIntegerInteger& Other) ;
    BOPTColStd_IndexedDataMapOfIntegerInteger& operator =(const BOPTColStd_IndexedDataMapOfIntegerInteger& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~BOPTColStd_IndexedDataMapOfIntegerInteger()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const Standard_Integer& K,const Standard_Integer& I) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const Standard_Integer& K,const Standard_Integer& T) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Standard_Integer& K) const;
  
  Standard_EXPORT    const Standard_Integer& FindKey(const Standard_Integer I) const;
  
  Standard_EXPORT    const Standard_Integer& FindFromIndex(const Standard_Integer I) const;
   const Standard_Integer& operator ()(const Standard_Integer I) const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT     Standard_Integer& ChangeFromIndex(const Standard_Integer I) ;
    Standard_Integer& operator ()(const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const Standard_Integer& K) const;
  
  Standard_EXPORT    const Standard_Integer& FindFromKey(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Integer& ChangeFromKey(const Standard_Integer& K) ;
  
  Standard_EXPORT     Standard_Address FindFromKey1(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFromKey1(const Standard_Integer& K) ;





protected:





private:

  
  Standard_EXPORT   BOPTColStd_IndexedDataMapOfIntegerInteger(const BOPTColStd_IndexedDataMapOfIntegerInteger& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
