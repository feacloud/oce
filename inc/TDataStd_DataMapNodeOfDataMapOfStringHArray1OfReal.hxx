// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal_HeaderFile
#define _TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal_HeaderFile
#include <Handle_TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal.hxx>
#endif

#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TColStd_HArray1OfReal;
class TCollection_ExtendedString;
class TDataStd_DataMapOfStringHArray1OfReal;
class TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfReal;



class TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal : public TCollection_MapNode {

public:

  
      TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal(const TCollection_ExtendedString& K,const Handle(TColStd_HArray1OfReal)& I,const TCollection_MapNodePtr& n);
  
        TCollection_ExtendedString& Key() const;
  
        Handle_TColStd_HArray1OfReal& Value() const;




  DEFINE_STANDARD_RTTI(TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal)

protected:




private: 


TCollection_ExtendedString myKey;
Handle_TColStd_HArray1OfReal myValue;


};

#define TheKey TCollection_ExtendedString
#define TheKey_hxx <TCollection_ExtendedString.hxx>
#define TheItem Handle_TColStd_HArray1OfReal
#define TheItem_hxx <TColStd_HArray1OfReal.hxx>
#define Hasher TCollection_ExtendedString
#define Hasher_hxx <TCollection_ExtendedString.hxx>
#define TCollection_DataMapNode TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal
#define TCollection_DataMapNode_hxx <TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal.hxx>
#define TCollection_DataMapIterator TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfReal
#define TCollection_DataMapIterator_hxx <TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfReal.hxx>
#define Handle_TCollection_DataMapNode Handle_TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal
#define TCollection_DataMapNode_Type_() TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal_Type_()
#define TCollection_DataMap TDataStd_DataMapOfStringHArray1OfReal
#define TCollection_DataMap_hxx <TDataStd_DataMapOfStringHArray1OfReal.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
