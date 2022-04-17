#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YawAndPitchRotator_NetQuantize16.h"
#include "UObject/NoExportTypes.h"
#include "DBDPlayerData.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDPlayerData : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemUseButtonStateChanged, bool, isPressed);
    
    UPROPERTY(BlueprintAssignable)
    FOnItemUseButtonStateChanged OnItemUseButtonStateChanged;
    
private:
    UPROPERTY(Replicated)
    FYawAndPitchRotator_NetQuantize16 _controlRotation;
    
public:
    UDBDPlayerData();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void SetRenderingFeaturesCompleted();
    
    UFUNCTION()
    void SetLoadoutSpawned();
    
    UFUNCTION()
    void SetIntroCompleted();
    
    UFUNCTION()
    void SetCampaignDataSynced();
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIntroCompleted();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RenderingFeaturesCompleted();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_LoadoutSpawned();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_CampaignDataSynced();
    
public:
    UFUNCTION()
    bool IsLoadoutSpawned() const;
    
    UFUNCTION()
    bool IsIntroCompleted();
    
    UFUNCTION()
    bool IsCampaignDataSynced() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUseInputPressed() const;
    
    UFUNCTION(BlueprintPure)
    bool GetLeftRightInputMashed() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInteractionInputMashed() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetControlRotation() const;
    
    UFUNCTION()
    bool DidRenderingFeaturesComplete() const;
    
};

