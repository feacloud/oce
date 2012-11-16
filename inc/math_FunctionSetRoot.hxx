// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_FunctionSetRoot_HeaderFile
#define _math_FunctionSetRoot_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _math_Matrix_HeaderFile
#include <math_Matrix.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _math_IntegerVector_HeaderFile
#include <math_IntegerVector.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class StdFail_NotDone;
class Standard_DimensionError;
class math_FunctionSetWithDerivatives;
class math_Vector;
class math_Matrix;


//! The math_FunctionSetRoot class calculates the root <br>
//! of a set of N functions of M variables (N<M, N=M or N>M). Knowing <br>
//! an initial guess of the solution and using a minimization algorithm, a search <br>
//! is made in the Newton direction and then in the Gradient direction if there <br>
//! is no success in the Newton direction. This algorithm can also be <br>
//! used for functions minimization. Knowledge of all the partial <br>
//! derivatives (the Jacobian) is required. <br>
class math_FunctionSetRoot  {
public:

  DEFINE_STANDARD_ALLOC

  //! is used in a sub-class to initialize correctly all the fields <br>
//!          of this class. <br>
//!          The range (1, F.NbVariables()) must be especially <br>
//!          respected for all vectors and matrix declarations. <br>
  Standard_EXPORT   math_FunctionSetRoot(math_FunctionSetWithDerivatives& F,const math_Vector& Tolerance,const Standard_Integer NbIterations = 100);
  //! is used in a sub-class to initialize correctly all the fields <br>
//!          of this class. <br>
//!          The range (1, F.NbVariables()) must be especially <br>
//!          respected for all vectors and matrix declarations. <br>
//!          The method SetTolerance must be called after this <br>
//!          constructor. <br>
  Standard_EXPORT   math_FunctionSetRoot(math_FunctionSetWithDerivatives& F,const Standard_Integer NbIterations = 100);
  //! is used to improve the root of the function F <br>
//!          from the initial guess StartingPoint. <br>
//!          The maximum number of iterations allowed is given by <br>
//!          NbIterations. <br>
//!          In this case, the solution is found when: <br>
//!          abs(Xi - Xi-1)(j) <= Tolerance(j) for all unknowns. <br>
  Standard_EXPORT   math_FunctionSetRoot(math_FunctionSetWithDerivatives& F,const math_Vector& StartingPoint,const math_Vector& Tolerance,const Standard_Integer NbIterations = 100);
  //! is used to improve the root of the function F <br>
//!          from the initial guess StartingPoint. <br>
//!          The maximum number of iterations allowed is given <br>
//!          by NbIterations. <br>
//!          In this case, the solution is found when: <br>
//!          abs(Xi - Xi-1) <= Tolerance for all unknowns. <br>
  Standard_EXPORT   math_FunctionSetRoot(math_FunctionSetWithDerivatives& F,const math_Vector& StartingPoint,const math_Vector& Tolerance,const math_Vector& infBound,const math_Vector& supBound,const Standard_Integer NbIterations = 100);
  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~math_FunctionSetRoot(){Delete();}
  //! Initializes the tolerance values. <br>
  Standard_EXPORT     void SetTolerance(const math_Vector& Tolerance) ;
  //! Improves the root of function F from the initial guess <br>
//! StartingPoint. infBound and supBound may be given to constrain the solution. <br>
//! Warning <br>
//! This method is called when computation of the solution is <br>
//! not performed by the constructors. <br>
  Standard_EXPORT     void Perform(math_FunctionSetWithDerivatives& F,const math_Vector& StartingPoint,const math_Vector& infBound,const math_Vector& supBound) ;
  //! This routine is called at the end of each iteration <br>
//!          to check if the solution was found. It can be redefined <br>
//!          in a sub-class to implement a specific test to stop the <br>
//!          iterations. <br>
//!          In this case, the solution is found when: <br>
//!          abs(Xi - Xi-1) <= Tolerance for all unknowns. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsSolutionReached(math_FunctionSetWithDerivatives& F) ;
  
//! Returns true if the computations are successful, otherwise returns false. <br>
        Standard_Boolean IsDone() const;
  //! Returns the number of iterations really done <br>
//!          during the computation of the root. <br>
//!          Exception NotDone is raised if the root was not found. <br>
        Standard_Integer NbIterations() const;
  //! returns the stateNumber (as returned by <br>
//!          F.GetStateNumber()) associated to the root found. <br>
        Standard_Integer StateNumber() const;
  //! Returns the value of the root of function F. <br>
//!          Exception NotDone is raised if the root was not found. <br>
       const math_Vector& Root() const;
  //! Outputs the root vector in Root. <br>
//!          Exception NotDone is raised if the root was not found. <br>
//!          Exception DimensionError is raised if the range of Root <br>
//!          is not equal to the range of the StartingPoint. <br>
  Standard_EXPORT     void Root(math_Vector& Root) const;
  //! Returns the matrix value of the derivative at the root. <br>
//!          Exception NotDone is raised if the root was not found. <br>
       const math_Matrix& Derivative() const;
  //! outputs the matrix value of the derivative <br>
//!          at the root in Der. <br>
//!          Exception NotDone is raised if the root was not found. <br>
//!          Exception DimensionError is raised if the column range <br>
//!          of <Der> is not equal to the range of the startingPoint. <br>
        void Derivative(math_Matrix& Der) const;
  //! returns the vector value of the error done <br>
//!          on the functions at the root. <br>
//!          Exception NotDone is raised if the root was not found. <br>
       const math_Vector& FunctionSetErrors() const;
  //! outputs the vector value of the error done <br>
//!          on the functions at the root in Err. <br>
//!          Exception NotDone is raised if the root was not found. <br>
//!          Exception DimensionError is raised if the range of Err <br>
//!          is not equal to the range of the StartingPoint. <br>
  Standard_EXPORT     void FunctionSetErrors(math_Vector& Err) const;
  //! Prints on the stream o information on the current state <br>
//!          of the object. <br>
//!          Is used to redefine the operator <<. <br>
  Standard_EXPORT     void Dump(Standard_OStream& o) const;





protected:



math_Vector Delta;
math_Vector Sol;
math_Matrix DF;
math_Vector Tol;


private:



Standard_Boolean Done;
Standard_Integer Kount;
Standard_Integer State;
Standard_Integer Itermax;
math_Vector InfBound;
math_Vector SupBound;
math_Vector SolSave;
math_Vector GH;
math_Vector DH;
math_Vector DHSave;
math_Vector FF;
math_Vector PreviousSolution;
math_Vector Save;
math_IntegerVector Constraints;
math_Vector Temp1;
math_Vector Temp2;
math_Vector Temp3;
math_Vector Temp4;


};


#include <math_FunctionSetRoot.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
