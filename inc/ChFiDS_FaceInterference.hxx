// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_FaceInterference_HeaderFile
#define _ChFiDS_FaceInterference_HeaderFile

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
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Geom2d_Curve;


//! interference face/fillet <br>
class ChFiDS_FaceInterference  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   ChFiDS_FaceInterference();
  
        void SetInterference(const Standard_Integer LineIndex,const TopAbs_Orientation Trans,const Handle(Geom2d_Curve)& PCurv1,const Handle(Geom2d_Curve)& PCurv2) ;
  
  Standard_EXPORT     void SetTransition(const TopAbs_Orientation Trans) ;
  
        void SetFirstParameter(const Standard_Real U1) ;
  
        void SetLastParameter(const Standard_Real U1) ;
  
  Standard_EXPORT     void SetParameter(const Standard_Real U1,const Standard_Boolean IsFirst) ;
  
        Standard_Integer LineIndex() const;
  
        void SetLineIndex(const Standard_Integer I) ;
  
        TopAbs_Orientation Transition() const;
  
       const Handle_Geom2d_Curve& PCurveOnFace() const;
  
       const Handle_Geom2d_Curve& PCurveOnSurf() const;
  
        Handle_Geom2d_Curve& ChangePCurveOnFace() ;
  
        Handle_Geom2d_Curve& ChangePCurveOnSurf() ;
  
        Standard_Real FirstParameter() const;
  
        Standard_Real LastParameter() const;
  
  Standard_EXPORT     Standard_Real Parameter(const Standard_Boolean IsFirst) const;





protected:





private:



Standard_Real firstParam;
Standard_Real lastParam;
Handle_Geom2d_Curve pCurveOnFace;
Handle_Geom2d_Curve pCurveOnSurf;
Standard_Integer lineindex;
TopAbs_Orientation LineTransition;


};


#include <ChFiDS_FaceInterference.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
