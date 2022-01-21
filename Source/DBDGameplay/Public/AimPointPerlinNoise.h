#pragma once
#include "CoreMinimal.h"
#include "AimPointProcessor.h"
#include "AimPointPerlinNoise.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UAimPointPerlinNoise : public UAimPointProcessor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _baseInaccuracyNoisePersistence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _baseInaccuracyNoiseOctaveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _baseInaccuracyNoiseAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _baseInaccuracyNoiseFrequency;
    
    UPROPERTY(Replicated, Transient)
    float _timeOffset;
    
public:
    UAimPointPerlinNoise();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetNoiseFrequencyMultiplier(const float multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetNoiseAmplitudeMultiplier(const float multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseInaccuracyNoisePersistence(const float noisePersistence);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseInaccuracyNoiseOctaveCount(const int32 octaveCount);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseInaccuracyNoiseFrequency(const float frequency);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseInaccuracyNoiseAmplitude(const float amplitude);
    
};

