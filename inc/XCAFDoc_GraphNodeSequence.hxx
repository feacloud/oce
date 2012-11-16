// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFDoc_GraphNodeSequence_HeaderFile
#define _XCAFDoc_GraphNodeSequence_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_XCAFDoc_GraphNode_HeaderFile
#include <Handle_XCAFDoc_GraphNode.hxx>
#endif
#ifndef _Handle_XCAFDoc_SequenceNodeOfGraphNodeSequence_HeaderFile
#include <Handle_XCAFDoc_SequenceNodeOfGraphNodeSequence.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class XCAFDoc_GraphNode;
class XCAFDoc_SequenceNodeOfGraphNodeSequence;



class XCAFDoc_GraphNodeSequence  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      XCAFDoc_GraphNodeSequence();
  
  Standard_EXPORT     void Clear() ;
~XCAFDoc_GraphNodeSequence()
{
  Clear();
}
  
  Standard_EXPORT    const XCAFDoc_GraphNodeSequence& Assign(const XCAFDoc_GraphNodeSequence& Other) ;
   const XCAFDoc_GraphNodeSequence& operator =(const XCAFDoc_GraphNodeSequence& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(XCAFDoc_GraphNode)& T) ;
  
        void Append(XCAFDoc_GraphNodeSequence& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(XCAFDoc_GraphNode)& T) ;
  
        void Prepend(XCAFDoc_GraphNodeSequence& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(XCAFDoc_GraphNode)& T) ;
  
        void InsertBefore(const Standard_Integer Index,XCAFDoc_GraphNodeSequence& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(XCAFDoc_GraphNode)& T) ;
  
        void InsertAfter(const Standard_Integer Index,XCAFDoc_GraphNodeSequence& S) ;
  
  Standard_EXPORT    const Handle_XCAFDoc_GraphNode& First() const;
  
  Standard_EXPORT    const Handle_XCAFDoc_GraphNode& Last() const;
  
        void Split(const Standard_Integer Index,XCAFDoc_GraphNodeSequence& Sub) ;
  
  Standard_EXPORT    const Handle_XCAFDoc_GraphNode& Value(const Standard_Integer Index) const;
   const Handle_XCAFDoc_GraphNode& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(XCAFDoc_GraphNode)& I) ;
  
  Standard_EXPORT     Handle_XCAFDoc_GraphNode& ChangeValue(const Standard_Integer Index) ;
    Handle_XCAFDoc_GraphNode& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   XCAFDoc_GraphNodeSequence(const XCAFDoc_GraphNodeSequence& Other);




};

#define SeqItem Handle_XCAFDoc_GraphNode
#define SeqItem_hxx <XCAFDoc_GraphNode.hxx>
#define TCollection_SequenceNode XCAFDoc_SequenceNodeOfGraphNodeSequence
#define TCollection_SequenceNode_hxx <XCAFDoc_SequenceNodeOfGraphNodeSequence.hxx>
#define Handle_TCollection_SequenceNode Handle_XCAFDoc_SequenceNodeOfGraphNodeSequence
#define TCollection_SequenceNode_Type_() XCAFDoc_SequenceNodeOfGraphNodeSequence_Type_()
#define TCollection_Sequence XCAFDoc_GraphNodeSequence
#define TCollection_Sequence_hxx <XCAFDoc_GraphNodeSequence.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
