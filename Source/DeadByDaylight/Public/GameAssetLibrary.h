#pragma once
#include "CoreMinimal.h"
#include "AssetLibrary.h"
#include "GameAssetLibrary.generated.h"

class UDBDGameInstance;

UCLASS()
class UGameAssetLibrary : public UAssetLibrary {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
public:
    UGameAssetLibrary();
};

