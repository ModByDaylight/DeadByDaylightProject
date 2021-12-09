#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "CustomizationBaseAnalytics.generated.h"

USTRUCT()
struct FCustomizationBaseAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CustomizationSlot1;
    
    UPROPERTY()
    FString CustomizationSlot2;
    
    UPROPERTY()
    FString CustomizationSlot3;
    
    UPROPERTY()
    FString Charm1;
    
    UPROPERTY()
    FString Charm2;
    
    UPROPERTY()
    FString Charm3;
    
    UPROPERTY()
    EPlayerRole Role;
    
    DBDANALYTICS_API FCustomizationBaseAnalytics();
};

