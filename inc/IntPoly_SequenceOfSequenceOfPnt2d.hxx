// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPoly_SequenceOfSequenceOfPnt2d_HeaderFile
#define _IntPoly_SequenceOfSequenceOfPnt2d_HeaderFile

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
#ifndef _Handle_IntPoly_SequenceNodeOfSequenceOfSequenceOfPnt2d_HeaderFile
#include <Handle_IntPoly_SequenceNodeOfSequenceOfSequenceOfPnt2d.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TColgp_SequenceOfPnt2d;
class IntPoly_SequenceNodeOfSequenceOfSequenceOfPnt2d;



class IntPoly_SequenceOfSequenceOfPnt2d  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      IntPoly_SequenceOfSequenceOfPnt2d();
  
  Standard_EXPORT     void Clear() ;
~IntPoly_SequenceOfSequenceOfPnt2d()
{
  Clear();
}
  
  Standard_EXPORT    const IntPoly_SequenceOfSequenceOfPnt2d& Assign(const IntPoly_SequenceOfSequenceOfPnt2d& Other) ;
   const IntPoly_SequenceOfSequenceOfPnt2d& operator =(const IntPoly_SequenceOfSequenceOfPnt2d& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const TColgp_SequenceOfPnt2d& T) ;
  
        void Append(IntPoly_SequenceOfSequenceOfPnt2d& S) ;
  
  Standard_EXPORT     void Prepend(const TColgp_SequenceOfPnt2d& T) ;
  
        void Prepend(IntPoly_SequenceOfSequenceOfPnt2d& S) ;
  
        void InsertBefore(const Standard_Integer Index,const TColgp_SequenceOfPnt2d& T) ;
  
        void InsertBefore(const Standard_Integer Index,IntPoly_SequenceOfSequenceOfPnt2d& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const TColgp_SequenceOfPnt2d& T) ;
  
        void InsertAfter(const Standard_Integer Index,IntPoly_SequenceOfSequenceOfPnt2d& S) ;
  
  Standard_EXPORT    const TColgp_SequenceOfPnt2d& First() const;
  
  Standard_EXPORT    const TColgp_SequenceOfPnt2d& Last() const;
  
        void Split(const Standard_Integer Index,IntPoly_SequenceOfSequenceOfPnt2d& Sub) ;
  
  Standard_EXPORT    const TColgp_SequenceOfPnt2d& Value(const Standard_Integer Index) const;
   const TColgp_SequenceOfPnt2d& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const TColgp_SequenceOfPnt2d& I) ;
  
  Standard_EXPORT     TColgp_SequenceOfPnt2d& ChangeValue(const Standard_Integer Index) ;
    TColgp_SequenceOfPnt2d& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   IntPoly_SequenceOfSequenceOfPnt2d(const IntPoly_SequenceOfSequenceOfPnt2d& Other);




};

#define SeqItem TColgp_SequenceOfPnt2d
#define SeqItem_hxx <TColgp_SequenceOfPnt2d.hxx>
#define TCollection_SequenceNode IntPoly_SequenceNodeOfSequenceOfSequenceOfPnt2d
#define TCollection_SequenceNode_hxx <IntPoly_SequenceNodeOfSequenceOfSequenceOfPnt2d.hxx>
#define Handle_TCollection_SequenceNode Handle_IntPoly_SequenceNodeOfSequenceOfSequenceOfPnt2d
#define TCollection_SequenceNode_Type_() IntPoly_SequenceNodeOfSequenceOfSequenceOfPnt2d_Type_()
#define TCollection_Sequence IntPoly_SequenceOfSequenceOfPnt2d
#define TCollection_Sequence_hxx <IntPoly_SequenceOfSequenceOfPnt2d.hxx>

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
