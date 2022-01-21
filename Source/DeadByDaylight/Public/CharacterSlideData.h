#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "EPerkCategory.h"
#include "CharacterSlideData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSlideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Overview;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Playstyle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EPlayerRole Role;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString ImageFilePath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<EPerkCategory> SurvivorPerkCategories;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString KillerPowerIconPath;
    
    DEADBYDAYLIGHT_API FCharacterSlideData();
};

