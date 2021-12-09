#pragma once
#include "CoreMinimal.h"
#include "TutorialNotificationData.h"
#include "AtlantaTutorialNotificationData.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FAtlantaTutorialNotificationData : public FTutorialNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UPaperSprite>> Textures;
    
    DEADBYDAYLIGHT_API FAtlantaTutorialNotificationData();
};

