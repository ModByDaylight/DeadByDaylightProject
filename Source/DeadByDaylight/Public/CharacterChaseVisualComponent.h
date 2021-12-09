#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CharacterChaseVisualComponent.generated.h"

class UMaterialHelperUnaffectedStaticMeshComp;
class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterChaseVisualComponentOnChaseStartEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterChaseVisualComponentOnChaseEndEvent);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCharacterChaseVisualComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCharacterChaseVisualComponentOnChaseStartEvent OnChaseStartEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterChaseVisualComponentOnChaseEndEvent OnChaseEndEvent;
    
private:
    UPROPERTY(Export, Transient)
    UMaterialHelperUnaffectedStaticMeshComp* _vignetteMeshComp;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector _relativeLocation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector _relativeScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRotator _relativeRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float _fovModifyFactor;
    
public:
    UFUNCTION()
    void OnObservedCharacterChange(ADBDPlayer* player);
    
    UFUNCTION()
    void OnAllChaseEnd();
    
    UCharacterChaseVisualComponent();
};

