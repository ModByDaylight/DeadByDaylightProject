#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "ElevensSodaAddon.generated.h"

class AGenerator;

UCLASS()
class UElevensSodaAddon : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_UnhighlightGenerator(const AGenerator* generator) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_HighlightGenerator(const AGenerator* generator) const;
    
public:
    UElevensSodaAddon();
};

