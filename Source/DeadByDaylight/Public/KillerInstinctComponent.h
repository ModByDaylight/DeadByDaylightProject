#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomKillerInstinctData.h"
#include "UObject/NoExportTypes.h"
#include "KillerInstinctComponent.generated.h"

class UNiagaraComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerInstinctComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FCustomKillerInstinctData _defaultKillerInstinctAsset;
    
private:
    UPROPERTY(Export, Transient)
    UNiagaraComponent* _particleSystemComponent;
    
    UPROPERTY(EditAnywhere)
    FLinearColor _camperHighlightColorOverride;
    
    UPROPERTY(Transient)
    TArray<FCustomKillerInstinctData> _customKillerInstinctData;
    
    UPROPERTY(Transient)
    FCustomKillerInstinctData _currentKillerInstinctData;
    
public:
    UKillerInstinctComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void SetParticleSystem(UNiagaraComponent* particleSystemComponent);
    
private:
    UFUNCTION()
    void OnKillerLocallyObservedChanged(bool locallyObserved);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOwnerInKillerInstinctRadius() const;
    
private:
    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* GetParticleSystem();
    
};

