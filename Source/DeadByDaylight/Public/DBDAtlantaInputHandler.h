#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDBaseInputHandler.h"
#include "DBDAtlantaInputHandler.generated.h"

UCLASS(BlueprintType)
class UDBDAtlantaInputHandler : public UDBDBaseInputHandler {
    GENERATED_BODY()
public:
    UDBDAtlantaInputHandler();
    UFUNCTION(BlueprintCallable)
    void SetVirtualJoystickCenter(const int32 controlIndex, FVector2D controlCenter);
    
    UFUNCTION(BlueprintPure)
    FVector2D GetVirtualJoystickVisualSize(const int32 controlIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetVirtualJoystickVisualCenter(const int32 controlIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetVirtualJoystickPosition(const int32 controlIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetVirtualJoystickNormalizedOffset(const int32 controlIndex) const;
    
};

