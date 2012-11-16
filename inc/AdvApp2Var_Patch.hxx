// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AdvApp2Var_Patch_HeaderFile
#define _AdvApp2Var_Patch_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfReal_HeaderFile
#include <Handle_TColStd_HArray2OfReal.hxx>
#endif
#ifndef _AdvApp2Var_EvaluatorFunc2Var_HeaderFile
#include <AdvApp2Var_EvaluatorFunc2Var.hxx>
#endif
#ifndef _Handle_TColgp_HArray2OfPnt_HeaderFile
#include <Handle_TColgp_HArray2OfPnt.hxx>
#endif
class TColStd_HArray1OfReal;
class TColStd_HArray2OfReal;
class AdvApp2Var_Context;
class AdvApp2Var_Framework;
class AdvApp2Var_Criterion;
class TColgp_HArray2OfPnt;



class AdvApp2Var_Patch  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   AdvApp2Var_Patch();
  
  Standard_EXPORT   AdvApp2Var_Patch(const Standard_Real U0,const Standard_Real U1,const Standard_Real V0,const Standard_Real V1,const Standard_Integer iu,const Standard_Integer iv);
  
  Standard_EXPORT     Standard_Boolean IsDiscretised() const;
  
  Standard_EXPORT     void Discretise(const AdvApp2Var_Context& Conditions,const AdvApp2Var_Framework& Constraints,const AdvApp2Var_EvaluatorFunc2Var& func) ;
  
  Standard_EXPORT     Standard_Boolean IsApproximated() const;
  
  Standard_EXPORT     Standard_Boolean HasResult() const;
  
  Standard_EXPORT     void MakeApprox(const AdvApp2Var_Context& Conditions,const AdvApp2Var_Framework& Constraints,const Standard_Integer NumDec) ;
  
  Standard_EXPORT     void AddConstraints(const AdvApp2Var_Context& Conditions,const AdvApp2Var_Framework& Constraints) ;
  
  Standard_EXPORT     void AddErrors(const AdvApp2Var_Framework& Constraints) ;
  
  Standard_EXPORT     void ChangeDomain(const Standard_Real a,const Standard_Real b,const Standard_Real c,const Standard_Real d) ;
  
  Standard_EXPORT     void ResetApprox() ;
  
  Standard_EXPORT     void OverwriteApprox() ;
  
  Standard_EXPORT     Standard_Real U0() const;
  
  Standard_EXPORT     Standard_Real U1() const;
  
  Standard_EXPORT     Standard_Real V0() const;
  
  Standard_EXPORT     Standard_Real V1() const;
  
  Standard_EXPORT     Standard_Integer UOrder() const;
  
  Standard_EXPORT     Standard_Integer VOrder() const;
  
  Standard_EXPORT     Standard_Integer CutSense() const;
  
  Standard_EXPORT     Standard_Integer CutSense(const AdvApp2Var_Criterion& Crit,const Standard_Integer NumDec) const;
  
  Standard_EXPORT     Standard_Integer NbCoeffInU() const;
  
  Standard_EXPORT     Standard_Integer NbCoeffInV() const;
  
  Standard_EXPORT     void ChangeNbCoeff(const Standard_Integer NbCoeffU,const Standard_Integer NbCoeffV) ;
  
  Standard_EXPORT     Handle_TColgp_HArray2OfPnt Poles(const Standard_Integer SSPIndex,const AdvApp2Var_Context& Conditions) const;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfReal Coefficients(const Standard_Integer SSPIndex,const AdvApp2Var_Context& Conditions) const;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfReal MaxErrors() const;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfReal AverageErrors() const;
  
  Standard_EXPORT     Handle_TColStd_HArray2OfReal IsoErrors() const;
  
  Standard_EXPORT     Standard_Real CritValue() const;
  
  Standard_EXPORT     void SetCritValue(const Standard_Real dist) ;





protected:





private:

  
  Standard_EXPORT   AdvApp2Var_Patch(const AdvApp2Var_Patch& P);


Standard_Real myU0;
Standard_Real myU1;
Standard_Real myV0;
Standard_Real myV1;
Standard_Integer myOrdInU;
Standard_Integer myOrdInV;
Standard_Integer myNbCoeffInU;
Standard_Integer myNbCoeffInV;
Standard_Boolean myApprIsDone;
Standard_Boolean myHasResult;
Handle_TColStd_HArray1OfReal myEquation;
Handle_TColStd_HArray1OfReal myMaxErrors;
Handle_TColStd_HArray1OfReal myMoyErrors;
Handle_TColStd_HArray2OfReal myIsoErrors;
Standard_Integer myCutSense;
Standard_Boolean myDiscIsDone;
Handle_TColStd_HArray1OfReal mySosoTab;
Handle_TColStd_HArray1OfReal myDisoTab;
Handle_TColStd_HArray1OfReal mySodiTab;
Handle_TColStd_HArray1OfReal myDidiTab;
Standard_Real myCritValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
