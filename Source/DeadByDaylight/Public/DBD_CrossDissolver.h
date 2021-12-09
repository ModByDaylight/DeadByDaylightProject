#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBD_CrossDissolver.generated.h"

class UMaterialInterface;
class USkeletalMeshComponent;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBD_CrossDissolver : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> NewMaterials;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TArray<USkeletalMeshComponent*> BaseSkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TArray<USkeletalMeshComponent*> ClonedSkeletalMeshes;
    
    UFUNCTION(BlueprintCallable)
    void MakeClone();
    
    UFUNCTION(BlueprintCallable)
    void KillClone();
    
    UDBD_CrossDissolver();
};

