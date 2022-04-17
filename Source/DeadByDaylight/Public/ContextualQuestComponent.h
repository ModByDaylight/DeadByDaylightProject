#pragma once
#include "CoreMinimal.h"
#include "SpecialBehaviourObjectsInfo.h"
#include "Components/ActorComponent.h"
#include "ContextualQuestComponent.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UContextualQuestComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpecialBehaviourSet, const ADBDPlayer*, dbdPlayer);
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SpecialBehaviourObjectsInfo)
    TArray<FSpecialBehaviourObjectsInfo> _specialBehaviourObjectsInfo;
    
    UPROPERTY(Transient)
    bool _isInitialized;
    
public:
    UContextualQuestComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_SpecialBehaviourObjectsInfo();
    
};

