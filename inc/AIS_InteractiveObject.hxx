// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_InteractiveObject_HeaderFile
#define _AIS_InteractiveObject_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_InteractiveObject_HeaderFile
#include <Handle_AIS_InteractiveObject.hxx>
#endif

#ifndef _AIS_PToContext_HeaderFile
#include <AIS_PToContext.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _TColStd_ListOfTransient_HeaderFile
#include <TColStd_ListOfTransient.hxx>
#endif
#ifndef _Handle_AIS_Drawer_HeaderFile
#include <Handle_AIS_Drawer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Quantity_Color_HeaderFile
#include <Quantity_Color.hxx>
#endif
#ifndef _Graphic3d_NameOfMaterial_HeaderFile
#include <Graphic3d_NameOfMaterial.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Aspect_TypeOfFacingModel_HeaderFile
#include <Aspect_TypeOfFacingModel.hxx>
#endif
#ifndef _TColStd_ListOfInteger_HeaderFile
#include <TColStd_ListOfInteger.hxx>
#endif
#ifndef _SelectMgr_SelectableObject_HeaderFile
#include <SelectMgr_SelectableObject.hxx>
#endif
#ifndef _PrsMgr_TypeOfPresentation3d_HeaderFile
#include <PrsMgr_TypeOfPresentation3d.hxx>
#endif
#ifndef _AIS_KindOfInteractive_HeaderFile
#include <AIS_KindOfInteractive.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Handle_AIS_InteractiveContext_HeaderFile
#include <Handle_AIS_InteractiveContext.hxx>
#endif
#ifndef _Aspect_TypeOfDegenerateModel_HeaderFile
#include <Aspect_TypeOfDegenerateModel.hxx>
#endif
#ifndef _Quantity_Ratio_HeaderFile
#include <Quantity_Ratio.hxx>
#endif
#ifndef _Handle_Geom_Transformation_HeaderFile
#include <Handle_Geom_Transformation.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_BasicAspect_HeaderFile
#include <Handle_Prs3d_BasicAspect.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
class Standard_Transient;
class AIS_Drawer;
class AIS_InteractiveContext;
class Quantity_Color;
class TColStd_ListOfTransient;
class Graphic3d_MaterialAspect;
class TColStd_ListOfInteger;
class Geom_Transformation;
class Prs3d_Presentation;
class Prs3d_BasicAspect;



//! Defines a class of objects with display and selection services. <br>
//! Entities which are visualized and selected are <br>
//! Interactive Objects. You can make use of classes of <br>
//! standard Interactive Objects for which all necessary <br>
//! methods have already been programmed, or you can <br>
//! implement your own classes of Interactive Objects. <br>
//! Specific attributes of entities such as arrow aspect for <br>
//! dimensions must be loaded in a Drawer. This Drawer <br>
//! is then applied to the Interactive Object in view. <br>
//! There are four types of Interactive Object in AIS: the <br>
//! construction element or Datum, the Relation, which <br>
//! includes both dimensions and constraints, the Object, <br>
//! and finally, when the object is of an unknown type, the None type. <br>
//! Inside these categories, a signature, or index, <br>
//! provides the possibility of additional characterization. <br>
//! By default, the Interactive Object has a None type <br>
//! and a signature of 0. If you want to give a particular <br>
//! type and signature to your interactive object, you must <br>
//! redefine the methods, Signature and Type. <br>
//! Warning <br>
//! In the case of attribute methods, methods for <br>
//! standard attributes are virtual. They must be <br>
//! redefined   by the inheriting classes. Setcolor for a <br>
//! point and Setcolor for a plane, for example, do not <br>
//! affect the same attributes in the Drawer. <br>
class AIS_InteractiveObject : public SelectMgr_SelectableObject {

public:

  
//! Returns the kind of Interactive Object: <br>
//! -   None <br>
//! -   Datum <br>
//! -   Relation <br>
//! -   Object <br>
//!   By default, the   interactive object has a None type. <br>
//! Because specific shapes entail different behavior <br>
//! according to their sub-shapes, you may need to <br>
//! create a Local Context. This will allow you to <br>
//! specify the additional characteristics which you <br>
//! need to handle these shapes. <br>
  Standard_EXPORT   virtual  AIS_KindOfInteractive Type() const;
  //! Specifies additional characteristics of Interactive <br>
//! Objects. A signature is, in fact, an index with integer <br>
//! values assigned different properties. <br>
//! This method is frequently used in conjuction with <br>
//! Type to give a particular type and signature to an <br>
//! Interactive Object. By default, the Interactive Object <br>
//! has a None type and a signature of 0. Among the <br>
//! datums, this signature is attributed to the shape <br>
//! The remaining datums have the following default signatures: <br>
//! -   Point                   signature 1 <br>
//! -   Axis                     signature 2 <br>
//! -   Trihedron                signature 3 <br>
//! -   PlaneTrihedron            signature 4 <br>
//! -   Line                     signature 5 <br>
//! -   Circle                  signature 6 <br>
//! -   Plane                   signature 7. <br>
  Standard_EXPORT   virtual  Standard_Integer Signature() const;
  //!  Informs the graphic context that the interactive Object <br>
//! may be decomposed into sub-shapes for dynamic selection. <br>
//! The most used Interactive Object is AIS_Shape. <br>
//! Activation methods for standard selection modes are <br>
//! proposed in the Interactive Context. These include <br>
//! selection by vertex or by edges. For datums with the <br>
//! same behavior as AIS_Shape, such as vetices and <br>
//! edges, we must redefine the virtual method so that <br>
//! AcceptShapeDecomposition returns false. <br>
//!      Rule for selection : <br>
//!        Mode 0 :  Selection of  the interactive Object itself <br>
//!        Mode 1 :  Selection of vertices <br>
//!        Mode 2 :  Selection Of Edges <br>
//!        Mode 3 :  Selection Of Wires <br>
//!        Mode 4 :  Selection Of Faces ... <br>
      virtual  Standard_Boolean AcceptShapeDecomposition() const;
  //! change the current facing model apply on polygons for <br>
//! SetColor(), SetTransparency(), SetMaterial() methods <br>
//! default facing model is Aspect_TOFM_TWO_SIDE. This mean that attributes is <br>
//! applying both on the front and back face. <br>
  Standard_EXPORT     void SetCurrentFacingModel(const Aspect_TypeOfFacingModel aModel = Aspect_TOFM_BOTH_SIDE) ;
  //! Returns the current facing model which is in effect. <br>
  Standard_EXPORT     Aspect_TypeOfFacingModel CurrentFacingModel() const;
  
  Standard_EXPORT   virtual  void SetColor(const Quantity_Color& aColor) ;
  //! only the interactive obj knowns which Drawer attribute <br>
//!          is  affected by the color  (ex:  for a  wire, it's the <br>
//!          wireaspect field of the drawer, but  for a vertex, only <br>
//!          the point aspect field is affected by the color) <br>
//!          WARNING : Do not forget to set the corresponding fields <br>
//!          here (hasOwnColor and myOwnColor) <br>
  Standard_EXPORT   virtual  void SetColor(const Quantity_NameOfColor aColor) ;
  //! Removes color settings. Only the Interactive Object <br>
//! knows which Drawer attribute is   affected by the color <br>
//! setting. For a wire, for example, wire aspect is the <br>
//! attribute affected. For a vertex, however, only point <br>
//! aspect is affected by the color setting. <br>
  Standard_EXPORT   virtual  void UnsetColor() ;
  //! Allows you to provide the setting aValue for width. <br>
//! Only the Interactive Object knows which Drawer <br>
//! attribute is affected by the width setting. <br>
  Standard_EXPORT   virtual  void SetWidth(const Standard_Real aValue) ;
  
  Standard_EXPORT   virtual  void UnsetWidth() ;
  //! Returns true if the class of objects accepts the display mode aMode. <br>
//! The interactive context can have a default mode of <br>
//! representation for the set of Interactive Objects. This <br>
//! mode may not be accepted by a given class of <br>
//! objects. Consequently, this virtual method allowing us <br>
//! to get information about the class in question must be implemented. <br>
  Standard_EXPORT   virtual  Standard_Boolean AcceptDisplayMode(const Standard_Integer aMode) const;
  //! Returns the default display mode. This method is to <br>
//! be implemented when the main mode is not mode 0. <br>
  Standard_EXPORT   virtual  Standard_Integer DefaultDisplayMode() const;
  //! Updates the active presentation; if <AllModes> = Standard_True <br>
//!          all the presentations inside are recomputed. <br>
  Standard_EXPORT     void Redisplay(const Standard_Boolean AllModes = Standard_False) ;
  //! Sets the infinite state flag aFlage. <br>
//! if   <aFlag>   = True  ,  the   interactiveObject  is <br>
//!          considered as infinite, i.e. its graphic presentations <br>
//!          are not taken in account for View FitAll... <br>
  Standard_EXPORT     void SetInfiniteState(const Standard_Boolean aFlag = Standard_True) ;
  
//! Returns true if the interactive object is infinite. In this <br>
//! case, its graphic presentations are not taken into <br>
//! account in the fit-all view. <br>
        Standard_Boolean IsInfinite() const;
  //! Indicates whether the Interactive Object has a pointer <br>
//! to an interactive context. <br>
  Standard_EXPORT     Standard_Boolean HasInteractiveContext() const;
  //! Returns the context pointer to the interactive context. <br>
  Standard_EXPORT     Handle_AIS_InteractiveContext GetContext() const;
  //!  Sets the interactive context aCtx and provides a link <br>
//! to the default drawing tool or "Drawer" if there is none. <br>
  Standard_EXPORT   virtual  void SetContext(const Handle(AIS_InteractiveContext)& aCtx) ;
  //! Returns true if the object has an owner attributed to it. <br>
//! The owner can be a shape for a set of sub-shapes or <br>
//! a sub-shape for sub-shapes which it is composed of, <br>
//! and takes the form of a transient. <br>
  Standard_EXPORT     Standard_Boolean HasOwner() const;
  //! Returns the owner of the Interactive Object. <br>
//! The owner can be a shape for a set of sub-shapes or <br>
//! a sub-shape for sub-shapes which it is composed of, <br>
//! and takes the form of a transient. <br>
//! There are two types of owners: <br>
//! -   Direct owners, decomposition shapes such as <br>
//!   edges, wires, and faces. <br>
//! -   Users, presentable objects connecting to sensitive <br>
//!   primitives, or a shape which has been decomposed. <br>
       const Handle_Standard_Transient& GetOwner() const;
  //! Allows you to attribute the owner ApplicativeEntity to <br>
//! an Interactive Object. This can be a shape for a set of <br>
//! sub-shapes or a sub-shape for sub-shapes which it <br>
//! is composed of. The owner takes the form of a transient. <br>
        void SetOwner(const Handle(Standard_Transient)& ApplicativeEntity) ;
  //! Each Interactive Object has methods which allow us <br>
//! to attribute an Owner to it in the form of a Transient. <br>
//! This method removes the owner from the graphic entity. <br>
  Standard_EXPORT     void ClearOwner() ;
  
  Standard_EXPORT     Standard_Boolean HasUsers() const;
  
       const TColStd_ListOfTransient& Users() const;
  
  Standard_EXPORT     void AddUser(const Handle(Standard_Transient)& aUser) ;
  
  Standard_EXPORT     void ClearUsers() ;
  
//! Returns true if the Interactive Object has a display <br>
//! mode setting. Otherwise, it is displayed in Neutral Point. <br>
        Standard_Boolean HasDisplayMode() const;
  //! Sets the display mode aMode for the interactive object. <br>
//! An object can have its own temporary display mode, <br>
//! which is different from that proposed by the interactive context. <br>
//! The range of possibilities currently proposed is the following: <br>
//! -   AIS_WireFrame <br>
//! -   AIS_Shaded <br>
//! -   AIS_QuickHLR <br>
//! -   AIS_ExactHLR <br>
//!   This range can, however, be extended through the creation of new display modes. <br>
  Standard_EXPORT     void SetDisplayMode(const Standard_Integer aMode) ;
  //! Removes display mode settings from the interactive object. <br>
        void UnsetDisplayMode() ;
  //! Returns the display mode setting of the Interactive Object. <br>
//! The range of possibilities is the following: <br>
//! -   AIS_WireFrame <br>
//! -   AIS_Shaded <br>
//! -   AIS_QuickHLR <br>
//! -   AIS_ExactHLR <br>
//!   This range can, however, be extended through the <br>
//! creation of new display modes. <br>
        Standard_Integer DisplayMode() const;
  //! Allows you to change the selection mode of an <br>
//! Interactive Object. <br>
//! The default selection mode setting is 0. <br>
//! For shapes, for example, the selection modes are as follows: <br>
//! -   mode 0 - selection of the shape itself <br>
//! -   mode 1 - selection of vertices <br>
//! -   mode 2 - selection of edges <br>
//! -   mode 3 - selection of wires <br>
//! -   mode 4 - selection of faces <br>
//! -   mode 5 - selection of shells <br>
//! -   mode 6 - selection of solids <br>
//! -   mode 7 - selection of compounds <br>
//!   For trihedra, on the other hand, the selection modes are the following four: <br>
//! -   mode 0 - selection of a trihedron <br>
//! -   mode 1 - selection of its origin <br>
//! -   mode 2 - selection of its axes <br>
//! -   mode 3 - selection of its planes <br>
  Standard_EXPORT     Standard_Boolean HasSelectionMode() const;
  //! Returns the selection mode of the interactive object. <br>
  Standard_EXPORT     Standard_Integer SelectionMode() const;
  //! You can change the default selection mode index <br>
//! aMode of an Interactive Object. <br>
//! This is only of interest if you decide that mode 0 <br>
//! adopted by convention will not do. <br>
  Standard_EXPORT     void SetSelectionMode(const Standard_Integer aMode) ;
  //! You can change the default selection mode index of <br>
//! an Interactive Object. <br>
//! This is only of interest if you decide that the 0 mode <br>
//! adopted by convention will not do. <br>
        void UnsetSelectionMode() ;
  //! Returns the selection priority setting. -1 indicates that there is none. <br>
//! You can modify the selection priority of an owner to <br>
//! make one entity more selectionable than another one. <br>
//! The default selection priority for an owner is 5, for <br>
//! example. To increase selection priority, choose a <br>
//! setting between 5 and 10. An entity with priority 7 will <br>
//! take priority over one with a setting of 6 if both <br>
//! objects are selected at the same time. <br>
//! You could give vertices priority 8, edges priority 7, <br>
//! faces priority 6, and shapes priority 5. If a vertex, an <br>
//! edge and a face are simultaneously detected during <br>
//! selection, only the vertex will then be highlighted. <br>
//! For trihedra, for example, the default priorities are the following four: <br>
//! -   priority 1 - a trihedron <br>
//! -   priority 5 - its origin <br>
//! -   priority 3 - its axes <br>
//! -   priority 2 - its planes <br>
        Standard_Integer SelectionPriority() const;
  //! Allows you to provide a setting aPriority for selection priority. <br>
//! You can modify selection priority of an owner to make <br>
//! one entity more selectionable than another one. The <br>
//! default selection priority for an owner is 5, for <br>
//! example. To increase selection priority, choose a <br>
//! setting between 5 and 10. An entity with priority 7 will <br>
//! take priority over one with a setting of 6. <br>
        void SetSelectionPriority(const Standard_Integer aPriority) ;
  //! Removes the setting for selection priority. SelectionPriority then returns -1. <br>
        void UnsetSelectionPriority() ;
  //! Returns true if there is a setting for selection priority. <br>
//! You can modify selection priority of an owner to make <br>
//! one entity more selectionable than another one. The <br>
//! default selection priority for an owner is 5, for <br>
//! example. To increase selection priority, choose a <br>
//! setting between 5 and 10. An entity with priority 7 will <br>
//! take priority over one with a setting of 6. <br>
        Standard_Boolean HasSelectionPriority() const;
  //! Returns true if the Interactive Object is in highlight mode. <br>
        Standard_Boolean HasHilightMode() const;
  //! Returns the setting for highlight mode. <br>
//! At dynamic detection, the presentation echoed by the <br>
//! Interactive Context, is by default the presentation <br>
//! already on the screen. You can specify a Highlight <br>
//! presentation mode which is valid no matter what the <br>
//! active representation of the object. It makes no <br>
//! difference whether this choice is temporary or <br>
//! definitive.   To do this, we use the following functions: <br>
//! -   SetHilightMode <br>
//! -   UnSetHilightMode <br>
//!   In the case of a shape, whether it is visualized in <br>
//! wireframe presentation or with shading, we want to <br>
//! systematically highlight the wireframe presentation. <br>
//! Consequently, we set the highlight mode to 0. <br>
        Standard_Integer HilightMode() const;
  //! Sets the highlight mode anIndex for the interactive object. <br>
//! If, for example, you want to systematically highlight <br>
//! the wireframe presentation of a shape - whether <br>
//! visualized in wireframe presentation or with shading - <br>
//! you set the highlight mode to 0. <br>
        void SetHilightMode(const Standard_Integer anIndex) ;
  //! Allows the user to take a given Prs for hilight <br>
//!          ex : for a shape which would be displayed in shading mode <br>
//!          the hilight Prs is the wireframe mode. <br>
//!          if No specific hilight mode is defined, the displayed Prs <br>
//!          will be the hilighted one. <br>
        void UnsetHilightMode() ;
  //! Returns true if the Interactive Object has color. <br>
        Standard_Boolean HasColor() const;
  //! Returns the color setting of the Interactive Object. <br>
      virtual  Quantity_NameOfColor Color() const;
  
      virtual  void Color(Quantity_Color& aColor) const;
  //! Returns true if the Interactive Object has width. <br>
        Standard_Boolean HasWidth() const;
  //! Returns the width setting of the Interactive Object. <br>
  Standard_EXPORT     Standard_Real Width() const;
  //! Returns true if the Interactive Object has a setting for material. <br>
  Standard_EXPORT     Standard_Boolean HasMaterial() const;
  //! Returns the current material setting. <br>
//! This will be on of the following materials: <br>
//! -   Brass <br>
//! -   Bronze <br>
//! -   Gold <br>
//! -   Pewter <br>
//! -   Silver <br>
//! -   Stone. <br>
  Standard_EXPORT   virtual  Graphic3d_NameOfMaterial Material() const;
  //! Sets the name aName for material defining this <br>
//! display attribute for the interactive object. <br>
//! Material aspect determines shading aspect, color and <br>
//! transparency of visible entities. <br>
  Standard_EXPORT   virtual  void SetMaterial(const Graphic3d_NameOfMaterial aName) ;
  //! Sets the material aMat defining this display attribute <br>
//! for the interactive object. <br>
//! Material aspect determines shading aspect, color and <br>
//! transparency of visible entities. <br>
  Standard_EXPORT   virtual  void SetMaterial(const Graphic3d_MaterialAspect& aName) ;
  //! Removes the setting for material. <br>
  Standard_EXPORT   virtual  void UnsetMaterial() ;
  //! Attributes a setting aValue for transparency. <br>
//! The transparency value should be between 0.0 and 1.0. <br>
//! At 0.0 an object will be totally opaque, and at 1.0, fully transparent. <br>
//! Warning At a value of 1.0, there may be nothing visible. <br>
  Standard_EXPORT   virtual  void SetTransparency(const Standard_Real aValue = 0.6) ;
  //! Returns true if there is a transparency setting. <br>
        Standard_Boolean IsTransparent() const;
  //! Returns the transparency setting. <br>
//! This will be between 0.0 and 1.0. <br>
//! At 0.0 an object will be totally opaque, and at 1.0, fully transparent. <br>
  Standard_EXPORT   virtual  Standard_Real Transparency() const;
  //! Removes the transparency setting. The object is opaque by default. <br>
  Standard_EXPORT   virtual  void UnsetTransparency() ;
  //! Initializes the drawing tool aDrawer. <br>
  Standard_EXPORT   virtual  void SetAttributes(const Handle(AIS_Drawer)& aDrawer) ;
  //! Returns the attributes settings. <br>
       const Handle_AIS_Drawer& Attributes() const;
  //! Clears settings provided by the drawing tool aDrawer. <br>
  Standard_EXPORT   virtual  void UnsetAttributes() ;
  
        void State(const Standard_Integer theState) ;
  
        Standard_Integer State() const;
  //! Sets the model of degeneration for the shaded representation <br>
//!   according to the degenerate ratio >= 0. & <= 1. where : <br>
//!   <aRatio> = 0. indicate that all polygons of the object <br>
//!      will be displayed. <br>
//!   <aRatio> = 1. indicate that no polygons will be displayed !! <br>
//!   When <ARatio> is > 0 & < 1. the corresponding amount <br>
//!   of object polygons will be displayed with a random method. <br>
//!  Warning: the degenerate structure is shown only when <br>
//!  the animation and degenerate flags are set to TRUE <br>
//!  in V3d_View::SetAnimationMode(..) <br>
//!  Category: Methods to manage the object degeneration <br>
  Standard_EXPORT   virtual  void SetDegenerateModel(const Aspect_TypeOfDegenerateModel aModel = Aspect_TDM_WIREFRAME,const Quantity_Ratio aRatio = 0.0) ;
  //! returns the current degeneration model and ratio <br>
//!  for the polygons <br>
  Standard_EXPORT   virtual  Aspect_TypeOfDegenerateModel DegenerateModel(Quantity_Ratio& aRatio) const;
  //! Transforms all presentations of the object <br>
//!  and replace the actual transformation matrix if <postConcatenate> is FALSE. <br>
//! Note that the selection  must be updated only at the end of <br>
//! object animation when <updateSelection> is TRUE <br>
  Standard_EXPORT     void SetTransformation(const Handle(Geom_Transformation)& aTranformation,const Standard_Boolean postConcatenate = Standard_False,const Standard_Boolean updateSelection = Standard_True) ;
  //! Deactivate the current transformation <br>
  Standard_EXPORT     void UnsetTransformation() ;
  //! Returns the current transformation associated <br>
//! to the first available presentation of this object. <br>
  Standard_EXPORT     Handle_Geom_Transformation Transformation() ;
  //! Returns TRUE when this object is transformed <br>
  Standard_EXPORT     Standard_Boolean HasTransformation() const;
  //! Returns TRUE when this object has a presentation <br>
//!          in the current DisplayMode() <br>
  Standard_EXPORT     Standard_Boolean HasPresentation() const;
  //! Returns the current presentation of this object <br>
//!          according to the current DisplayMode() <br>
  Standard_EXPORT     Handle_Prs3d_Presentation Presentation() const;
  //! Sets the graphic basic aspect to the current presentation. <br>
//!          When <globalChange> is TRUE , the full object presentation <br>
//!          is changed. <br>
//!          When <globalChange> is FALSE , only the current group <br>
//!          of the object presentation is changed. <br>
  Standard_EXPORT     void SetAspect(const Handle(Prs3d_BasicAspect)& anAspect,const Standard_Boolean globalChange = Standard_True) ;
  //! Sets up polygon offsets for this object. <br>
//!          It modifies all existing presentations of <anObj> (if any), <br>
//!          so it is reasonable to call this method after <anObj> has been displayed. <br>
//!          Otherwise, Compute() method should pass Graphic3d_AspectFillArea3d <br>
//!          aspect from <myDrawer> to Graphic3d_Group to make polygon offsets work. <br>
  Standard_EXPORT   virtual  void SetPolygonOffsets(const Standard_Integer aMode,const Standard_ShortReal aFactor = 1.0,const Standard_ShortReal aUnits = 0.0) ;
  //! Returns Standard_True if <myDrawer> has non-null shading aspect <br>
  Standard_EXPORT   virtual  Standard_Boolean HasPolygonOffsets() const;
  //! Retrieves current polygon offsets settings from <myDrawer>. <br>
  Standard_EXPORT   virtual  void PolygonOffsets(Standard_Integer& aMode,Standard_ShortReal& aFactor,Standard_ShortReal& aUnits) const;


friend class AIS_InteractiveContext;


  DEFINE_STANDARD_RTTI(AIS_InteractiveObject)

protected:

  //! The TypeOfPresention3d means that the interactive object <br>
//!          may have a presentation dependant of the view of Display <br>
  Standard_EXPORT   AIS_InteractiveObject(const PrsMgr_TypeOfPresentation3d aTypeOfPresentation3d = PrsMgr_TOP_AllView);

Handle_AIS_Drawer myDrawer;
Standard_Real myTransparency;
Quantity_Color myOwnColor;
Graphic3d_NameOfMaterial myOwnMaterial;
Standard_Integer myHilightMode;
Standard_Real myOwnWidth;
Standard_Boolean myInfiniteState;
Standard_Boolean hasOwnColor;
Standard_Boolean hasOwnMaterial;
Aspect_TypeOfFacingModel myCurrentFacingModel;
Standard_Boolean myRecomputeEveryPrs;
TColStd_ListOfInteger myToRecomputeModes;


private: 

  
  Standard_EXPORT   virtual  Standard_Boolean RecomputeEveryPrs() const;
  
  Standard_EXPORT     void MustRecomputePrs(const Standard_Integer aMode) const;
  
  Standard_EXPORT    const TColStd_ListOfInteger& ListOfRecomputeModes() const;
  
  Standard_EXPORT     void SetRecomputeOk() ;

AIS_PToContext myCTXPtr;
Handle_Standard_Transient myOwner;
TColStd_ListOfTransient myUsers;
Standard_Integer mySelPriority;
Standard_Integer myDisplayMode;
Standard_Integer mySelectionMode;
Standard_Integer mystate;
Standard_Boolean myHasTransformation;


};


#include <AIS_InteractiveObject.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
