#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StruggleSkillCheck.h"
#include "ESkillCheckCustomType.h"
#include "StruggleComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UStruggleComponent : public UActorComponent, public IStruggleSkillCheck {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    int32 _skillCheckCount;
    
public:
    UStruggleComponent();
private:
    UFUNCTION()
    void OnSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type);
    
    UFUNCTION()
    void Local_TryActivateSkillCheck();
    
    
    // Fix for true pure virtual functions not being implemented
};

