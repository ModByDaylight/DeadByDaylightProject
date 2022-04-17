#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomizedAudioChangedDelegateDelegate.h"
#include "EAudioCustomizationCategory.h"
#include "CustomizedAudioComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCustomizedAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCustomizedAudioChangedDelegate OnCustomizedAudioSwitchStateChanged;
    
private:
    UPROPERTY(EditAnywhere)
    FString AudioCharacterNameDefaultSwitchState;
    
    UPROPERTY(EditAnywhere)
    FString AudioCharacterSubNameDefaultSwitchState;
    
    UPROPERTY(EditAnywhere)
    FString AudioCharacterHeadDefaultSwitchState;
    
    UPROPERTY(EditAnywhere)
    FString AudioCharacterClothesDefaultSwitchState;
    
    UPROPERTY(EditAnywhere)
    FString AudioCharacterShoesDefaultSwitchState;
    
    UPROPERTY(EditAnywhere)
    FString AudioCharacterWeaponDefaultSwitchState;
    
    UPROPERTY(EditAnywhere)
    FString AudioCharacterAmbianceDefaultSwitchState;
    
    UPROPERTY(EditAnywhere)
    FString AudioCharacterStateDefaultSwitchState;
    
public:
    UCustomizedAudioComponent();
    UFUNCTION(BlueprintPure)
    FString GetAudioSwitchState(EAudioCustomizationCategory audioCustomizationCategory) const;
    
};

