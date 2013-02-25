#ifndef CBMRUTHERFORDGEOPAR_H
#define CBMRUTHERFORDGEOPAR_H

#include "FairParGenericSet.h"

class TObjArray;
class FairParamList;

class FairRutherfordGeoPar       : public FairParGenericSet
{
  public:

    /** List of FairGeoNodes for sensitive  volumes */
    TObjArray*      fGeoSensNodes;

    /** List of FairGeoNodes for sensitive  volumes */
    TObjArray*      fGeoPassNodes;

    FairRutherfordGeoPar(const char* name="FairRutherfordGeoPar",
                         const char* title="FairRutherford Geometry Parameters",
                         const char* context="TestDefaultContext");
    ~FairRutherfordGeoPar(void);
    void clear(void);
    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);
    TObjArray* GetGeoSensitiveNodes() {return fGeoSensNodes;}
    TObjArray* GetGeoPassiveNodes()   {return fGeoPassNodes;}

  private:
    FairRutherfordGeoPar(const FairRutherfordGeoPar&);
    FairRutherfordGeoPar& operator=(const FairRutherfordGeoPar&);

    ClassDef(FairRutherfordGeoPar,1)
};

#endif
