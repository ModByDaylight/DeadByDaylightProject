#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "FastTrack.generated.h"

UCLASS()
class UFastTrack : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 _tokensToAdd[3];
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnTokenCountDecreased();
    
public:
    UFastTrack();
};

