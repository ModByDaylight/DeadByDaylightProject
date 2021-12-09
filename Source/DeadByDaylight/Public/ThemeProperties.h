#pragma once
#include "CoreMinimal.h"
#include "EThemeColorId.h"
#include "EOfferingEffectType.h"
#include "GameplayElementSubstitutions.h"
#include "ThemeProperties.generated.h"

class UAkAudioBank;
class UBlackboardData;

USTRUCT(BlueprintType)
struct FThemeProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Weather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AudioStateThemes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AudioStateWeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AudioThemeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAkAudioBank> AudioThemeSoundBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString TilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MapPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ThemeNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EThemeColorId ThemeColorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOfferingEffectType ThemeSelectionOfferingEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayElementSubstitutions> SubstitutionElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DlcIDString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlackboardData* Blackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Gesture;
    
    DEADBYDAYLIGHT_API FThemeProperties();
};

