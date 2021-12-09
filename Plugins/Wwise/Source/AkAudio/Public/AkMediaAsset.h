#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkMediaAsset.generated.h"

class UAkMediaAssetData;

UCLASS()
class AKAUDIO_API UAkMediaAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 Id;
    
    UPROPERTY(EditAnywhere)
    TArray<UObject*> UserData;
    
private:
    UPROPERTY()
    UAkMediaAssetData* CurrentMediaAssetData;
    
public:
    UAkMediaAsset();
};

