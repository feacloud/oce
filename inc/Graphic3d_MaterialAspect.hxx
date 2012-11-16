// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_MaterialAspect_HeaderFile
#define _Graphic3d_MaterialAspect_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Quantity_Color_HeaderFile
#include <Quantity_Color.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Graphic3d_TypeOfMaterial_HeaderFile
#include <Graphic3d_TypeOfMaterial.hxx>
#endif
#ifndef _Graphic3d_NameOfMaterial_HeaderFile
#include <Graphic3d_NameOfMaterial.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Graphic3d_TypeOfReflection_HeaderFile
#include <Graphic3d_TypeOfReflection.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Graphic3d_MaterialDefinitionError;
class Standard_OutOfRange;
class Quantity_Color;


//! This class allows the definition of the type of a surface. <br>
//!  Keywords: Material, FillArea, Shininess, Ambient, Color, Diffuse, <br>
//!	     Specular, Transparency, Emissive, ReflectionMode, <br>
//!	     BackFace, FrontFace, Reflection, Absorbtion <br>
class Graphic3d_MaterialAspect  {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates a material from default values. <br>
  Standard_EXPORT   Graphic3d_MaterialAspect();
  //! Creates a generic material calls <AName> <br>
  Standard_EXPORT   Graphic3d_MaterialAspect(const Graphic3d_NameOfMaterial AName);
  //! Increases or decreases the luminosity of <me>. <br>
//!	    <ADelta> is a signed percentage. <br>
  Standard_EXPORT     void IncreaseShine(const Standard_Real ADelta) ;
  //! Modifies the reflection properties of the surface. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises MaterialDefinitionError if <AValue> is <br>
//!	    a negative value or greater than 1.0. <br>
  Standard_EXPORT     void SetAmbient(const Standard_Real AValue) ;
  //! Modifies the reflection properties of the surface. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises MaterialDefinitionError if <AValue> is a <br>
//!	    negative value or greater than 1.0. <br>
  Standard_EXPORT     void SetDiffuse(const Standard_Real AValue) ;
  //! Modifies the reflection properties of the surface. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises MaterialDefinitionError if <AValue> is a <br>
//!	    negative value or greater than 1.0. <br>
  Standard_EXPORT     void SetEmissive(const Standard_Real AValue) ;
  //! Modifies the luminosity of the surface. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises MaterialDefinitionError if <AValue> is a <br>
//!	    negative value or greater than 1.0. <br>
  Standard_EXPORT     void SetShininess(const Standard_Real AValue) ;
  //! Modifies the reflection properties of the surface. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises MaterialDefinitionError if <AValue> is a <br>
//!	    negative value or greater than 1.0. <br>
  Standard_EXPORT     void SetSpecular(const Standard_Real AValue) ;
  //!  Modifies the transparency coefficient of the surface. <br>
//!  <AValue> = 0. opaque. (default) <br>
//!  <AValue> = 1. transparent. <br>
//!  Transparency is applicable to materials that have at least <br>
//!  one of reflection modes (ambient, diffuse, specular or emissive) <br>
//!  enabled. See also SetReflectionModeOn() and SetReflectionModeOff() methods. <br>
//! <br>
//!  NOTE: In order for transparency specified through this method to <br>
//!  take effect, it is necessary to enable transparency <br>
//!  in the viewer. This can be done either directly - <br>
//!  see Visual3d_ViewManager::SetTransparency(Standard_Boolean), <br>
//!  or indirectly - by calling AIS_InteractiveObject::SetTransparency() <br>
//!  before an object is added to an interactive context, or by <br>
//!  calling AIS_InteractiveContext::SetTransparency() for a given <br>
//!  interactive object already displayed. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises MaterialDefinitionError if <AValue> is a <br>
//!	    negative value or greater than 1.0. <br>
  Standard_EXPORT     void SetTransparency(const Standard_Real AValue) ;
  //! Modifies the ambient colour of the surface. <br>
//!  Category: Methods to modify the class definition <br>
  Standard_EXPORT     void SetColor(const Quantity_Color& AColor) ;
  //! Modifies the ambient colour of the surface. <br>
  Standard_EXPORT     void SetAmbientColor(const Quantity_Color& AColor) ;
  //! Modifies the difuse colour of the surface. <br>
  Standard_EXPORT     void SetDiffuseColor(const Quantity_Color& AColor) ;
  //! Modifies the specular colour of the surface. <br>
  Standard_EXPORT     void SetSpecularColor(const Quantity_Color& AColor) ;
  //! Modifies the emissive colour of the surface. <br>
  Standard_EXPORT     void SetEmissiveColor(const Quantity_Color& AColor) ;
  //! Activates the reflective properties of the surface <AType>. <br>
  Standard_EXPORT     void SetReflectionModeOn(const Graphic3d_TypeOfReflection AType) ;
  //! Deactivates the reflective properties of <br>
//!	    the surface <AType>. <br>
  Standard_EXPORT     void SetReflectionModeOff(const Graphic3d_TypeOfReflection AType) ;
  //! Set MyMaterialType to the value of parameter <AType> <br>
  Standard_EXPORT     void SetMaterialType(const Graphic3d_TypeOfMaterial AType) ;
  //! The current matarial become a "UserDefined" material. <br>
//!	    Set the name of the "UserDefined" material. <br>
  Standard_EXPORT     void SetMaterialName(const Standard_CString AName) ;
  
  Standard_EXPORT     void SetEnvReflexion(const Standard_ShortReal AValue) ;
  //! Resets the material with the original values according to <br>
//! the material name but leave the current color values untouched <br>
//! for the material of type ASPECT. <br>
  Standard_EXPORT     void Reset() ;
  //! Returns the ambient colour of the surface. <br>
  Standard_EXPORT     Quantity_Color Color() const;
  //! Returns the ambient colour of the surface. <br>
  Standard_EXPORT     Quantity_Color AmbientColor() const;
  //! Returns the diffuse colour of the surface. <br>
  Standard_EXPORT     Quantity_Color DiffuseColor() const;
  //! Returns the specular colour of the surface. <br>
  Standard_EXPORT     Quantity_Color SpecularColor() const;
  //! Returns the emissive colour of the surface. <br>
  Standard_EXPORT     Quantity_Color EmissiveColor() const;
  //! Returns the reflection properties of the surface. <br>
  Standard_EXPORT     Standard_Real Ambient() const;
  //! Returns the reflection properties of the surface. <br>
  Standard_EXPORT     Standard_Real Diffuse() const;
  //! Returns the reflection properties of the surface. <br>
  Standard_EXPORT     Standard_Real Specular() const;
  //! Returns the transparency coefficient of the surface. <br>
  Standard_EXPORT     Standard_Real Transparency() const;
  //! Returns the emissive coefficient of the surface. <br>
  Standard_EXPORT     Standard_Real Emissive() const;
  //! Returns the luminosity of the surface. <br>
  Standard_EXPORT     Standard_Real Shininess() const;
  //! Returns Standard_True if the reflection mode is active, <br>
//!	    Standard_False otherwise. <br>
  Standard_EXPORT     Standard_Boolean ReflectionMode(const Graphic3d_TypeOfReflection AType) const;
  //! Returns Standard_True if MyMaterialType equal the parameter AType, <br>
//!	    Standard_False otherwise. <br>
  Standard_EXPORT     Standard_Boolean MaterialType(const Graphic3d_TypeOfMaterial AType) const;
  
  Standard_EXPORT     Standard_ShortReal EnvReflexion() const;
  //! Returns the material name. <br>
  Standard_EXPORT     Graphic3d_NameOfMaterial Name() const;
  //! Returns Standard_True if the materials <me> and <br>
//!          <Other> are different. <br>
  Standard_EXPORT     Standard_Boolean IsDifferent(const Graphic3d_MaterialAspect& Other) const;
    Standard_Boolean operator !=(const Graphic3d_MaterialAspect& Other) const
{
  return IsDifferent(Other);
}
  //! Returns Standard_True if the materials <me> and <br>
//!          <Other> are identical. <br>
  Standard_EXPORT     Standard_Boolean IsEqual(const Graphic3d_MaterialAspect& Other) const;
    Standard_Boolean operator ==(const Graphic3d_MaterialAspect& Other) const
{
  return IsEqual(Other);
}
  
//! Returns the number of predefined textures. <br>
  Standard_EXPORT   static  Standard_Integer NumberOfMaterials() ;
  
//! Returns the name of the predefined material of rank <aRank> <br>
//!  Trigger: when <aRank> is < 1 or > NumberOfMaterials. <br>
  Standard_EXPORT   static  Standard_CString MaterialName(const Standard_Integer aRank) ;
  
//! Returns the name of this material <br>
  Standard_EXPORT     Standard_CString MaterialName() const;
  
//! Returns the type of the predefined material of rank <aRank> <br>
//!  Trigger: when <aRank> is < 1 or > NumberOfMaterials. <br>
  Standard_EXPORT   static  Graphic3d_TypeOfMaterial MaterialType(const Standard_Integer aRank) ;





protected:





private:

  
  Standard_EXPORT     void Init(const Graphic3d_NameOfMaterial AName) ;


Standard_ShortReal MyDiffuseCoef;
Quantity_Color MyDiffuseColor;
Standard_Boolean MyDiffuseActivity;
Standard_ShortReal MyAmbientCoef;
Quantity_Color MyAmbientColor;
Standard_Boolean MyAmbientActivity;
Standard_ShortReal MySpecularCoef;
Quantity_Color MySpecularColor;
Standard_Boolean MySpecularActivity;
Standard_ShortReal MyEmissiveCoef;
Quantity_Color MyEmissiveColor;
Standard_Boolean MyEmissiveActivity;
Standard_ShortReal MyTransparencyCoef;
Standard_ShortReal MyShininess;
Standard_ShortReal MyEnvReflexion;
Graphic3d_TypeOfMaterial MyMaterialType;
Graphic3d_NameOfMaterial MyMaterialName;
Graphic3d_NameOfMaterial MyRequestedMaterialName;
TCollection_AsciiString MyStringName;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
