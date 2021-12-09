#pragma once
#include "CoreMinimal.h"
#include "Collectable.h"
#include "LanternLightCollectable.generated.h"

class ALanternInteractable;

UCLASS()
class DEADBYDAYLIGHT_API ALanternLightCollectable : public ACollectable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    ALanternInteractable* _parentLantern;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetParentLantern(ALanternInteractable* parentLantern);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ALanternLightCollectable();
};

