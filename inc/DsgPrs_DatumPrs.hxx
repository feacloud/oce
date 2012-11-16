// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_DatumPrs_HeaderFile
#define _DsgPrs_DatumPrs_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Prs3d_Root_HeaderFile
#include <Prs3d_Root.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
class gp_Ax2;
class DsgPrs_DatumTool;
class Prs3d_Presentation;
class Prs3d_Drawer;



class DsgPrs_DatumPrs  : public Prs3d_Root {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const gp_Ax2& aDatum,const Handle(Prs3d_Drawer)& aDrawer) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
