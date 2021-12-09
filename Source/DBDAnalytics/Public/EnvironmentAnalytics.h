#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EnvironmentAnalytics.generated.h"

USTRUCT()
struct FEnvironmentAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Environment;
    
    UPROPERTY()
    FString Endpoint;
    
    UPROPERTY()
    FString Language;
    
    UPROPERTY()
    FString SelectedCountry;
    
    UPROPERTY()
    FString Timezone;
    
    UPROPERTY()
    FString DeviceProfile;
    
    UPROPERTY()
    FString GpuAdapter;
    
    UPROPERTY()
    FString GpuProviderName;
    
    UPROPERTY()
    FString GpuDriverVersion;
    
    UPROPERTY()
    FString Cpu;
    
    UPROPERTY()
    int32 QualitySetting;
    
    UPROPERTY()
    bool IsFullScreen;
    
    UPROPERTY()
    bool IsAutomaticResolution;
    
    UPROPERTY()
    int32 ScreenResolutionSetting;
    
    UPROPERTY()
    int32 EngineResolutionX;
    
    UPROPERTY()
    int32 EngineResolutionY;
    
    UPROPERTY()
    FString Provider;
    
    UPROPERTY()
    FString Device;
    
    UPROPERTY()
    FString OperatingSystem;
    
    UPROPERTY()
    FString KrakenVersion;
    
    UPROPERTY()
    FString ContentVersion;
    
    UPROPERTY()
    bool IsUsingKeyboard;
    
    UPROPERTY()
    FString ControllerType;
    
    DBDANALYTICS_API FEnvironmentAnalytics();
};

