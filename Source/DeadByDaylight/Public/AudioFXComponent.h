#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AudioFXComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UAudioFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UPrimitiveComponent* _audioAmbientDetector;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAudioAmbientDetector(UPrimitiveComponent* audioAmbientDetector);
    
private:
    UFUNCTION()
    void OnLocallyObservedChanged(bool locallyObserved);
    
    UFUNCTION()
    void OnDeafenCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Deafen(float duration);
    
    UAudioFXComponent();
};

