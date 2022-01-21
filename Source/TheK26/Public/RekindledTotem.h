#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "UObject/NoExportTypes.h"
#include "ETotemState.h"
#include "Engine/EngineTypes.h"
#include "RekindledTotem.generated.h"

class AActor;
class USourceBasedOutlineUpdateStrategy;
class UDBDOutlineComponent;
class ATotem;

UCLASS()
class THEK26_API ARekindledTotem : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _auraColor;
    
    UPROPERTY(Export, VisibleAnywhere)
    USourceBasedOutlineUpdateStrategy* _outlineStrategy;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDBDOutlineComponent* _outlineComponent;
    
public:
    ARekindledTotem();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RebuildTotem(ATotem* totem);
    
private:
    UFUNCTION()
    void OnParentTotemEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_ShowShadowTotem(bool instant);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_HideShadowTotem(bool instant);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CleanseTotem(ATotem* totem, const ETotemState oldTotemState);
    
};

