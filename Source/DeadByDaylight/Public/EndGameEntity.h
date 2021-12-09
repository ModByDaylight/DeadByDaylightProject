#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndGameEntity.generated.h"

class USkeletalMeshComponent;

UCLASS()
class DEADBYDAYLIGHT_API AEndGameEntity : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, Export)
    USkeletalMeshComponent* _skeletalMeshComponent;
    
public:
    AEndGameEntity();
};

