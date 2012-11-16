// File generated by Schema (CallBack)
//
//                     Copyright (C) 1991 - 2000 by  
//                      Matra Datavision SA.  All rights reserved.
//  
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
// 
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//  
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _ShapeSchema_PGeom2d_BSplineCurve_HeaderFile
#define _ShapeSchema_PGeom2d_BSplineCurve_HeaderFile

#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_CallBack_HeaderFile
#include <Storage_CallBack.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif
#ifndef _Handle_PGeom2d_BSplineCurve_HeaderFile
#include <Handle_PGeom2d_BSplineCurve.hxx>
#endif

#ifndef _ShapeSchema_PGeom2d_BoundedCurve_HeaderFile
#include <ShapeSchema_PGeom2d_BoundedCurve.hxx>
#endif


DEFINE_STANDARD_HANDLE(ShapeSchema_PGeom2d_BSplineCurve,Storage_CallBack)

class ShapeSchema_PGeom2d_BSplineCurve : public Storage_CallBack {
public:
  ShapeSchema_PGeom2d_BSplineCurve() {}
  Standard_EXPORT static void SAdd(const Handle(PGeom2d_BSplineCurve)& ,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SWrite(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SRead(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);

  Standard_EXPORT Handle_Standard_Persistent New() const;
  Standard_EXPORT void Add(const Handle(Standard_Persistent)&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Write(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Read(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;

  DEFINE_STANDARD_RTTI(ShapeSchema_PGeom2d_BSplineCurve)
};
#endif
