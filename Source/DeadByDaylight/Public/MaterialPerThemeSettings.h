#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MaterialPerThemeSettings.generated.h"

class UMaterialPerThemeData;

UCLASS()
class DEADBYDAYLIGHT_API UMaterialPerThemeSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, UMaterialPerThemeData*> _themeMap;
    
    UPROPERTY()
    UMaterialPerThemeData* _data;
    
public:
    UMaterialPerThemeSettings();
};

