// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_Array1OfNode_HeaderFile
#define _IGESAppli_Array1OfNode_HeaderFile

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
#ifndef _Handle_IGESAppli_Node_HeaderFile
#include <Handle_IGESAppli_Node.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESAppli_Node;



class IGESAppli_Array1OfNode  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   IGESAppli_Array1OfNode(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   IGESAppli_Array1OfNode(const Handle(IGESAppli_Node)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(IGESAppli_Node)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~IGESAppli_Array1OfNode()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const IGESAppli_Array1OfNode& Assign(const IGESAppli_Array1OfNode& Other) ;
   const IGESAppli_Array1OfNode& operator =(const IGESAppli_Array1OfNode& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESAppli_Node)& Value) ;
  
       const Handle_IGESAppli_Node& Value(const Standard_Integer Index) const;
     const Handle_IGESAppli_Node& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_IGESAppli_Node& ChangeValue(const Standard_Integer Index) ;
      Handle_IGESAppli_Node& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   IGESAppli_Array1OfNode(const IGESAppli_Array1OfNode& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_IGESAppli_Node
#define Array1Item_hxx <IGESAppli_Node.hxx>
#define TCollection_Array1 IGESAppli_Array1OfNode
#define TCollection_Array1_hxx <IGESAppli_Array1OfNode.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
