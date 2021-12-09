#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MaterialPerThemeData.generated.h"

class UMaterialInstance;

UCLASS()
class DEADBYDAYLIGHT_API UMaterialPerThemeData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TMap<UMaterialInstance*, UMaterialInstance*> _materialMap;
    
public:
    UMaterialPerThemeData();
};

