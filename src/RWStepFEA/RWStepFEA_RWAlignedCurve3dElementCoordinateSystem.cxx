// Created on: 2002-12-12
// Created by: data exchange team
// Copyright (c) 2002-2012 OPEN CASCADE SAS
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.2

#include <RWStepFEA_RWAlignedCurve3dElementCoordinateSystem.ixx>

//=======================================================================
//function : RWStepFEA_RWAlignedCurve3dElementCoordinateSystem
//purpose  : 
//=======================================================================

RWStepFEA_RWAlignedCurve3dElementCoordinateSystem::RWStepFEA_RWAlignedCurve3dElementCoordinateSystem ()
{
}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================

void RWStepFEA_RWAlignedCurve3dElementCoordinateSystem::ReadStep (const Handle(StepData_StepReaderData)& data,
                                                                  const Standard_Integer num,
                                                                  Handle(Interface_Check)& ach,
                                                                  const Handle(StepFEA_AlignedCurve3dElementCoordinateSystem) &ent) const
{
  // Check number of parameters
  if ( ! data->CheckNbParams(num,2,ach,"aligned_curve3d_element_coordinate_system") ) return;

  // Inherited fields of RepresentationItem

  Handle(TCollection_HAsciiString) aRepresentationItem_Name;
  data->ReadString (num, 1, "representation_item.name", ach, aRepresentationItem_Name);

  // Own fields of AlignedCurve3dElementCoordinateSystem

  Handle(StepFEA_FeaAxis2Placement3d) aCoordinateSystem;
  data->ReadEntity (num, 2, "coordinate_system", ach, STANDARD_TYPE(StepFEA_FeaAxis2Placement3d), aCoordinateSystem);

  // Initialize entity
  ent->Init(aRepresentationItem_Name,
            aCoordinateSystem);
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================

void RWStepFEA_RWAlignedCurve3dElementCoordinateSystem::WriteStep (StepData_StepWriter& SW,
                                                                   const Handle(StepFEA_AlignedCurve3dElementCoordinateSystem) &ent) const
{

  // Inherited fields of RepresentationItem

  SW.Send (ent->StepRepr_RepresentationItem::Name());

  // Own fields of AlignedCurve3dElementCoordinateSystem

  SW.Send (ent->CoordinateSystem());
}

//=======================================================================
//function : Share
//purpose  : 
//=======================================================================

void RWStepFEA_RWAlignedCurve3dElementCoordinateSystem::Share (const Handle(StepFEA_AlignedCurve3dElementCoordinateSystem) &ent,
                                                               Interface_EntityIterator& iter) const
{

  // Inherited fields of RepresentationItem

  // Own fields of AlignedCurve3dElementCoordinateSystem

  iter.AddItem (ent->CoordinateSystem());
}
