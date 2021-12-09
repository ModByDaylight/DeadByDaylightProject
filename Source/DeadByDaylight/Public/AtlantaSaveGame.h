#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "AtlantaSaveGame.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UAtlantaSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString SaveSlotName;
    
    UPROPERTY(VisibleAnywhere)
    uint32 UserIndex;
    
    UPROPERTY(VisibleAnywhere)
    FName LastGenericLoadingImageId;
    
    UPROPERTY(VisibleAnywhere)
    FName LastSpecificLoadingImageId;
    
    UPROPERTY(VisibleAnywhere)
    bool IsLastSpecificImage;
    
    UAtlantaSaveGame();
};

