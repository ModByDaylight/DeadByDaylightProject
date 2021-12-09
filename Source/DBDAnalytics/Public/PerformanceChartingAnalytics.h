#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PerformanceChartingAnalytics.generated.h"

USTRUCT()
struct FPerformanceChartingAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString scenario;
    
    UPROPERTY()
    FString theme;
    
    UPROPERTY()
    FString map_name;
    
    UPROPERTY()
    int32 tile_spawn_count;
    
    UPROPERTY()
    int32 seed;
    
    UPROPERTY()
    FString match_id;
    
    UPROPERTY()
    FString character_name;
    
    UPROPERTY()
    FString cpu_name;
    
    UPROPERTY()
    FString gpu_name;
    
    UPROPERTY()
    FString resolution;
    
    UPROPERTY()
    int32 graphics_quality_level;
    
    UPROPERTY()
    FString hitch_times;
    
    UPROPERTY()
    float target_30_fps;
    
    UPROPERTY()
    float target_60_fps;
    
    UPROPERTY()
    float target_120_fps;
    
    UPROPERTY()
    float measured_perf_time;
    
    UPROPERTY()
    float mvp;
    
    UPROPERTY()
    float avg_fps;
    
    UPROPERTY()
    float hitches_per_minute;
    
    UPROPERTY()
    float avg_hitch;
    
    UPROPERTY()
    float frame_time_avg;
    
    UPROPERTY()
    float frame_time_max;
    
    UPROPERTY()
    float frame_time_min;
    
    UPROPERTY()
    float game_thread_avg;
    
    UPROPERTY()
    float game_thread_hitches_per_min;
    
    UPROPERTY()
    float game_thread_bound_frames;
    
    UPROPERTY()
    float render_thread_avg;
    
    UPROPERTY()
    float render_thread_hitches_per_min;
    
    UPROPERTY()
    float render_thread_bound_frames;
    
    UPROPERTY()
    float rhi_thread_avg;
    
    UPROPERTY()
    float rhi_thread_hitches_per_min;
    
    UPROPERTY()
    float rhi_thread_bound_frames;
    
    UPROPERTY()
    float gpu_avg;
    
    UPROPERTY()
    float gpu_hitches_per_min;
    
    UPROPERTY()
    float gpu_bound_frames;
    
    UPROPERTY()
    float draw_calls_avg;
    
    UPROPERTY()
    float draw_calls_max;
    
    UPROPERTY()
    float draw_calls_min;
    
    UPROPERTY()
    float drawn_prims_avg;
    
    UPROPERTY()
    float drawn_prims_max;
    
    UPROPERTY()
    float drawn_prims_min;
    
    UPROPERTY()
    float cpu_memory_peak;
    
    UPROPERTY()
    float cpu_memory_used;
    
    UPROPERTY()
    float streaming_memory_peak;
    
    UPROPERTY()
    float streaming_memory_used;
    
    UPROPERTY()
    float physical_memory_peak;
    
    UPROPERTY()
    float physical_memory_used;
    
    UPROPERTY()
    FString texturegroups_guid;
    
    DBDANALYTICS_API FPerformanceChartingAnalytics();
};

