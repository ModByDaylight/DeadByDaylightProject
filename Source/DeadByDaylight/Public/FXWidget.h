#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FXWidgetPlayer.h"
#include "FXWidget.generated.h"

class UNiagaraSystem;
class UNiagaraComponent;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UFXWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* _niagaraSystem;
    
private:
    UPROPERTY(Transient)
    FFXWidgetPlayer _particlePlayer;
    
public:
    UFXWidget();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure=false)
    void StopParticle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure=false)
    void PlayParticle(float startAtTime, int32 numLoopsToPlay) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    UNiagaraComponent* GetNiagaraFX();
    
};

