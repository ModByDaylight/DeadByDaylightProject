#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GunslingerHarpoon.h"
#include "HarpoonProp.generated.h"

class USkeletalMeshComponent;

UCLASS()
class THEGUNSLINGER_API AHarpoonProp : public AActor, public IGunslingerHarpoon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    USkeletalMeshComponent* _skeletalMesh;
    
public:
    AHarpoonProp();
    
    // Fix for true pure virtual functions not being implemented
};

