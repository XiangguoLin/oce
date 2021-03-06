// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_DataMapIteratorOfDataMapOfILC_HeaderFile
#define _AIS_DataMapIteratorOfDataMapOfILC_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_AIS_LocalContext.hxx>
#include <Handle_AIS_DataMapNodeOfDataMapOfILC.hxx>
class Standard_NoSuchObject;
class AIS_LocalContext;
class TColStd_MapIntegerHasher;
class AIS_DataMapOfILC;
class AIS_DataMapNodeOfDataMapOfILC;



class AIS_DataMapIteratorOfDataMapOfILC  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AIS_DataMapIteratorOfDataMapOfILC();
  
  Standard_EXPORT AIS_DataMapIteratorOfDataMapOfILC(const AIS_DataMapOfILC& aMap);
  
  Standard_EXPORT   void Initialize (const AIS_DataMapOfILC& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  Handle(AIS_LocalContext)& Value()  const;




protected:





private:





};







#endif // _AIS_DataMapIteratorOfDataMapOfILC_HeaderFile
