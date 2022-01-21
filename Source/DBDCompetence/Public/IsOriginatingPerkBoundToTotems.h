#pragma once
#include "CoreMinimal.h"
#include "EComparisonOperation.h"
#include "EventDrivenModifierCondition.h"
#include "IsOriginatingPerkBoundToTotems.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsOriginatingPerkBoundToTotems : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, Replicated)
    EComparisonOperation _comparisonOperator;
    
    UPROPERTY(EditDefaultsOnly, ReplicatedUsing=OnRep_TotemCount)
    int32 _totemCount;
    
public:
    UIsOriginatingPerkBoundToTotems();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_TotemCount();
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(EComparisonOperation comparisonOperator, int32 totemCount);
    
};

