// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_DataMapIteratorOfDataMapOfIntegerBisector_HeaderFile
#define _MAT_DataMapIteratorOfDataMapOfIntegerBisector_HeaderFile

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
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MAT_Bisector_HeaderFile
#include <Handle_MAT_Bisector.hxx>
#endif
#ifndef _Handle_MAT_DataMapNodeOfDataMapOfIntegerBisector_HeaderFile
#include <Handle_MAT_DataMapNodeOfDataMapOfIntegerBisector.hxx>
#endif
class Standard_NoSuchObject;
class MAT_Bisector;
class TColStd_MapIntegerHasher;
class MAT_DataMapOfIntegerBisector;
class MAT_DataMapNodeOfDataMapOfIntegerBisector;



class MAT_DataMapIteratorOfDataMapOfIntegerBisector  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   MAT_DataMapIteratorOfDataMapOfIntegerBisector();
  
  Standard_EXPORT   MAT_DataMapIteratorOfDataMapOfIntegerBisector(const MAT_DataMapOfIntegerBisector& aMap);
  
  Standard_EXPORT     void Initialize(const MAT_DataMapOfIntegerBisector& aMap) ;
  
  Standard_EXPORT    const Standard_Integer& Key() const;
  
  Standard_EXPORT    const Handle_MAT_Bisector& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
