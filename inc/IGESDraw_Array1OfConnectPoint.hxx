// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_Array1OfConnectPoint_HeaderFile
#define _IGESDraw_Array1OfConnectPoint_HeaderFile

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
#ifndef _Handle_IGESDraw_ConnectPoint_HeaderFile
#include <Handle_IGESDraw_ConnectPoint.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESDraw_ConnectPoint;



class IGESDraw_Array1OfConnectPoint  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   IGESDraw_Array1OfConnectPoint(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   IGESDraw_Array1OfConnectPoint(const Handle(IGESDraw_ConnectPoint)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(IGESDraw_ConnectPoint)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~IGESDraw_Array1OfConnectPoint()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const IGESDraw_Array1OfConnectPoint& Assign(const IGESDraw_Array1OfConnectPoint& Other) ;
   const IGESDraw_Array1OfConnectPoint& operator =(const IGESDraw_Array1OfConnectPoint& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESDraw_ConnectPoint)& Value) ;
  
       const Handle_IGESDraw_ConnectPoint& Value(const Standard_Integer Index) const;
     const Handle_IGESDraw_ConnectPoint& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_IGESDraw_ConnectPoint& ChangeValue(const Standard_Integer Index) ;
      Handle_IGESDraw_ConnectPoint& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   IGESDraw_Array1OfConnectPoint(const IGESDraw_Array1OfConnectPoint& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_IGESDraw_ConnectPoint
#define Array1Item_hxx <IGESDraw_ConnectPoint.hxx>
#define TCollection_Array1 IGESDraw_Array1OfConnectPoint
#define TCollection_Array1_hxx <IGESDraw_Array1OfConnectPoint.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
