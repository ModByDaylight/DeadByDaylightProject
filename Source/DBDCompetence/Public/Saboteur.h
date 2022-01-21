#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Saboteur.generated.h"

class UMeatHookOutlineUpdateStrategy;

UCLASS(meta=(BlueprintSpawnableComponent))
class USaboteur : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _cooldownDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _revealHookDistance[3];
    
    UPROPERTY(Export, Transient)
    TArray<UMeatHookOutlineUpdateStrategy*> _revealedMeatHooksOultineStrategy;
    
public:
    USaboteur();
};

