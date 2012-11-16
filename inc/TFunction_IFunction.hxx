// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_IFunction_HeaderFile
#define _TFunction_IFunction_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TDF_Label_HeaderFile
#include <TDF_Label.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TFunction_ExecutionStatus_HeaderFile
#include <TFunction_ExecutionStatus.hxx>
#endif
#ifndef _Handle_TFunction_Driver_HeaderFile
#include <Handle_TFunction_Driver.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TFunction_GraphNode_HeaderFile
#include <Handle_TFunction_GraphNode.hxx>
#endif
class TDF_Label;
class Standard_GUID;
class TDF_LabelList;
class TFunction_DoubleMapOfIntegerLabel;
class TFunction_Logbook;
class TFunction_Driver;
class TFunction_GraphNode;


//! Interface class for usage of Function Mechanism <br>
class TFunction_IFunction  {
public:

  DEFINE_STANDARD_ALLOC

  //! Sets a new function attached to a label <L> with <ID>. <br>
//!          It creates a new TFunction_Function attribute initialized by the <ID>, <br>
//!          a new TFunction_GraphNode with an empty list of dependencies and <br>
//!          the status equal to TFunction_ES_WrongDefinition. <br>
//!          It registers the function in the scope of functions for this document. <br>
  Standard_EXPORT   static  Standard_Boolean NewFunction(const TDF_Label& L,const Standard_GUID& ID) ;
  //! Deletes a function attached to a label <L>. <br>
//!          It deletes a TFunction_Function attribute and a TFunction_GraphNode. <br>
//!          It deletes the functions from the scope of function of this document. <br>
  Standard_EXPORT   static  Standard_Boolean DeleteFunction(const TDF_Label& L) ;
  //! Updates dependencies for all functions of the scope. <br>
//!          It returns false in case of an error. <br>//! An empty constructor. <br>
  Standard_EXPORT   static  Standard_Boolean UpdateDependencies(const TDF_Label& Access) ;
  
  Standard_EXPORT   TFunction_IFunction();
  //! A constructor. <br>
//!          Initializes the interface by the label of function. <br>
  Standard_EXPORT   TFunction_IFunction(const TDF_Label& L);
  //! Initializes the interface by the label of function. <br>
  Standard_EXPORT     void Init(const TDF_Label& L) ;
  //! Returns a label of the function. <br>
  Standard_EXPORT    const TDF_Label& Label() const;
  //! Updates the dependencies of this function only. <br>
  Standard_EXPORT     Standard_Boolean UpdateDependencies() const;
  //! The method fills-in the list by labels, <br>
//!          where the arguments of the function are located. <br>
  Standard_EXPORT     void Arguments(TDF_LabelList& args) const;
  //! The method fills-in the list by labels, <br>
//!          where the results of the function are located. <br>
  Standard_EXPORT     void Results(TDF_LabelList& res) const;
  //! Returns a list of previous functions. <br>
  Standard_EXPORT     void GetPrevious(TDF_LabelList& prev) const;
  //! Returns a list of next functions. <br>
  Standard_EXPORT     void GetNext(TDF_LabelList& prev) const;
  //! Returns the execution status of the function. <br>
  Standard_EXPORT     TFunction_ExecutionStatus GetStatus() const;
  //! Defines an execution status for a function. <br>
  Standard_EXPORT     void SetStatus(const TFunction_ExecutionStatus status) const;
  //! Returns the scope of all functions. <br>
  Standard_EXPORT    const TFunction_DoubleMapOfIntegerLabel& GetAllFunctions() const;
  //! Returns the Logbook - keeper of modifications. <br>
  Standard_EXPORT     TFunction_Logbook& GetLogbook() const;
  //! Returns a driver of the function. <br>
  Standard_EXPORT     Handle_TFunction_Driver GetDriver(const Standard_Integer thread = 0) const;
  //! Returns a graph node of the function. <br>
  Standard_EXPORT     Handle_TFunction_GraphNode GetGraphNode() const;





protected:





private:



TDF_Label myLabel;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
