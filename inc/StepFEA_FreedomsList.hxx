// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_FreedomsList_HeaderFile
#define _StepFEA_FreedomsList_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_FreedomsList_HeaderFile
#include <Handle_StepFEA_FreedomsList.hxx>
#endif

#ifndef _Handle_StepFEA_HArray1OfDegreeOfFreedom_HeaderFile
#include <Handle_StepFEA_HArray1OfDegreeOfFreedom.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepFEA_HArray1OfDegreeOfFreedom;


//! Representation of STEP entity FreedomsList <br>
class StepFEA_FreedomsList : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_FreedomsList();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(StepFEA_HArray1OfDegreeOfFreedom)& aFreedoms) ;
  //! Returns field Freedoms <br>
  Standard_EXPORT     Handle_StepFEA_HArray1OfDegreeOfFreedom Freedoms() const;
  //! Set field Freedoms <br>
  Standard_EXPORT     void SetFreedoms(const Handle(StepFEA_HArray1OfDegreeOfFreedom)& Freedoms) ;




  DEFINE_STANDARD_RTTI(StepFEA_FreedomsList)

protected:




private: 


Handle_StepFEA_HArray1OfDegreeOfFreedom theFreedoms;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif