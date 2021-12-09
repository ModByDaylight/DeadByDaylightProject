#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "CharacterCameraTag.h"
#include "ShopCameraManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AShopCameraManager : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FCharacterCameraTag> CatalogCharactersCamera;
    
    UPROPERTY(EditAnywhere)
    TArray<FCharacterCameraTag> StoryCharactersCamera;
    
public:
    AShopCameraManager();
};

