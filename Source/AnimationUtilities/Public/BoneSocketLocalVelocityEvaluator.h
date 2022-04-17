#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "BoneSocketLocalVelocityEvaluator.generated.h"

class USkeletalMeshComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API UBoneSocketLocalVelocityEvaluator : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* _meshComponent;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> _trackedBoneSocketNames;
    
public:
    UBoneSocketLocalVelocityEvaluator();
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FVector GetLocalVelocity(const FName boneSocketName) const;
    
};

