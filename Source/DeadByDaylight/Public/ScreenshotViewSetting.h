#pragma once
#include "CoreMinimal.h"
#include "ScreenshotViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FScreenshotViewSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Distance;
    
    UPROPERTY(EditAnywhere)
    float LateralOffset;
    
    UPROPERTY(EditAnywhere)
    float HeightOffset;
    
    UPROPERTY(EditAnywhere)
    float CharacterYaw;
    
    UPROPERTY(EditAnywhere)
    float CharacterRoll;
    
    UPROPERTY(EditAnywhere)
    float CharacterPitch;
    
    UPROPERTY(EditAnywhere)
    float CameraPitch;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    DEADBYDAYLIGHT_API FScreenshotViewSetting();
};

