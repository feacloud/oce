// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape_HeaderFile
#define _PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape_HeaderFile
#include <Handle_PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_PNaming_NamedShape_HeaderFile
#include <Handle_PNaming_NamedShape.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class PNaming_NamedShape;
class PNaming_FieldOfHArray1OfNamedShape;
class PNaming_VArrayTNodeOfFieldOfHArray1OfNamedShape;


class PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape();
  
  Standard_EXPORT   PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape(const Handle(PNaming_NamedShape)& aValue);
  
  Standard_EXPORT     void SetValue(const Handle(PNaming_NamedShape)& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Handle(PNaming_NamedShape) _CSFDB_GetPNaming_VArrayNodeOfFieldOfHArray1OfNamedShapemyValue() const { return myValue; }
    void _CSFDB_SetPNaming_VArrayNodeOfFieldOfHArray1OfNamedShapemyValue(const Handle(PNaming_NamedShape)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape)

protected:




private: 


Handle_PNaming_NamedShape myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
