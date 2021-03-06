// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_PointOnCurve_HeaderFile
#define _StepGeom_PointOnCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepGeom_PointOnCurve_HeaderFile
#include <Handle_StepGeom_PointOnCurve.hxx>
#endif

#ifndef _Handle_StepGeom_Curve_HeaderFile
#include <Handle_StepGeom_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _StepGeom_Point_HeaderFile
#include <StepGeom_Point.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class StepGeom_Curve;
class TCollection_HAsciiString;



class StepGeom_PointOnCurve : public StepGeom_Point {

public:

  //! Returns a PointOnCurve <br>
  Standard_EXPORT   StepGeom_PointOnCurve();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_Curve)& aBasisCurve,const Standard_Real aPointParameter) ;
  
  Standard_EXPORT     void SetBasisCurve(const Handle(StepGeom_Curve)& aBasisCurve) ;
  
  Standard_EXPORT     Handle_StepGeom_Curve BasisCurve() const;
  
  Standard_EXPORT     void SetPointParameter(const Standard_Real aPointParameter) ;
  
  Standard_EXPORT     Standard_Real PointParameter() const;




  DEFINE_STANDARD_RTTI(StepGeom_PointOnCurve)

protected:




private: 


Handle_StepGeom_Curve basisCurve;
Standard_Real pointParameter;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
