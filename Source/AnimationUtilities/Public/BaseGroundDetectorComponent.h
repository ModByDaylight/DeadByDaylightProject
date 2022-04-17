#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "BaseGroundDetectorComponent.generated.h"

class USkinnedMeshComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API UBaseGroundDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName _startTransformName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> _walkableCollisionChannel;
    
    UPROPERTY(EditAnywhere)
    bool _traceComplex;
    
    UPROPERTY(EditAnywhere)
    float _extraTraceDistance;
    
    UPROPERTY(Export)
    USkinnedMeshComponent* _skinnedMeshComponent;
    
    UPROPERTY(EditAnywhere)
    FName _startSlopeTransformName;
    
public:
    UBaseGroundDetectorComponent();
    UFUNCTION(BlueprintCallable)
    void InitSkinnedMeshComponent(USkinnedMeshComponent* mesh);
    
    UFUNCTION(BlueprintCallable)
    FVector GetGroundPosition(const FVector targetPos, const FVector extraOffset);
    
};

