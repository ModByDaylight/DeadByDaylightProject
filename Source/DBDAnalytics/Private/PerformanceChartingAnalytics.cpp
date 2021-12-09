#include "PerformanceChartingAnalytics.h"

FPerformanceChartingAnalytics::FPerformanceChartingAnalytics() {
    this->tile_spawn_count = 0;
    this->seed = 0;
    this->graphics_quality_level = 0;
    this->target_30_fps = 0.00f;
    this->target_60_fps = 0.00f;
    this->target_120_fps = 0.00f;
    this->measured_perf_time = 0.00f;
    this->mvp = 0.00f;
    this->avg_fps = 0.00f;
    this->hitches_per_minute = 0.00f;
    this->avg_hitch = 0.00f;
    this->frame_time_avg = 0.00f;
    this->frame_time_max = 0.00f;
    this->frame_time_min = 0.00f;
    this->game_thread_avg = 0.00f;
    this->game_thread_hitches_per_min = 0.00f;
    this->game_thread_bound_frames = 0.00f;
    this->render_thread_avg = 0.00f;
    this->render_thread_hitches_per_min = 0.00f;
    this->render_thread_bound_frames = 0.00f;
    this->rhi_thread_avg = 0.00f;
    this->rhi_thread_hitches_per_min = 0.00f;
    this->rhi_thread_bound_frames = 0.00f;
    this->gpu_avg = 0.00f;
    this->gpu_hitches_per_min = 0.00f;
    this->gpu_bound_frames = 0.00f;
    this->draw_calls_avg = 0.00f;
    this->draw_calls_max = 0.00f;
    this->draw_calls_min = 0.00f;
    this->drawn_prims_avg = 0.00f;
    this->drawn_prims_max = 0.00f;
    this->drawn_prims_min = 0.00f;
    this->cpu_memory_peak = 0.00f;
    this->cpu_memory_used = 0.00f;
    this->streaming_memory_peak = 0.00f;
    this->streaming_memory_used = 0.00f;
    this->physical_memory_peak = 0.00f;
    this->physical_memory_used = 0.00f;
}

