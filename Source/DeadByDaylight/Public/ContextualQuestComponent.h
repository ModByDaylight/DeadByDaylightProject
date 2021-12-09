#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpecialBehaviourObjectsInfo.h"
#include "ContextualQuestComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UContextualQuestComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SpecialBehaviourObjectsInfo)
    TArray<FSpecialBehaviourObjectsInfo> _specialBehaviourObjectsInfo;
    
    UPROPERTY(Transient)
    bool _isInitialized;
    
    UFUNCTION()
    void OnRep_SpecialBehaviourObjectsInfo();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UContextualQuestComponent();
};

