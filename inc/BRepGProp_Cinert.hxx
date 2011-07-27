// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepGProp_Cinert_HeaderFile
#define _BRepGProp_Cinert_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _GProp_GProps_HeaderFile
#include <GProp_GProps.hxx>
#endif
class BRepAdaptor_Curve;
class BRepGProp_EdgeTool;
class gp_Pnt;



class BRepGProp_Cinert  : public GProp_GProps {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   BRepGProp_Cinert();
  
  Standard_EXPORT   BRepGProp_Cinert(const BRepAdaptor_Curve& C,const gp_Pnt& CLocation);
  
  Standard_EXPORT     void SetLocation(const gp_Pnt& CLocation) ;
  
  Standard_EXPORT     void Perform(const BRepAdaptor_Curve& C) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif