#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "CharacterDreamworldComponent.generated.h"

class UObject;
class AActor;
class APostProcessUpdate;
class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterDreamworldComponentDreamStateChanged, bool, isInDreamworld, bool, locallyObservedChanged);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCharacterDreamworldComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCharacterDreamworldComponentDreamStateChanged DreamStateChanged;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> _mobileDreamworldPostProcessClass;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsInDreamworld)
    bool _isInDreamworld;
    
    UPROPERTY(Transient)
    APostProcessUpdate* _mobileDreamworldPostProcess;
    
public:
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCharacterDreamworldComponent();
};

