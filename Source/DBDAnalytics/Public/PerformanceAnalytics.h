#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PerformanceAnalytics.generated.h"

USTRUCT()
struct FPerformanceAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    float AverageFPS;
    
    UPROPERTY()
    float MinFPS;
    
    UPROPERTY()
    float MaxFPS;
    
    UPROPERTY()
    float AverageFrameTime;
    
    UPROPERTY()
    float MinFrameTime;
    
    UPROPERTY()
    float MaxFrameTime;
    
    UPROPERTY()
    float StandardDeviationFrameTime;
    
    UPROPERTY()
    float PercentBelow60msFrameTime;
    
    UPROPERTY()
    float PercentBelow47msFrameTime;
    
    UPROPERTY()
    float PercentBelow34msFrameTime;
    
    UPROPERTY()
    float PercentBelow17msFrameTime;
    
    UPROPERTY()
    float PercentHitchesFrameTime;
    
    UPROPERTY()
    float AverageRenderThreadTime;
    
    UPROPERTY()
    float MinRenderThreadTime;
    
    UPROPERTY()
    float MaxRenderThreadTime;
    
    UPROPERTY()
    float StandardDeviationRenderThreadTime;
    
    UPROPERTY()
    float PercentBelow60msRenderThreadTime;
    
    UPROPERTY()
    float PercentBelow47msRenderThreadTime;
    
    UPROPERTY()
    float PercentBelow34msRenderThreadTime;
    
    UPROPERTY()
    float PercentBelow17msRenderThreadTime;
    
    UPROPERTY()
    float PercentHitchesRenderThreadTime;
    
    UPROPERTY()
    float AverageGameThreadTime;
    
    UPROPERTY()
    float MinGameThreadTime;
    
    UPROPERTY()
    float MaxGameThreadTime;
    
    UPROPERTY()
    float StandardDeviationGameThreadTime;
    
    UPROPERTY()
    float PercentBelow60msGameThreadTime;
    
    UPROPERTY()
    float PercentBelow47msGameThreadTime;
    
    UPROPERTY()
    float PercentBelow34msGameThreadTime;
    
    UPROPERTY()
    float PercentBelow17msGameThreadTime;
    
    UPROPERTY()
    float PercentHitchesGameThreadTime;
    
    UPROPERTY()
    float AverageRhiThreadTime;
    
    UPROPERTY()
    float MinRhiThreadTime;
    
    UPROPERTY()
    float MaxRhiThreadTime;
    
    UPROPERTY()
    float StandardDeviationRhiThreadTime;
    
    UPROPERTY()
    float PercentBelow60msRhiThreadTime;
    
    UPROPERTY()
    float PercentBelow47msRhiThreadTime;
    
    UPROPERTY()
    float PercentBelow34msRhiThreadTime;
    
    UPROPERTY()
    float PercentBelow17msRhiThreadTime;
    
    UPROPERTY()
    float PercentHitchesRhiThreadTime;
    
    UPROPERTY()
    float AverageGpuTime;
    
    UPROPERTY()
    float MinGpuTime;
    
    UPROPERTY()
    float MaxGpuTime;
    
    UPROPERTY()
    float StandardDeviationGpuTime;
    
    UPROPERTY()
    float PercentBelow60msGpuTime;
    
    UPROPERTY()
    float PercentBelow47msGpuTime;
    
    UPROPERTY()
    float PercentBelow34msGpuTime;
    
    UPROPERTY()
    float PercentBelow17msGpuTime;
    
    UPROPERTY()
    float PercentHitchesGpuTime;
    
    UPROPERTY()
    float AverageSlateTickTime;
    
    UPROPERTY()
    float AverageSlateRenderThreadTime;
    
    UPROPERTY()
    float AverageSlateDrawWindowTime;
    
    UPROPERTY()
    float AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture;
    
    UPROPERTY()
    float AdaptiveShadowMapAverageActiveLightsPerFrame;
    
    UPROPERTY()
    float AdaptiveShadowMapPercentageOfFrameCapturingTiles;
    
    UPROPERTY()
    float HitchesPerMinute50ms;
    
    UPROPERTY()
    float HitchesPerMinute100ms;
    
    UPROPERTY()
    float HitchesPerMinute200ms;
    
    UPROPERTY()
    float HitchesPerMinute400ms;
    
    UPROPERTY()
    float HitchesPerMinute800ms;
    
    UPROPERTY()
    float HitchesPerMinute1600ms;
    
    UPROPERTY()
    float HitchesPerMinute3200ms;
    
    UPROPERTY()
    float HitchesPerMinute6400ms;
    
    UPROPERTY()
    float HitchesPerMinute12800ms;
    
    UPROPERTY()
    FString DeviceProfile;
    
    UPROPERTY()
    int32 MaxMemoryUsedKilobytes;
    
    UPROPERTY()
    int32 DynamicResolutionScreenPercentageAvg;
    
    UPROPERTY()
    int32 DynamicResolutionScreenPercentageMax;
    
    UPROPERTY()
    int32 DynamicResolutionScreenPercentageMin;
    
    UPROPERTY()
    int32 MatchCount;
    
    UPROPERTY()
    int32 TotalFrames;
    
    UPROPERTY()
    float ResolutionQuality;
    
    UPROPERTY()
    int32 ViewDistanceQuality;
    
    UPROPERTY()
    int32 AntiAliasingQuality;
    
    UPROPERTY()
    int32 ShadowQuality;
    
    UPROPERTY()
    int32 TextureQuality;
    
    UPROPERTY()
    int32 EffectsQuality;
    
    UPROPERTY()
    int32 FoliageQuality;
    
    UPROPERTY()
    FString Scenario;
    
    UPROPERTY()
    FString Theme;
    
    UPROPERTY()
    FString MapName;
    
    UPROPERTY()
    int32 TileListCount;
    
    UPROPERTY()
    int32 Seed;
    
    UPROPERTY()
    FString CharacterName;
    
    UPROPERTY()
    FString Cpu;
    
    UPROPERTY()
    FString GpuAdapter;
    
    UPROPERTY()
    FString MatchId;
    
    DBDANALYTICS_API FPerformanceAnalytics();
};

