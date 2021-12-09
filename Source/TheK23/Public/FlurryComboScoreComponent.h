#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "FlurryComboScoreComponent.generated.h"

UCLASS()
class UFlurryComboScoreComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_ComboScore)
    float _comboScore;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _timeForCombo;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _baseKnifeComboScore;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _maximumKnifeMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _fillLacerationComboScore;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _longRangeThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _closeRangeScoreMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _longRangeScoreMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> _thresholds;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> _thresholdsScoreForAudio;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> _comboScoreEvents;
    
    UFUNCTION()
    void OnRep_ComboScore() const;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFlurryComboScoreComponent();
};

