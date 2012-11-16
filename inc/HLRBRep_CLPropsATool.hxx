// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_CLPropsATool_HeaderFile
#define _HLRBRep_CLPropsATool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class gp_Pnt2d;
class gp_Vec2d;



class HLRBRep_CLPropsATool  {
public:

  DEFINE_STANDARD_ALLOC

  //! Computes the  point <P> of  parameter <U>   on the <br>
//!          Curve from HLRBRep <C>. <br>
      static  void Value(const Standard_Address A,const Standard_Real U,gp_Pnt2d& P) ;
  //! Computes the point <P>  and  first derivative <V1> <br>
//!          of parameter <U> on the curve <C>. <br>
      static  void D1(const Standard_Address A,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1) ;
  //! Computes the point <P>,  the first derivative <V1> <br>
//!          and second derivative <V2> of parameter <U> on the <br>
//!          curve <C>. <br>
      static  void D2(const Standard_Address A,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) ;
  //! Computes the point <P>, the first derivative <V1>, <br>
//!          the second derivative  <V2>   and third derivative <br>
//!          <V3> of parameter <U> on the curve <C>. <br>
      static  void D3(const Standard_Address A,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) ;
  //! returns the order  of continuity of the curve <C>. <br>
//!          returns 1 :  first  derivative only is  computable <br>
//!          returns 2  : first and  second derivative only are <br>
//!          computable.  returns  3 : first,  second and third <br>
//!          are computable. <br>
      static  Standard_Integer Continuity(const Standard_Address A) ;
  //! returns the first parameter bound of the curve. <br>
//! <br>
      static  Standard_Real FirstParameter(const Standard_Address A) ;
  //! returns the  last  parameter bound  of  the curve. <br>
//!          FirstParameter must be less than LastParamenter. <br>
      static  Standard_Real LastParameter(const Standard_Address A) ;





protected:





private:





};


#include <HLRBRep_CLPropsATool.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
