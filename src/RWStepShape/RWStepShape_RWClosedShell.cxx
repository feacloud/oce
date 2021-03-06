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


#include <RWStepShape_RWClosedShell.ixx>
#include <StepShape_HArray1OfFace.hxx>
#include <StepShape_Face.hxx>


#include <Interface_EntityIterator.hxx>


#include <StepShape_ClosedShell.hxx>


RWStepShape_RWClosedShell::RWStepShape_RWClosedShell () {}

void RWStepShape_RWClosedShell::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepShape_ClosedShell)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,2,ach,"closed_shell")) return;

	// --- inherited field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- inherited field : cfsFaces ---

	Handle(StepShape_HArray1OfFace) aCfsFaces;
	Handle(StepShape_Face) anent2;
	Standard_Integer nsub2;
	if (data->ReadSubList (num,2,"cfs_faces",ach,nsub2)) {
	  Standard_Integer nb2 = data->NbParams(nsub2);
	  aCfsFaces = new StepShape_HArray1OfFace (1, nb2);
	  for (Standard_Integer i2 = 1; i2 <= nb2; i2 ++) {
	    //szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	    if (data->ReadEntity (nsub2, i2,"face", ach, STANDARD_TYPE(StepShape_Face), anent2))
	      aCfsFaces->SetValue(i2, anent2);
	  }
	}

	//--- Initialisation of the read entity ---


	ent->Init(aName, aCfsFaces);
}


void RWStepShape_RWClosedShell::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepShape_ClosedShell)& ent) const
{

	// --- inherited field name ---

	SW.Send(ent->Name());

	// --- inherited field cfsFaces ---

	SW.OpenSub();
	for (Standard_Integer i2 = 1;  i2 <= ent->NbCfsFaces();  i2 ++) {
	  SW.Send(ent->CfsFacesValue(i2));
	}
	SW.CloseSub();
}


void RWStepShape_RWClosedShell::Share(const Handle(StepShape_ClosedShell)& ent, Interface_EntityIterator& iter) const
{

	Standard_Integer nbElem1 = ent->NbCfsFaces();
	for (Standard_Integer is1=1; is1<=nbElem1; is1 ++) {
	  iter.GetOneItem(ent->CfsFacesValue(is1));
	}

}

