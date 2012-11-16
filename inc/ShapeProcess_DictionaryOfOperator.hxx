// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeProcess_DictionaryOfOperator_HeaderFile
#define _ShapeProcess_DictionaryOfOperator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeProcess_DictionaryOfOperator_HeaderFile
#include <Handle_ShapeProcess_DictionaryOfOperator.hxx>
#endif

#ifndef _Standard_Character_HeaderFile
#include <Standard_Character.hxx>
#endif
#ifndef _Handle_ShapeProcess_DictionaryOfOperator_HeaderFile
#include <Handle_ShapeProcess_DictionaryOfOperator.hxx>
#endif
#ifndef _Handle_ShapeProcess_Operator_HeaderFile
#include <Handle_ShapeProcess_Operator.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_ShapeProcess_StackItemOfDictionaryOfOperator_HeaderFile
#include <Handle_ShapeProcess_StackItemOfDictionaryOfOperator.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Size_HeaderFile
#include <Standard_Size.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class ShapeProcess_Operator;
class Standard_NoSuchObject;
class ShapeProcess_IteratorOfDictionaryOfOperator;
class ShapeProcess_StackItemOfDictionaryOfOperator;
class TCollection_AsciiString;



class ShapeProcess_DictionaryOfOperator : public MMgt_TShared {

public:

  
  Standard_EXPORT   ShapeProcess_DictionaryOfOperator();
  
  Standard_EXPORT     Standard_Boolean HasItem(const Standard_CString name,const Standard_Boolean exact = Standard_False) const;
  
  Standard_EXPORT     Standard_Boolean HasItem(const TCollection_AsciiString& name,const Standard_Boolean exact = Standard_True) const;
  
  Standard_EXPORT    const Handle_ShapeProcess_Operator& Item(const Standard_CString name,const Standard_Boolean exact = Standard_True) const;
  
  Standard_EXPORT    const Handle_ShapeProcess_Operator& Item(const TCollection_AsciiString& name,const Standard_Boolean exact = Standard_True) const;
  
  Standard_EXPORT     Standard_Boolean GetItem(const Standard_CString name,Handle(ShapeProcess_Operator)& anitem,const Standard_Boolean exact = Standard_True) const;
  
  Standard_EXPORT     Standard_Boolean GetItem(const TCollection_AsciiString& name,Handle(ShapeProcess_Operator)& anitem,const Standard_Boolean exact = Standard_True) const;
  
  Standard_EXPORT     void SetItem(const Standard_CString name,const Handle(ShapeProcess_Operator)& anitem,const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT     void SetItem(const TCollection_AsciiString& name,const Handle(ShapeProcess_Operator)& anitem,const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT     Handle_ShapeProcess_Operator& NewItem(const Standard_CString name,Standard_Boolean& isvalued,const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT     Handle_ShapeProcess_Operator& NewItem(const TCollection_AsciiString& name,Standard_Boolean& isvalued,const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean RemoveItem(const Standard_CString name,const Standard_Boolean cln = Standard_True,const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean RemoveItem(const TCollection_AsciiString& name,const Standard_Boolean cln = Standard_True,const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT     void Clean() ;
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     Handle_ShapeProcess_DictionaryOfOperator Copy() const;
  
  Standard_EXPORT     Standard_Boolean Complete(Handle(ShapeProcess_DictionaryOfOperator)& acell) const;


friend class ShapeProcess_IteratorOfDictionaryOfOperator;


  DEFINE_STANDARD_RTTI(ShapeProcess_DictionaryOfOperator)

protected:




private: 

  
  Standard_EXPORT     void SetChar(const Standard_Character car) ;
  
  Standard_EXPORT     Standard_Boolean HasSub() const;
  
  Standard_EXPORT     Handle_ShapeProcess_DictionaryOfOperator Sub() const;
  
  Standard_EXPORT     Standard_Boolean HasNext() const;
  
  Standard_EXPORT     Handle_ShapeProcess_DictionaryOfOperator Next() const;
  
  Standard_EXPORT     void SetSub(const Handle(ShapeProcess_DictionaryOfOperator)& acell) ;
  
  Standard_EXPORT     void SetNext(const Handle(ShapeProcess_DictionaryOfOperator)& acell) ;
  
  Standard_EXPORT     void SearchCell(const Standard_CString name,const Standard_Size lmax,const Standard_Character car,const Standard_Size level,Handle(ShapeProcess_DictionaryOfOperator)& acell,Standard_Size& reslev,Standard_Integer& stat) const;
  
  Standard_EXPORT     void NewCell(const Standard_CString name,const Standard_Size namlen,Handle(ShapeProcess_DictionaryOfOperator)& acell,const Standard_Size reslev,const Standard_Integer stat) ;
  
  Standard_EXPORT     Standard_Boolean HasIt() const;
  
  Standard_EXPORT    const Handle_ShapeProcess_Operator& It() const;
  
  Standard_EXPORT     Handle_ShapeProcess_Operator& ItAdr() ;
  
  Standard_EXPORT     void SetIt(const Handle(ShapeProcess_Operator)& anitem) ;
  
  Standard_EXPORT     void DeclIt() ;
  
  Standard_EXPORT     void RemoveIt() ;
  
  Standard_EXPORT     Standard_Character CellChar() const;
  
  Standard_EXPORT     void GetCopied(const Handle(ShapeProcess_DictionaryOfOperator)& fromcell) ;

Standard_Character thecars[4];
Handle_ShapeProcess_DictionaryOfOperator thesub;
Handle_ShapeProcess_DictionaryOfOperator thenext;
Handle_ShapeProcess_Operator theitem;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
