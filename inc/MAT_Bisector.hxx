// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_Bisector_HeaderFile
#define _MAT_Bisector_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MAT_Bisector_HeaderFile
#include <Handle_MAT_Bisector.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MAT_Edge_HeaderFile
#include <Handle_MAT_Edge.hxx>
#endif
#ifndef _Handle_MAT_ListOfBisector_HeaderFile
#include <Handle_MAT_ListOfBisector.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class MAT_Edge;
class MAT_ListOfBisector;



class MAT_Bisector : public MMgt_TShared {

public:

  
  Standard_EXPORT   MAT_Bisector();
  
  Standard_EXPORT     void AddBisector(const Handle(MAT_Bisector)& abisector) const;
  
  Standard_EXPORT     Handle_MAT_ListOfBisector List() const;
  
  Standard_EXPORT     Handle_MAT_Bisector FirstBisector() const;
  
  Standard_EXPORT     Handle_MAT_Bisector LastBisector() const;
  
  Standard_EXPORT     void BisectorNumber(const Standard_Integer anumber) ;
  
  Standard_EXPORT     void IndexNumber(const Standard_Integer anumber) ;
  
  Standard_EXPORT     void FirstEdge(const Handle(MAT_Edge)& anedge) ;
  
  Standard_EXPORT     void SecondEdge(const Handle(MAT_Edge)& anedge) ;
  
  Standard_EXPORT     void IssuePoint(const Standard_Integer apoint) ;
  
  Standard_EXPORT     void EndPoint(const Standard_Integer apoint) ;
  
  Standard_EXPORT     void DistIssuePoint(const Standard_Real areal) ;
  
  Standard_EXPORT     void FirstVector(const Standard_Integer avector) ;
  
  Standard_EXPORT     void SecondVector(const Standard_Integer avector) ;
  
  Standard_EXPORT     void Sense(const Standard_Real asense) ;
  
  Standard_EXPORT     void FirstParameter(const Standard_Real aparameter) ;
  
  Standard_EXPORT     void SecondParameter(const Standard_Real aparameter) ;
  
  Standard_EXPORT     Standard_Integer BisectorNumber() const;
  
  Standard_EXPORT     Standard_Integer IndexNumber() const;
  
  Standard_EXPORT     Handle_MAT_Edge FirstEdge() const;
  
  Standard_EXPORT     Handle_MAT_Edge SecondEdge() const;
  
  Standard_EXPORT     Standard_Integer IssuePoint() const;
  
  Standard_EXPORT     Standard_Integer EndPoint() const;
  
  Standard_EXPORT     Standard_Real DistIssuePoint() const;
  
  Standard_EXPORT     Standard_Integer FirstVector() const;
  
  Standard_EXPORT     Standard_Integer SecondVector() const;
  
  Standard_EXPORT     Standard_Real Sense() const;
  
  Standard_EXPORT     Standard_Real FirstParameter() const;
  
  Standard_EXPORT     Standard_Real SecondParameter() const;
  
  Standard_EXPORT     void Dump(const Standard_Integer ashift,const Standard_Integer alevel) const;




  DEFINE_STANDARD_RTTI(MAT_Bisector)

protected:




private: 


Standard_Integer thebisectornumber;
Standard_Integer theindexnumber;
Handle_MAT_Edge thefirstedge;
Handle_MAT_Edge thesecondedge;
Handle_MAT_ListOfBisector thelistofbisectors;
Standard_Integer theissuepoint;
Standard_Integer theendpoint;
Standard_Integer thefirstvector;
Standard_Integer thesecondvector;
Standard_Real thesense;
Standard_Real thefirstparameter;
Standard_Real thesecondparameter;
Standard_Real distissuepoint;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
