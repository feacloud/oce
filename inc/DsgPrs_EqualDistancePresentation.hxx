// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_EqualDistancePresentation_HeaderFile
#define _DsgPrs_EqualDistancePresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
#ifndef _DsgPrs_ArrowSide_HeaderFile
#include <DsgPrs_ArrowSide.hxx>
#endif
class Prs3d_Presentation;
class Prs3d_Drawer;
class gp_Pnt;
class Geom_Plane;
class gp_Dir;
class gp_Circ;


//! A framework to display equal distances between shapes and a given plane. <br>
//! The distance is the length of a projection from the shape to the plane. <br>
//! These distances are used to compare two shapes by this vector alone. <br>
class DsgPrs_EqualDistancePresentation  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Adds the points Point1, Point2, Point3 Point4, and the <br>
//! plane Plane to the presentation object aPresentation. <br>
//! The display attributes of these elements is defined by the attribute manager aDrawer. <br>
//! The distance is the length of a projection from the shape to the plane. <br>
//! These distances are used to compare two shapes by this vector alone. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const gp_Pnt& Point1,const gp_Pnt& Point2,const gp_Pnt& Point3,const gp_Pnt& Point4,const Handle(Geom_Plane)& Plane) ;
  //!  is used for presentation of interval between <br>
//!           two lines or two points or between a line and a point. <br>
  Standard_EXPORT   static  void AddInterval(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const gp_Pnt& aPoint1,const gp_Pnt& aPoint2,const gp_Dir& aDir,const gp_Pnt& aPosition,const DsgPrs_ArrowSide anArrowSide,gp_Pnt& anExtremePnt1,gp_Pnt& anExtremePnt2) ;
  //!is used for presentation of interval between two arcs. <br>
//!            One of arcs can have a zero radius. <br>
  Standard_EXPORT   static  void AddIntervalBetweenTwoArcs(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const gp_Circ& aCircle1,const gp_Circ& aCircle2,const gp_Pnt& aPoint1,const gp_Pnt& aPoint2,const gp_Pnt& aPoint3,const gp_Pnt& aPoint4,const DsgPrs_ArrowSide anArrowSide) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif