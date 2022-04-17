#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_ThePig_JigsawSketch.generated.h"

class ACamperPlayer;
class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_ThePig_JigsawSketch : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<ACamperPlayer*, AGenerator*> _trackedGeneratorRepairs;
    
public:
    UAddon_ThePig_JigsawSketch();
};

