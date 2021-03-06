// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_CurveRepresentation_HeaderFile
#define _BRep_CurveRepresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRep_CurveRepresentation_HeaderFile
#include <Handle_BRep_CurveRepresentation.hxx>
#endif

#ifndef _TopLoc_Location_HeaderFile
#include <TopLoc_Location.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Handle_Poly_Triangulation_HeaderFile
#include <Handle_Poly_Triangulation.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Handle_Poly_Polygon3D_HeaderFile
#include <Handle_Poly_Polygon3D.hxx>
#endif
#ifndef _Handle_Poly_Polygon2D_HeaderFile
#include <Handle_Poly_Polygon2D.hxx>
#endif
#ifndef _Handle_Poly_PolygonOnTriangulation_HeaderFile
#include <Handle_Poly_PolygonOnTriangulation.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class Standard_DomainError;
class TopLoc_Location;
class Geom_Surface;
class Poly_Triangulation;
class Geom_Curve;
class Geom2d_Curve;
class Poly_Polygon3D;
class Poly_Polygon2D;
class Poly_PolygonOnTriangulation;


//! Root class for the curve representations. Contains <br>
//!          a location. <br>
class BRep_CurveRepresentation : public MMgt_TShared {

public:

  //! A 3D curve representation. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsCurve3D() const;
  //! A curve in the parametric space of a surface. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsCurveOnSurface() const;
  //! A continuity between two surfaces. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsRegularity() const;
  //! A curve with two parametric   curves  on the  same <br>
//!          surface. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsCurveOnClosedSurface() const;
  //! Is it a curve in the parametric space  of <S> with <br>
//!          location <L>. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsCurveOnSurface(const Handle(Geom_Surface)& S,const TopLoc_Location& L) const;
  //! Is it  a  regularity between  <S1> and   <S2> with <br>
//!          location <L1> and <L2>. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsRegularity(const Handle(Geom_Surface)& S1,const Handle(Geom_Surface)& S2,const TopLoc_Location& L1,const TopLoc_Location& L2) const;
  //! A 3D polygon representation. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsPolygon3D() const;
  //! A representation by an array of nodes on a <br>
//!          triangulation. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsPolygonOnTriangulation() const;
  //! Is it a polygon in the definition of <T> with <br>
//!          location <L>. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsPolygonOnTriangulation(const Handle(Poly_Triangulation)& T,const TopLoc_Location& L) const;
  //! A representation by two arrays of nodes on a <br>
//!          triangulation. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsPolygonOnClosedTriangulation() const;
  //! A polygon in the parametric space of a surface. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsPolygonOnSurface() const;
  //! Is it a polygon in the parametric space  of <S> with <br>
//!          location <L>. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsPolygonOnSurface(const Handle(Geom_Surface)& S,const TopLoc_Location& L) const;
  //! Two   2D polygon  representations  in the  parametric <br>
//!          space of a surface. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsPolygonOnClosedSurface() const;
  
       const TopLoc_Location& Location() const;
  
        void Location(const TopLoc_Location& L) ;
  
  Standard_EXPORT   virtual const Handle_Geom_Curve& Curve3D() const;
  
  Standard_EXPORT   virtual  void Curve3D(const Handle(Geom_Curve)& C) ;
  
  Standard_EXPORT   virtual const Handle_Geom_Surface& Surface() const;
  
  Standard_EXPORT   virtual const Handle_Geom2d_Curve& PCurve() const;
  
  Standard_EXPORT   virtual  void PCurve(const Handle(Geom2d_Curve)& C) ;
  
  Standard_EXPORT   virtual const Handle_Geom2d_Curve& PCurve2() const;
  
  Standard_EXPORT   virtual  void PCurve2(const Handle(Geom2d_Curve)& C) ;
  
  Standard_EXPORT   virtual const Handle_Poly_Polygon3D& Polygon3D() const;
  
  Standard_EXPORT   virtual  void Polygon3D(const Handle(Poly_Polygon3D)& P) ;
  
  Standard_EXPORT   virtual const Handle_Poly_Polygon2D& Polygon() const;
  
  Standard_EXPORT   virtual  void Polygon(const Handle(Poly_Polygon2D)& P) ;
  
  Standard_EXPORT   virtual const Handle_Poly_Polygon2D& Polygon2() const;
  
  Standard_EXPORT   virtual  void Polygon2(const Handle(Poly_Polygon2D)& P) ;
  
  Standard_EXPORT   virtual const Handle_Poly_Triangulation& Triangulation() const;
  
  Standard_EXPORT   virtual const Handle_Poly_PolygonOnTriangulation& PolygonOnTriangulation() const;
  
  Standard_EXPORT   virtual  void PolygonOnTriangulation(const Handle(Poly_PolygonOnTriangulation)& P) ;
  
  Standard_EXPORT   virtual const Handle_Poly_PolygonOnTriangulation& PolygonOnTriangulation2() const;
  
  Standard_EXPORT   virtual  void PolygonOnTriangulation2(const Handle(Poly_PolygonOnTriangulation)& P2) ;
  
  Standard_EXPORT   virtual const Handle_Geom_Surface& Surface2() const;
  
  Standard_EXPORT   virtual const TopLoc_Location& Location2() const;
  
  Standard_EXPORT   virtual const GeomAbs_Shape& Continuity() const;
  
  Standard_EXPORT   virtual  void Continuity(const GeomAbs_Shape C) ;
  //! Return a copy of this representation. <br>
  Standard_EXPORT   virtual  Handle_BRep_CurveRepresentation Copy() const = 0;




  DEFINE_STANDARD_RTTI(BRep_CurveRepresentation)

protected:

  
  Standard_EXPORT   BRep_CurveRepresentation(const TopLoc_Location& L);

TopLoc_Location myLocation;


private: 




};


#include <BRep_CurveRepresentation.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
