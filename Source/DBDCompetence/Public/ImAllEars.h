#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "ImAllEars.generated.h"

UCLASS()
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
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnCamperLoudNoise(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);
    
public:
    UImAllEars();
};

