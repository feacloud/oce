// Copyright (c) 1999-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.

/*============================================================================*/
/*==== Titre: Aspect_Handle.hxx                                               */
/*==== Role : The header file of primitive type "Handle" from packages        */
/*==== "Xw" & "WNT"                                                           */
/*==== Implementation:  This is a primitive type implemented with typedef     */
/*============================================================================*/

#ifndef _Aspect_Handle_HeaderFile
#define _Aspect_Handle_HeaderFile

#ifdef WNT
 typedef void*         HANDLE;
 typedef HANDLE        Aspect_Handle;
#else
 typedef unsigned long Aspect_Handle;
#endif /* WNT */

#if defined(__cplusplus) || defined(c_plusplus)
/*==== Definition de Type ====================================================*/

#include <Standard_Macro.hxx>
class Handle(Standard_Type);
const Handle(Standard_Type)& STANDARD_TYPE(Aspect_Handle);

/*============================================================================*/
#endif

#endif /* _Aspect_Handle_HeaderFile */
