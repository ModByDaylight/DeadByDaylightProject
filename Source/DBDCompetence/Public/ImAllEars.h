#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "ImAllEars.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UImAllEars : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, EditFixedSize)
    int32 _cooldownByLevel[3];
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    float _durationByLevel[3];
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    bool _useTerrorRadius;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    float _triggerOutsideRadius;
    
public:
    UImAllEars();
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnCamperLoudNoise(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);
    
};

