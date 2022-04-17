#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "DreamStateChangedDelegateDelegate.h"
#include "CharacterDreamworldComponent.generated.h"

class ADBDPlayer;
class APostProcessUpdate;
class AActor;
class UObject;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCharacterDreamworldComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDreamStateChangedDelegate DreamStateChanged;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> _mobileDreamworldPostProcessClass;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsInDreamworld)
    bool _isInDreamworld;
    
    UPROPERTY(Transient)
    APostProcessUpdate* _mobileDreamworldPostProcess;
    
public:
    UCharacterDreamworldComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool ShouldShowVignette() const;
    
private:
    UFUNCTION()
    void OnRep_IsInDreamworld(bool previous);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInDreamworld() const;
    
    UFUNCTION(BlueprintPure)
    static ADBDPlayer* GetLocallyObservedOrLocalCharacter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void FireWakeUpScoreEvent(ADBDPlayer* instigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetIsInDreamworld(bool newValue, bool isScripted);
    
};

