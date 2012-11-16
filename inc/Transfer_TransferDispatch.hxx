// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_TransferDispatch_HeaderFile
#define _Transfer_TransferDispatch_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Interface_CopyTool_HeaderFile
#include <Interface_CopyTool.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _Handle_Interface_Protocol_HeaderFile
#include <Handle_Interface_Protocol.hxx>
#endif
#ifndef _Handle_Transfer_TransientProcess_HeaderFile
#include <Handle_Transfer_TransientProcess.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class Interface_InterfaceError;
class Interface_InterfaceModel;
class Interface_GeneralLib;
class Interface_Protocol;
class Transfer_TransientProcess;
class Standard_Transient;


//! A TransferDispatch is aimed to dispatch Entities between two <br>
//!           Interface Models, by default by copying them, as CopyTool, but <br>
//!           with more capabilities of adapting : Copy is redefined to <br>
//!           firstly pass the hand to a TransferProcess. If this gives no <br>
//!           result, standard Copy is called. <br>
//! <br>
//!           This allow, for instance, to modify the copied Entity (such as <br>
//!           changing a Name for a VDA Entity), or to do a deeper work <br>
//!           (such as Substituting a kind of Entity to another one). <br>
//! <br>
//!           For these reasons, TransferDispatch is basically a CopyTool, <br>
//!           but uses a more sophiscated control, which is TransferProcess, <br>
//!           and its method Copy is redefined <br>
class Transfer_TransferDispatch  : public Interface_CopyTool {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates a TransferDispatch from a Model. Works with a General <br>
//!           Service Library, given as an Argument <br>
//!           A TransferDispatch is created as a CopyTool in which the <br>
//!           Control is set to TransientProcess <br>
  Standard_EXPORT   Transfer_TransferDispatch(const Handle(Interface_InterfaceModel)& amodel,const Interface_GeneralLib& lib);
  //! Same as above, but Library is defined through a Protocol <br>
  Standard_EXPORT   Transfer_TransferDispatch(const Handle(Interface_InterfaceModel)& amodel,const Handle(Interface_Protocol)& protocol);
  //! Same as above, but works with the Active Protocol <br>
  Standard_EXPORT   Transfer_TransferDispatch(const Handle(Interface_InterfaceModel)& amodel);
  //! Returns the content of Control Object, as a TransientProcess <br>
  Standard_EXPORT     Handle_Transfer_TransientProcess TransientProcess() const;
  //! Copies an Entity by calling the method Transferring from the <br>
//!           TransferProcess. If this called produces a Null Binder, then <br>
//!           the standard, inherited Copy is called <br>
  Standard_EXPORT   virtual  Standard_Boolean Copy(const Handle(Standard_Transient)& entfrom,Handle(Standard_Transient)& entto,const Standard_Boolean mapped,const Standard_Boolean errstat) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
