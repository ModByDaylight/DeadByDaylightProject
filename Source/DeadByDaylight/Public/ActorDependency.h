#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Dependency.h"
#include "ActorDependency.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UActorDependency : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDependency> Dependencies;
    
    UActorDependency();
};

