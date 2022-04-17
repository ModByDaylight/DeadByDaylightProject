#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HISMMaterialHelperSettings.generated.h"

class UStaticMesh;

UCLASS()
class UHISMMaterialHelperSettings : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TMap<UStaticMesh*, TSoftClassPtr<UActorComponent>> _meshMaterialOverride;
    
public:
    UHISMMaterialHelperSettings();
};

