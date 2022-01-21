#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DisciplineEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDisciplineEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _deactivationDelay;
    
public:
    UDisciplineEffect();
protected:
    UFUNCTION(BlueprintPure)
    bool ShouldShowFakeKillerStain() const;
    
};

