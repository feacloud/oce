// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_Context_HeaderFile
#define _IntTools_Context_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntTools_Context_HeaderFile
#include <Handle_IntTools_Context.hxx>
#endif

#ifndef _TopTools_IndexedDataMapOfShapeAddress_HeaderFile
#include <TopTools_IndexedDataMapOfShapeAddress.hxx>
#endif
#ifndef _IntTools_IndexedDataMapOfTransientAddress_HeaderFile
#include <IntTools_IndexedDataMapOfTransientAddress.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
class IntTools_FClass2d;
class TopoDS_Face;
class GeomAPI_ProjectPointOnSurf;
class GeomAPI_ProjectPointOnCurve;
class TopoDS_Edge;
class Geom_Curve;
class IntTools_SurfaceRangeLocalizeData;
class BRepClass3d_SolidClassifier;
class TopoDS_Solid;
class Geom2dHatch_Hatcher;
class TopoDS_Vertex;
class gp_Pnt2d;
class gp_Pnt;
class IntTools_Curve;



//! The class is to provide direct access <br>
//! to the frequently using objects like <br>
//! IntTools_FClass2d, <br>
//! GeomAPI_ProjectPointOnSurf,  etc. <br>
//! The instance of the class allows to avoid repeated <br>
//! computations by mapping internal objects in the <br>
//!  instance. <br>
class IntTools_Context : public MMgt_TShared {

public:

  
//! Empty constructor <br>
  Standard_EXPORT   IntTools_Context();
Standard_EXPORT virtual ~IntTools_Context();
  
//! Returns a reference to point classifier <br>
//! for given face <br>
  Standard_EXPORT     IntTools_FClass2d& FClass2d(const TopoDS_Face& aF) ;
  
//! Returns a reference to point projector <br>
//! for given face <br>
  Standard_EXPORT     GeomAPI_ProjectPointOnSurf& ProjPS(const TopoDS_Face& aF) ;
  
//! Returns a reference to point projector <br>
//! for given edge <br>
  Standard_EXPORT     GeomAPI_ProjectPointOnCurve& ProjPC(const TopoDS_Edge& aE) ;
  
//! Returns a reference to point projector <br>
//! for given curve <br>
  Standard_EXPORT     GeomAPI_ProjectPointOnCurve& ProjPT(const Handle(Geom_Curve)& aC) ;
  
//! Returns a reference to surface localization data <br>
//! for given face <br>
  Standard_EXPORT     IntTools_SurfaceRangeLocalizeData& SurfaceData(const TopoDS_Face& aF) ;
  
//! Returns a reference to solid classifier <br>
//! for given solid <br>
  Standard_EXPORT     BRepClass3d_SolidClassifier& SolidClassifier(const TopoDS_Solid& aSolid) ;
  
//! Returns a reference to 2D hatcher <br>
//! for given face <br>
//! <br>
  Standard_EXPORT     Geom2dHatch_Hatcher& Hatcher(const TopoDS_Face& aF) ;
  
//! Computes parameter of the vertex aV on <br>
//! the edge aE. <br>
//! Returns zero if the distance between vertex <br>
//! and edge is less than sum of tolerances, <br>
//! otherwise and for following conditions returns <br>
//! negative value <br>
//! 1. the edge is degenerated (-1) <br>
//! 2. the edge does not contain 3d curve and pcurves (-2) <br>
//! 3. projection algorithm failed (-3) <br>
  Standard_EXPORT     Standard_Integer ComputeVE(const TopoDS_Vertex& aV,const TopoDS_Edge& aE,Standard_Real& aT) ;
  
//! Computes parameter aT of the vertex aV on <br>
//! the edge aE. <br>
//! Returns zero if the distance between vertex <br>
//! and edge is less than sum of tolerances, <br>
//! otherwise and for following conditions returns <br>
//! negative value <br>
//! 1. the edge is degenerated (-1) <br>
//! 2. the edge does not contain 3d curve and pcurves (-2) <br>
//! 3. projection algorithm failed (-3) <br>
//! <br>
//! Output parameters <br>
//! <br>
//! bToUpdateVertex - the flag that indicates whether the <br>
//!  	 vertex tolerance should be modified or not <br>
//! aDist - the	value of the distance between the vertex <br>
//!      and the edge <br>
  Standard_EXPORT     Standard_Integer ComputeVE(const TopoDS_Vertex& aV,const TopoDS_Edge& aE,Standard_Real& aT,Standard_Boolean& bToUpdateVertex,Standard_Real& aDist) ;
  
//! Computes UV parameters of the vertex aV on face aF <br>
//! Returns zero if the distance between vertex and face is <br>
//! less than or equal the sum of tolerances and the projection <br>
//! point lays inside boundaries of the face. <br>
//! For following conditions returns negative value <br>
//! 1. projection algorithm failed (-1) <br>
//! 2. distance is more than sum of tolerances (-2) <br>
//! 3. projection point out or on the boundaries of face (-3) <br>
//! <br>
  Standard_EXPORT     Standard_Integer ComputeVS(const TopoDS_Vertex& aV,const TopoDS_Face& aF,Standard_Real& U,Standard_Real& V) ;
  
//! Returns the state of the point aP2D <br>
//! relative to face aF <br>
  Standard_EXPORT     TopAbs_State StatePointFace(const TopoDS_Face& aF,const gp_Pnt2d& aP2D) ;
  
//! Returns true if the point aP2D is <br>
//! inside the boundaries of the face aF, <br>
//! otherwise returns false <br>
  Standard_EXPORT     Standard_Boolean IsPointInFace(const TopoDS_Face& aF,const gp_Pnt2d& aP2D) ;
  
//! Returns true if the point aP2D is <br>
//! inside or on the boundaries of aF <br>
  Standard_EXPORT     Standard_Boolean IsPointInOnFace(const TopoDS_Face& aF,const gp_Pnt2d& aP2D) ;
  
//! Returns true if the distance between point aP3D <br>
//! and face aF is less or equal to tolerance aTol <br>
//! and projection point is inside or on the boundaries <br>
//! of the face aF <br>
  Standard_EXPORT     Standard_Boolean IsValidPointForFace(const gp_Pnt& aP3D,const TopoDS_Face& aF,const Standard_Real aTol) ;
  
//! Returns true if IsValidPointForFace returns true <br>
//! for both face aF1 and aF2 <br>
  Standard_EXPORT     Standard_Boolean IsValidPointForFaces(const gp_Pnt& aP3D,const TopoDS_Face& aF1,const TopoDS_Face& aF2,const Standard_Real aTol) ;
  
//! Returns true if IsValidPointForFace returns true <br>
//! for some 3d point that lay on the curve aIC bounded by <br>
//! parameters aT1 and aT2 <br>
  Standard_EXPORT     Standard_Boolean IsValidBlockForFace(const Standard_Real aT1,const Standard_Real aT2,const IntTools_Curve& aIC,const TopoDS_Face& aF,const Standard_Real aTol) ;
  
//! Returns true if IsValidBlockForFace returns true <br>
//! for both faces aF1 and aF2 <br>
  Standard_EXPORT     Standard_Boolean IsValidBlockForFaces(const Standard_Real aT1,const Standard_Real aT2,const IntTools_Curve& aIC,const TopoDS_Face& aF1,const TopoDS_Face& aF2,const Standard_Real aTol) ;
  
//! Computes parameter of the vertex aV on <br>
//! the curve aIC. <br>
//! Returns true if the distance between vertex and <br>
//! curve is less than sum of tolerance of aV and aTolC, <br>
//! otherwise or if projection algorithm failed <br>
//! returns false (in this case aT isn't significant) <br>
//! <br>
  Standard_EXPORT     Standard_Boolean IsVertexOnLine(const TopoDS_Vertex& aV,const IntTools_Curve& aIC,const Standard_Real aTolC,Standard_Real& aT) ;
  
//! Computes parameter of the vertex aV on <br>
//! the curve aIC. <br>
//! Returns true if the distance between vertex and <br>
//! curve is less than sum of tolerance of aV and aTolC, <br>
//! otherwise or if projection algorithm failed <br>
//! returns false (in this case aT isn't significant) <br>
//! <br>
  Standard_EXPORT     Standard_Boolean IsVertexOnLine(const TopoDS_Vertex& aV,const Standard_Real aTolV,const IntTools_Curve& aIC,const Standard_Real aTolC,Standard_Real& aT) ;
  
//! Computes parameter of the point aP on <br>
//! the edge aE. <br>
//! Returns false if projection algorithm failed <br>
//! other wiese returns true. <br>
  Standard_EXPORT     Standard_Boolean ProjectPointOnEdge(const gp_Pnt& aP,const TopoDS_Edge& aE,Standard_Real& aT) ;




  DEFINE_STANDARD_RTTI(IntTools_Context)

protected:


TopTools_IndexedDataMapOfShapeAddress myFClass2dMap;
TopTools_IndexedDataMapOfShapeAddress myProjPSMap;
TopTools_IndexedDataMapOfShapeAddress myProjPCMap;
IntTools_IndexedDataMapOfTransientAddress myProjPTMap;
TopTools_IndexedDataMapOfShapeAddress mySClassMap;
TopTools_IndexedDataMapOfShapeAddress myProjSDataMap;
TopTools_IndexedDataMapOfShapeAddress myHatcherMap;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
