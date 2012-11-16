// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PlotMgt_HeaderFile
#define _PlotMgt_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TColStd_HSequenceOfAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfAsciiString.hxx>
#endif
#ifndef _PlotMgt_TypeOfPlotterParameter_HeaderFile
#include <PlotMgt_TypeOfPlotterParameter.hxx>
#endif
#ifndef _PlotMgt_TypeOfOrigin_HeaderFile
#include <PlotMgt_TypeOfOrigin.hxx>
#endif
#ifndef _PlotMgt_TypeOfQuality_HeaderFile
#include <PlotMgt_TypeOfQuality.hxx>
#endif
#ifndef _PlotMgt_ImageFormat_HeaderFile
#include <PlotMgt_ImageFormat.hxx>
#endif
#ifndef _PlotMgt_PlottingType_HeaderFile
#include <PlotMgt_PlottingType.hxx>
#endif
#ifndef _PlotMgt_PaperFormat_HeaderFile
#include <PlotMgt_PaperFormat.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TColStd_HSequenceOfAsciiString;
class TCollection_AsciiString;
class PlotMgt_ImageDriver;
class PlotMgt_PlotterParameter;
class PlotMgt_Plotter;
class PlotMgt_PlotterDriver;
class PlotMgt_TextManager;
class PlotMgt_ListOfPlotterParameter;
class PlotMgt_HListOfPlotterParameter;
class PlotMgt_ListOfMFTFonts;
class PlotMgt_HListOfMFTFonts;
class PlotMgt_SequenceNodeOfListOfPlotterParameter;



class PlotMgt  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  Handle_TColStd_HSequenceOfAsciiString DeviceList() ;
  
  Standard_EXPORT   static  PlotMgt_TypeOfPlotterParameter TypeFromString(TCollection_AsciiString& aTypeString) ;
  
  Standard_EXPORT   static  TCollection_AsciiString StringFromType(const PlotMgt_TypeOfPlotterParameter aType) ;
  
  Standard_EXPORT   static  PlotMgt_TypeOfOrigin OriginFromString(TCollection_AsciiString& anOriginString) ;
  
  Standard_EXPORT   static  TCollection_AsciiString StringFromOrigin(const PlotMgt_TypeOfOrigin anOrigin) ;
  
  Standard_EXPORT   static  PlotMgt_TypeOfQuality QualityFromString(TCollection_AsciiString& aQualityString) ;
  
  Standard_EXPORT   static  TCollection_AsciiString StringFromQuality(const PlotMgt_TypeOfQuality aQuality) ;
  
  Standard_EXPORT   static  PlotMgt_ImageFormat ImageFormatFromString(TCollection_AsciiString& anImageFormatString) ;
  
  Standard_EXPORT   static  TCollection_AsciiString StringFromImageFormat(const PlotMgt_ImageFormat anImageFormat) ;
  
  Standard_EXPORT   static  PlotMgt_PlottingType PlottingTypeFromString(TCollection_AsciiString& aPlottingTypeString) ;
  
  Standard_EXPORT   static  TCollection_AsciiString StringFromPlottingType(const PlotMgt_PlottingType aPlottingType) ;
  
  Standard_EXPORT   static  PlotMgt_PaperFormat PaperFormatFromString(TCollection_AsciiString& aPaperFormatString) ;
  
  Standard_EXPORT   static  TCollection_AsciiString StringFromPaperFormat(const PlotMgt_PaperFormat aPaperFormat) ;
  
  Standard_EXPORT   static  void PaperSize(TCollection_AsciiString& aFormat,Standard_Real& aWidth,Standard_Real& aLength) ;





protected:





private:




friend class PlotMgt_ImageDriver;
friend class PlotMgt_PlotterParameter;
friend class PlotMgt_Plotter;
friend class PlotMgt_PlotterDriver;
friend class PlotMgt_TextManager;
friend class PlotMgt_ListOfPlotterParameter;
friend class PlotMgt_HListOfPlotterParameter;
friend class PlotMgt_ListOfMFTFonts;
friend class PlotMgt_HListOfMFTFonts;
friend class PlotMgt_SequenceNodeOfListOfPlotterParameter;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
