#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Camaraderie.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UCamaraderie : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _percentUseItem[3];
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _pauseTimer[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool _needItemToTrigger;
    
public:
    UCamaraderie();
private:
    UFUNCTION()
    void Authority_EnablePerk();
    
};

