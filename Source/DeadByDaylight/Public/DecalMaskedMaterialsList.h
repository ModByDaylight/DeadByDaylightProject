#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DecalMaskedMaterialsList.generated.h"

class UStaticMesh;
class UMaterialInterface;

UCLASS()
class UDecalMaskedMaterialsList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* decalPlaneStaticMesh;
    
    UPROPERTY(EditDefaultsOnly)
    float decalPlaneExtent;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, UMaterialInterface*> decalMaskedMaterials;
    
    UDecalMaskedMaterialsList();
};

