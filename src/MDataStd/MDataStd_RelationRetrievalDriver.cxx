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

#include <MDataStd_RelationRetrievalDriver.ixx>
#include <PDataStd_Relation.hxx>
#include <TDataStd_Relation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <PCollection_HExtendedString.hxx>
#include <TDF_ListIteratorOfAttributeList.hxx> 
#include <PDF_HAttributeArray1.hxx> 
#include <Standard_NoSuchObject.hxx>
#include <CDM_MessageDriver.hxx>


//=======================================================================
//function : MDataStd_RelationRetrievalDriver
//purpose  : 
//=======================================================================

MDataStd_RelationRetrievalDriver::MDataStd_RelationRetrievalDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ARDriver(theMsgDriver)
{
}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MDataStd_RelationRetrievalDriver::VersionNumber() const
{ return 0; }

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MDataStd_RelationRetrievalDriver::SourceType() const
{
  return STANDARD_TYPE(PDataStd_Relation); 
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) MDataStd_RelationRetrievalDriver::NewEmpty() const
{
  return new TDataStd_Relation (); 
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MDataStd_RelationRetrievalDriver::Paste(const Handle(PDF_Attribute)& Source,
					     const Handle(TDF_Attribute)& Target,
					     const Handle(MDF_RRelocationTable)& RelocTable) const
{
  Handle(PDataStd_Relation) S = Handle(PDataStd_Relation)::DownCast (Source);
  Handle(TDataStd_Relation) T = Handle(TDataStd_Relation)::DownCast (Target);
  TCollection_ExtendedString Relation = (S->GetName())->Convert ();
  T->SetRelation (Relation);
  
  Handle(PDF_Attribute) PV; 
  Handle(TDF_Attribute) TV;

  Handle(PDF_HAttributeArray1) PVARS = S->GetVariables ();
  if (PVARS.IsNull()) return;
  for (Standard_Integer i = 1; i <= PVARS->Length (); i++) {
    PV = PVARS->Value (i);
    if (!PV.IsNull ()) {
      if (!RelocTable->HasRelocation (PV, TV)) {
	Standard_NoSuchObject::Raise("MDataStd_ConstraintRetrievalDriver::Paste");
      }
      T->GetVariables().Append(TV);
    }
  }
}

