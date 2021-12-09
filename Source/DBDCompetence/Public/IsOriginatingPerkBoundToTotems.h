#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "EComparisonOperation.h"
#include "IsOriginatingPerkBoundToTotems.generated.h"

UCLASS()
class DBDCOMPETENCE_API UIsOriginatingPerkBoundToTotems : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, Replicated)
    EComparisonOperation _comparisonOperator;
    
    UPROPERTY(EditDefaultsOnly, ReplicatedUsing=OnRep_TotemCount)
    int32 _totemCount;
    
    UFUNCTION()
    void OnRep_TotemCount();
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(EComparisonOperation comparisonOperator, int32 totemCount);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UIsOriginatingPerkBoundToTotems();
};

