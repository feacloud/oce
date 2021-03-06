// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_Array1OfConnectedEdgeSet_HeaderFile
#define _StepShape_Array1OfConnectedEdgeSet_HeaderFile

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
#ifndef _Handle_StepShape_ConnectedEdgeSet_HeaderFile
#include <Handle_StepShape_ConnectedEdgeSet.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepShape_ConnectedEdgeSet;



class StepShape_Array1OfConnectedEdgeSet  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   StepShape_Array1OfConnectedEdgeSet(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepShape_Array1OfConnectedEdgeSet(const Handle(StepShape_ConnectedEdgeSet)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(StepShape_ConnectedEdgeSet)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepShape_Array1OfConnectedEdgeSet()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepShape_Array1OfConnectedEdgeSet& Assign(const StepShape_Array1OfConnectedEdgeSet& Other) ;
   const StepShape_Array1OfConnectedEdgeSet& operator =(const StepShape_Array1OfConnectedEdgeSet& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepShape_ConnectedEdgeSet)& Value) ;
  
       const Handle_StepShape_ConnectedEdgeSet& Value(const Standard_Integer Index) const;
     const Handle_StepShape_ConnectedEdgeSet& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_StepShape_ConnectedEdgeSet& ChangeValue(const Standard_Integer Index) ;
      Handle_StepShape_ConnectedEdgeSet& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepShape_Array1OfConnectedEdgeSet(const StepShape_Array1OfConnectedEdgeSet& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_StepShape_ConnectedEdgeSet
#define Array1Item_hxx <StepShape_ConnectedEdgeSet.hxx>
#define TCollection_Array1 StepShape_Array1OfConnectedEdgeSet
#define TCollection_Array1_hxx <StepShape_Array1OfConnectedEdgeSet.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
