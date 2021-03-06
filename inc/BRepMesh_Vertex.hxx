// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_Vertex_HeaderFile
#define _BRepMesh_Vertex_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_XY_HeaderFile
#include <gp_XY.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BRepMesh_DegreeOfFreedom_HeaderFile
#include <BRepMesh_DegreeOfFreedom.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class gp_XY;



class BRepMesh_Vertex  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepMesh_Vertex();
  
  Standard_EXPORT   BRepMesh_Vertex(const gp_XY& UV,const Standard_Integer Locat3d,const BRepMesh_DegreeOfFreedom Move);
  
  Standard_EXPORT   BRepMesh_Vertex(const Standard_Real U,const Standard_Real V,const BRepMesh_DegreeOfFreedom Move);
  
  Standard_EXPORT     void Initialize(const gp_XY& UV,const Standard_Integer Locat3d,const BRepMesh_DegreeOfFreedom Move) ;
  
       const gp_XY& Coord() const;
  
        Standard_Integer Location3d() const;
  
        BRepMesh_DegreeOfFreedom Movability() const;
  
  Standard_EXPORT     void SetMovability(const BRepMesh_DegreeOfFreedom Move) ;
  
  Standard_EXPORT     Standard_Integer HashCode(const Standard_Integer Upper) const;
  
  Standard_EXPORT     Standard_Boolean IsEqual(const BRepMesh_Vertex& Other) const;
    Standard_Boolean operator ==(const BRepMesh_Vertex& Other) const
{
  return IsEqual(Other);
}





protected:





private:



gp_XY myUV;
Standard_Integer myLocation;
BRepMesh_DegreeOfFreedom myMovability;


};


#include <BRepMesh_Vertex.lxx>



// other Inline functions and methods (like "C++: function call" methods)
inline Standard_Integer HashCode(const BRepMesh_Vertex& me,const Standard_Integer Upper) {
 return me.HashCode(Upper);
}



#endif
