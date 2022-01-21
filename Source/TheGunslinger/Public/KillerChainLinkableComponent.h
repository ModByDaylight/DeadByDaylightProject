#pragma once
#include "CoreMinimal.h"
#include "ChainLinkableComponent.h"
#include "KillerChainLinkableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UKillerChainLinkableComponent : public UChainLinkableComponent {
    GENERATED_BODY()
public:
    UKillerChainLinkableComponent();
};

