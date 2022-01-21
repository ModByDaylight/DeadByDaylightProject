#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TerrorRadiusEmitterComponent.generated.h"

class UTerrorRadiusReceiverComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTerrorRadiusEmitterComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    float _simulatedFixedDistance;
    
private:
    UPROPERTY(VisibleAnywhere)
    bool _imitatesAudioOnly;
    
    UPROPERTY(VisibleAnywhere)
    bool _generatesChaseMusic;
    
    UPROPERTY(VisibleAnywhere)
    bool _active;
    
    UPROPERTY(VisibleAnywhere)
    bool _isFakeTerrorRadius;
    
    UPROPERTY(VisibleAnywhere)
    float _radius;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<UTerrorRadiusReceiverComponent>, bool> _receiversInTerrorRadiusMap;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<UTerrorRadiusReceiverComponent>, bool> _receiversPhysicallyInRadiusRangeMap;
    
public:
    UTerrorRadiusEmitterComponent();
    UFUNCTION(BlueprintCallable)
    void SetTerrorRadius(float radius);
    
    UFUNCTION(BlueprintCallable)
    void SetSimulatedFixedDistance(float distance);
    
    UFUNCTION(BlueprintCallable)
    void SetIsActive(bool active);
    
    UFUNCTION(BlueprintCallable)
    void SetImitatesAudioOnly(bool imitatesAudioOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetGeneratesChaseMusic(bool generatesChaseMusic);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEmitterFromList();
    
    UFUNCTION(BlueprintPure)
    bool IsInTerrorRadius(const UTerrorRadiusReceiverComponent* receiver) const;
    
    UFUNCTION(BlueprintPure)
    float GetSimulatedFixedDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsActive() const;
    
    UFUNCTION(BlueprintPure)
    bool GetImitatesAudioOnly() const;
    
    UFUNCTION(BlueprintPure)
    bool GetGeneratesChaseMusic() const;
    
};

