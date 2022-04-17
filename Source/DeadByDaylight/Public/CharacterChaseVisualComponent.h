#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorComponentChaseStartSignatureDelegate.h"
#include "ActorComponentChaseEndSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CharacterChaseVisualComponent.generated.h"

class ADBDPlayer;
class UMaterialHelperUnaffectedStaticMeshComp;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCharacterChaseVisualComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FActorComponentChaseStartSignature OnChaseStartEvent;
    
    UPROPERTY(BlueprintAssignable)
    FActorComponentChaseEndSignature OnChaseEndEvent;
    
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
    UCharacterChaseVisualComponent();
    UFUNCTION()
    void OnObservedCharacterChange(ADBDPlayer* player);
    
    UFUNCTION()
    void OnAllChaseEnd();
    
};

