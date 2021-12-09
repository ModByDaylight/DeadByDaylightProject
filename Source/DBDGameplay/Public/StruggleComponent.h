#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StruggleSkillCheck.h"
#include "ESkillCheckCustomType.h"
#include "StruggleComponent.generated.h"

UCLASS()
class DBDGAMEPLAY_API UStruggleComponent : public UActorComponent, public IStruggleSkillCheck {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    int32 _skillCheckCount;
    
    UFUNCTION()
    void OnSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type);
    
    UFUNCTION()
    void Local_TryActivateSkillCheck();
    
public:
    UStruggleComponent();
};

