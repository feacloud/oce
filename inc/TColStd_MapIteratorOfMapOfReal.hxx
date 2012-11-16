// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_MapIteratorOfMapOfReal_HeaderFile
#define _TColStd_MapIteratorOfMapOfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TColStd_StdMapNodeOfMapOfReal_HeaderFile
#include <Handle_TColStd_StdMapNodeOfMapOfReal.hxx>
#endif
class Standard_NoSuchObject;
class TColStd_MapRealHasher;
class TColStd_MapOfReal;
class TColStd_StdMapNodeOfMapOfReal;



class TColStd_MapIteratorOfMapOfReal  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TColStd_MapIteratorOfMapOfReal();
  
  Standard_EXPORT   TColStd_MapIteratorOfMapOfReal(const TColStd_MapOfReal& aMap);
  
  Standard_EXPORT     void Initialize(const TColStd_MapOfReal& aMap) ;
  
  Standard_EXPORT    const Standard_Real& Key() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
