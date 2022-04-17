#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EDPIScaleCurveRatio.h"
#include "EScaleType.h"
#include "UIScaleManager.generated.h"

class UCurveFloat;
class UDataTable;

UCLASS(BlueprintType)
class DBDUIMANAGERS_API UUIScaleManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDataTable* _dpiScaleCurveDB;
    
    UPROPERTY(Transient)
    UCurveFloat* _dpiScaleCurve;
    
public:
    UUIScaleManager();
    UFUNCTION(BlueprintPure)
    float GetSkillCheckScaleFactor() const;
    
    UFUNCTION(BlueprintPure)
    float GetScaleFactor(EScaleType type) const;
    
    UFUNCTION(BlueprintPure)
    float GetMenuScaleFactor() const;
    
    UFUNCTION(BlueprintPure)
    float GetHudScaleFactor() const;
    
    UFUNCTION(BlueprintCallable)
    EDPIScaleCurveRatio GetDPIScaleCurveRatio();
    
};

