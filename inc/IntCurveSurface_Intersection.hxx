// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurveSurface_Intersection_HeaderFile
#define _IntCurveSurface_Intersection_HeaderFile

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
#ifndef _IntCurveSurface_SequenceOfPnt_HeaderFile
#include <IntCurveSurface_SequenceOfPnt.hxx>
#endif
#ifndef _IntCurveSurface_SequenceOfSeg_HeaderFile
#include <IntCurveSurface_SequenceOfSeg.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class StdFail_NotDone;
class Standard_OutOfRange;
class IntCurveSurface_IntersectionPoint;
class IntCurveSurface_IntersectionSegment;



class IntCurveSurface_Intersection  {
public:

  DEFINE_STANDARD_ALLOC

  //! returns the <done> field. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! returns the number of IntersectionPoint <br>
//!          if IsDone returns True. <br>
//!          else NotDone is raised. <br>
  Standard_EXPORT     Standard_Integer NbPoints() const;
  //! returns the IntersectionPoint of range <Index> <br>
//!          raises NotDone if the computation has failed or if <br>
//!          the computation has not been done <br>
//!          raises OutOfRange if Index is not in the range <1..NbPoints> <br>
  Standard_EXPORT    const IntCurveSurface_IntersectionPoint& Point(const Standard_Integer Index) const;
  //! returns the number of IntersectionSegment <br>
//!          if IsDone returns True. <br>
//!          else NotDone is raised. <br>
  Standard_EXPORT     Standard_Integer NbSegments() const;
  //! returns the IntersectionSegment of range <Index> <br>
//!          raises NotDone if the computation has failed or if <br>
//!          the computation has not been done <br>
//!          raises OutOfRange if Index is not in the range <1..NbSegment> <br>
  Standard_EXPORT    const IntCurveSurface_IntersectionSegment& Segment(const Standard_Integer Index) const;
  //! Dump all the fields. <br>
  Standard_EXPORT     void Dump() const;





protected:

  //! Empty Constructor; <br>
  Standard_EXPORT   IntCurveSurface_Intersection();
  //! Internal method <br>
//!          copy the <Inter> fields to <me> <br>
  Standard_EXPORT     void SetValues(const IntCurveSurface_Intersection& Inter) ;
  //! Internal method <br>
//!          Append the IntersectionPoints and <br>
//!          IntersectionSegments of <Inter> to <me>. <br>
  Standard_EXPORT     void Append(const IntCurveSurface_Intersection& Inter,const Standard_Real FirstParamOnCurve,const Standard_Real LastParamOnCurve) ;
  //! Internal method <br>
//!          Append the IntersectionPoints of <Inter> to <me> <br>
  Standard_EXPORT     void Append(const IntCurveSurface_IntersectionPoint& Pt) ;
  //! Internal method <br>
//!          Append the IntersectionPoints of <Inter> to <me> <br>
  Standard_EXPORT     void Append(const IntCurveSurface_IntersectionSegment& Seg) ;
  //! Internal method <br>
//!          Reset all the fields of <me> <br>
//!          Clear the sequences of IntersectionPoints and Segments <br>
//!          Set the field <done> to Standard_False. <br>
  Standard_EXPORT     void ResetFields() ;


Standard_Boolean done;


private:



IntCurveSurface_SequenceOfPnt lpnt;
IntCurveSurface_SequenceOfSeg lseg;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
