// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Intf_Interference_HeaderFile
#define _Intf_Interference_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Intf_SeqOfSectionPoint_HeaderFile
#include <Intf_SeqOfSectionPoint.hxx>
#endif
#ifndef _Intf_SeqOfSectionLine_HeaderFile
#include <Intf_SeqOfSectionLine.hxx>
#endif
#ifndef _Intf_SeqOfTangentZone_HeaderFile
#include <Intf_SeqOfTangentZone.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_OutOfRange;
class Intf_SectionPoint;
class Intf_SectionLine;
class Intf_TangentZone;


//! Describes the   Interference  computation    result <br>
//!          between polygon2d or polygon3d or polyhedron. <br>
class Intf_Interference  {
public:

  DEFINE_STANDARD_ALLOC

  //! Gives the number   of  points of  intersection  in the <br>
//!          interference. <br>
        Standard_Integer NbSectionPoints() const;
  //! Gives the point of  intersection of address  Index in <br>
//!          the interference. <br>
       const Intf_SectionPoint& PntValue(const Standard_Integer Index) const;
  //! Gives the number  of polylines of  intersection in the <br>
//!          interference. <br>
        Standard_Integer NbSectionLines() const;
  //! Gives the polyline of intersection at address <Index> in <br>
//!          the interference. <br>
       const Intf_SectionLine& LineValue(const Standard_Integer Index) const;
  //! Gives the number of zones of tangence in the interference. <br>
        Standard_Integer NbTangentZones() const;
  //! Gives  the zone of  tangence at address   Index in the <br>
//!          interference. <br>
       const Intf_TangentZone& ZoneValue(const Standard_Integer Index) const;
  //! Gives the tolerance used for the calculation. <br>
        Standard_Real GetTolerance() const;
  //! Tests if the polylines of  intersection or the zones of <br>
//!          tangence contain the point of intersection <ThePnt>. <br>
  Standard_EXPORT     Standard_Boolean Contains(const Intf_SectionPoint& ThePnt) const;
  //! Inserts a new zone of tangence in  the current list of <br>
//!          tangent zones of  the interference  and  returns  True <br>
//!          when done. <br>
  Standard_EXPORT     Standard_Boolean Insert(const Intf_TangentZone& TheZone) ;
  //! Insert a new segment of intersection in the current  list of <br>
//!          polylines of intersection of the interference. <br>
  Standard_EXPORT     void Insert(const Intf_SectionPoint& pdeb,const Intf_SectionPoint& pfin) ;
  
  Standard_EXPORT     void Dump() const;





protected:

  
  Standard_EXPORT   Intf_Interference(const Standard_Boolean Self);
  //! Only one argument for the intersection. <br>
  Standard_EXPORT     void SelfInterference(const Standard_Boolean Self) ;


Intf_SeqOfSectionPoint mySPoins;
Intf_SeqOfSectionLine mySLines;
Intf_SeqOfTangentZone myTZones;
Standard_Boolean SelfIntf;
Standard_Real Tolerance;


private:





};


#include <Intf_Interference.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
