#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Entity.generated.h"

class UCurveFloat;
class UMaterialHelper;
class USkeletalMeshComponent;

UCLASS()
class DEADBYDAYLIGHT_API AEntity : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _dissolveCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _revealsCurve;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UMaterialHelper* _materialHelper;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* _skeletalMesh;
    
public:
    AEntity();
};

