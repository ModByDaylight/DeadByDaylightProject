#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAudioCustomizationCategory.h"
#include "CustomizedAudioComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCustomizedAudioComponentOnCustomizedAudioSwitchStateChanged, EAudioCustomizationCategory, category, const FString&, switchState);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCustomizedAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCustomizedAudioComponentOnCustomizedAudioSwitchStateChanged OnCustomizedAudioSwitchStateChanged;
    
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
    UFUNCTION(BlueprintPure)
    FString GetAudioSwitchState(EAudioCustomizationCategory audioCustomizationCategory) const;
    
    UCustomizedAudioComponent();
};

