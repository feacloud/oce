// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_GeneralModifier_HeaderFile
#define _IFSelect_GeneralModifier_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_GeneralModifier_HeaderFile
#include <Handle_IFSelect_GeneralModifier.hxx>
#endif

#ifndef _Handle_IFSelect_Selection_HeaderFile
#include <Handle_IFSelect_Selection.hxx>
#endif
#ifndef _Handle_IFSelect_Dispatch_HeaderFile
#include <Handle_IFSelect_Dispatch.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class IFSelect_Selection;
class IFSelect_Dispatch;
class TCollection_AsciiString;


//! This class gives a frame for Actions which modify the effect <br>
//!           of a Dispatch, i.e. : <br>
//!           By Selections and Dispatches, an original Model can be <br>
//!           splitted into one or more "target" Models : these Models <br>
//!           contain Entities copied from the original one (that is, a <br>
//!           part of it). Basically, these dispatched Entities are copied <br>
//!           as identical to their original counterparts. Also the copied <br>
//!           Models reproduce the Header of the original one. <br>
//! <br>
//!           Modifiers allow to change this copied content : this is the <br>
//!           way to be used for any kind of alterations, adaptations ... <br>
//!           They are exploited by a ModelCopier, which firstly performs <br>
//!           the copy operation described by Dispatches, then invokes the <br>
//!           Modifiers to work on the result. <br>
//! <br>
//!           Each GeneralModifier can be attached to : <br>
//!           - all the Models produced <br>
//!           - a Dispatch (it will be applied to all the Models obtained <br>
//!             from this Dispatch) designated by its Ident in a ShareOut <br>
//!           - in addition, to a Selection (facultative) : this adds a <br>
//!             criterium, the Modifier is invoked on a produced Model only <br>
//!             if this Model contains an Entity copied from one of the <br>
//!             Entities designated by this Selection. <br>
//!             (for special Modifiers from IFAdapt, while they must work on <br>
//!             definite Entities, this Selection is mandatory to run) <br>
//! <br>
//!             Remark : this class has no action attached, it only provides <br>
//!             a frame to work on criteria. Then, sub-classes will define <br>
//!             their kind of action, which can be applied at a precise step <br>
//!             of the production of a File : see Modifier, and in the <br>
//!             package IFAdapt, EntityModifier and EntityCopier <br>
class IFSelect_GeneralModifier : public MMgt_TShared {

public:

  //! Returns True if this modifier may change the graph of <br>
//!           dependences (aknowledged at creation time) <br>
  Standard_EXPORT     Standard_Boolean MayChangeGraph() const;
  //! Attaches to a Dispatch. If <disp> is Null, Resets it <br>
//!           (to apply the Modifier on every Dispatch) <br>
  Standard_EXPORT     void SetDispatch(const Handle(IFSelect_Dispatch)& disp) ;
  //! Returns the Dispatch to be matched, Null if not set <br>
  Standard_EXPORT     Handle_IFSelect_Dispatch Dispatch() const;
  //! Returns True if a Model obtained from the Dispatch <disp> <br>
//!           is to be treated (apart from the Selection criterium) <br>
//!           If Dispatch(me) is Null, returns True. Else, checks <disp> <br>
  Standard_EXPORT     Standard_Boolean Applies(const Handle(IFSelect_Dispatch)& disp) const;
  //! Sets a Selection : a Model is treated if it contains one or <br>
//!           more Entities designated by the Selection <br>
  Standard_EXPORT     void SetSelection(const Handle(IFSelect_Selection)& sel) ;
  //! Resets the Selection : this criterium is not longer active <br>
  Standard_EXPORT     void ResetSelection() ;
  //! Returns True if a Selection is set as an additionnal criterium <br>
  Standard_EXPORT     Standard_Boolean HasSelection() const;
  //! Returns the Selection, or a Null Handle if not set <br>
  Standard_EXPORT     Handle_IFSelect_Selection Selection() const;
  //! Returns a short text which defines the operation performed <br>
  Standard_EXPORT   virtual  TCollection_AsciiString Label() const = 0;




  DEFINE_STANDARD_RTTI(IFSelect_GeneralModifier)

protected:

  //! Sets the Modifier criteria to default Values <br>
//!           (i.e. "always applies") <br>
//!           <maychangegraph> must be provided at creation time, to : <br>
//!           - False if this GeneralModifier surely lets the graph of <br>
//!             dependencies unchanged (NO edition of any reference, BUT <br>
//!             also NO entity added or replaced or removed) <br>
//!           - True if there is a possibility of changing the graph of <br>
//!             dependencies when this modifier is applied <br>
  Standard_EXPORT   IFSelect_GeneralModifier(const Standard_Boolean maychangegraph);



private: 


Handle_IFSelect_Selection thesel;
Handle_IFSelect_Dispatch thedisp;
Standard_Boolean thechgr;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif