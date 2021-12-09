#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemType.h"
#include "EStatusEffectType.h"
#include "GameplayNotificationData.generated.h"

USTRUCT(BlueprintType)
struct FGameplayNotificationData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInventoryItemType SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SourceIconIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SourceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString EffectIconFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStatusEffectType EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText EffectDisplayName;
    
public:
    DEADBYDAYLIGHT_API FGameplayNotificationData();
};

