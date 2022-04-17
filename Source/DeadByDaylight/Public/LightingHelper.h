#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LightingHelper.generated.h"

class AActor;
class ABaseSky;
class UPostProcessComponent;
class ULightingFactory;
class ULightingInterpolator;
class UTextureCube;

UCLASS(BlueprintType)
class ULightingHelper : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ABaseSky* _levelLighting;
    
    UPROPERTY(Transient)
    ABaseSky* _levelLightingFixed;
    
    UPROPERTY(Transient)
    ABaseSky* _levelLightingSpawned;
    
    UPROPERTY(Transient)
    ABaseSky* _levelLightingWithoutExposure;
    
    UPROPERTY(Transient)
    AActor* _adaptiveShadowMapControllersActor;
    
    UPROPERTY(Transient)
    ULightingInterpolator* _lightingInterpolator;
    
    UPROPERTY(Transient)
    ULightingFactory* _lightingFactory;
    
    UPROPERTY(Export, Transient)
    UPostProcessComponent* _postProcessCache;
    
    UPROPERTY(Transient)
    bool _bIsDreamworldActive;
    
public:
    ULightingHelper();
    UFUNCTION(BlueprintCallable)
    void ToggleDreamworldLighting(bool bActivateDreamworld);
    
    UFUNCTION(BlueprintCallable)
    UTextureCube* GetTextureCube(FName mapTheme);
    
    UFUNCTION(BlueprintCallable)
    UClass* GetSourceLevelLightingClass();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void DBD_ModifyExposure(float value);
    
};

