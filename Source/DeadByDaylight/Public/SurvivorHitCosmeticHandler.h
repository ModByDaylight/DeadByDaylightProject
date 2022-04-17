#pragma once
#include "CoreMinimal.h"
#include "BaseReversibleInstantActionHandler.h"
#include "AnimationMontageDescriptor.h"
#include "SurvivorHitCosmeticHandler.generated.h"

class UNiagaraComponent;

UCLASS()
class USurvivorHitCosmeticHandler : public UBaseReversibleInstantActionHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UNiagaraComponent* _bloodSpurts;
    
public:
    USurvivorHitCosmeticHandler();
private:
    UFUNCTION()
    void OnMontageStarted(const FAnimationMontageDescriptor animMontageID, const float playRate);
    
};

