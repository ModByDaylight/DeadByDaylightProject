#include "PerformanceAnalytics.h"

FPerformanceAnalytics::FPerformanceAnalytics() {
    this->AverageFPS = 0.00f;
    this->MinFPS = 0.00f;
    this->MaxFPS = 0.00f;
    this->AverageFrameTime = 0.00f;
    this->MinFrameTime = 0.00f;
    this->MaxFrameTime = 0.00f;
    this->StandardDeviationFrameTime = 0.00f;
    this->PercentBelow60msFrameTime = 0.00f;
    this->PercentBelow47msFrameTime = 0.00f;
    this->PercentBelow34msFrameTime = 0.00f;
    this->PercentBelow17msFrameTime = 0.00f;
    this->PercentHitchesFrameTime = 0.00f;
    this->AverageRenderThreadTime = 0.00f;
    this->MinRenderThreadTime = 0.00f;
    this->MaxRenderThreadTime = 0.00f;
    this->StandardDeviationRenderThreadTime = 0.00f;
    this->PercentBelow60msRenderThreadTime = 0.00f;
    this->PercentBelow47msRenderThreadTime = 0.00f;
    this->PercentBelow34msRenderThreadTime = 0.00f;
    this->PercentBelow17msRenderThreadTime = 0.00f;
    this->PercentHitchesRenderThreadTime = 0.00f;
    this->AverageGameThreadTime = 0.00f;
    this->MinGameThreadTime = 0.00f;
    this->MaxGameThreadTime = 0.00f;
    this->StandardDeviationGameThreadTime = 0.00f;
    this->PercentBelow60msGameThreadTime = 0.00f;
    this->PercentBelow47msGameThreadTime = 0.00f;
    this->PercentBelow34msGameThreadTime = 0.00f;
    this->PercentBelow17msGameThreadTime = 0.00f;
    this->PercentHitchesGameThreadTime = 0.00f;
    this->AverageRhiThreadTime = 0.00f;
    this->MinRhiThreadTime = 0.00f;
    this->MaxRhiThreadTime = 0.00f;
    this->StandardDeviationRhiThreadTime = 0.00f;
    this->PercentBelow60msRhiThreadTime = 0.00f;
    this->PercentBelow47msRhiThreadTime = 0.00f;
    this->PercentBelow34msRhiThreadTime = 0.00f;
    this->PercentBelow17msRhiThreadTime = 0.00f;
    this->PercentHitchesRhiThreadTime = 0.00f;
    this->AverageGpuTime = 0.00f;
    this->MinGpuTime = 0.00f;
    this->MaxGpuTime = 0.00f;
    this->StandardDeviationGpuTime = 0.00f;
    this->PercentBelow60msGpuTime = 0.00f;
    this->PercentBelow47msGpuTime = 0.00f;
    this->PercentBelow34msGpuTime = 0.00f;
    this->PercentBelow17msGpuTime = 0.00f;
    this->PercentHitchesGpuTime = 0.00f;
    this->AverageSlateTickTime = 0.00f;
    this->AverageSlateRenderThreadTime = 0.00f;
    this->AverageSlateDrawWindowTime = 0.00f;
    this->AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture = 0.00f;
    this->AdaptiveShadowMapAverageActiveLightsPerFrame = 0.00f;
    this->AdaptiveShadowMapPercentageOfFrameCapturingTiles = 0.00f;
    this->HitchesPerMinute50ms = 0.00f;
    this->HitchesPerMinute100ms = 0.00f;
    this->HitchesPerMinute200ms = 0.00f;
    this->HitchesPerMinute400ms = 0.00f;
    this->HitchesPerMinute800ms = 0.00f;
    this->HitchesPerMinute1600ms = 0.00f;
    this->HitchesPerMinute3200ms = 0.00f;
    this->HitchesPerMinute6400ms = 0.00f;
    this->HitchesPerMinute12800ms = 0.00f;
    this->MaxMemoryUsedKilobytes = 0;
    this->DynamicResolutionScreenPercentageAvg = 0;
    this->DynamicResolutionScreenPercentageMax = 0;
    this->DynamicResolutionScreenPercentageMin = 0;
    this->MatchCount = 0;
    this->TotalFrames = 0;
    this->ResolutionQuality = 0.00f;
    this->ViewDistanceQuality = 0;
    this->AntiAliasingQuality = 0;
    this->ShadowQuality = 0;
    this->TextureQuality = 0;
    this->EffectsQuality = 0;
    this->FoliageQuality = 0;
    this->TileListCount = 0;
    this->Seed = 0;
}

