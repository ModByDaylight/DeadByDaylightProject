#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AssetLibrary.generated.h"

class UObjectLibrary;

UCLASS(Config=Game)
class UAssetLibrary : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UObjectLibrary* _objectLibrary;
    
    UPROPERTY(Config)
    float SecondsDelayBetweenBatch;
    
public:
    UAssetLibrary();
};

