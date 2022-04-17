#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Lunar2022EventComponent.generated.h"

class ARedEnvelope;
class ADBDPlayerState;

UCLASS(meta=(BlueprintSpawnableComponent))
class LUNAR2022_API ULunar2022EventComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ARedEnvelope>> _redEnvelopes;
    
public:
    ULunar2022EventComponent();
private:
    UFUNCTION()
    void Authority_OnPlayerFinishPlaying(const ADBDPlayerState* playerState);
    
    UFUNCTION()
    void Authority_OnIntroComplete();
    
};

