#pragma once
#include "CoreMinimal.h"
#include "AffectedMaterialAndVariant.h"
#include "DBDLocatorComponent.h"
#include "DBDClipRegionComponent.generated.h"

class UDBDClipRegionComponent;
class UMeshComponent;
class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDClipRegionComponent : public UDBDLocatorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAffectedMaterialAndVariant> AffectedMaterialsAndVariants;
    
public:
    UDBDClipRegionComponent();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyShouldClipComponent(UMeshComponent* InMeshComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    float ClipDistance(UMeshComponent* InMeshComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyClipToDynamicMaterial(UMaterialInstanceDynamic* dynamicInstanceToClip, int32 InRegionID);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyClip(UMaterialInstanceDynamic* InMaterial2clip, int32 InRegionID);
    
public:
    UFUNCTION(BlueprintCallable)
    static void ApplyArrayOfClipsToDynamicMaterial(TArray<UDBDClipRegionComponent*> InRegions, UMaterialInstanceDynamic* dynamicInstanceToClip);
    
};

