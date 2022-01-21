#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDFoliageInfo.h"
#include "DBDInstancedFoliageComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDInstancedFoliageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NextBaseId;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TMap<int32, USceneComponent*> InstanceBaseMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FDBDFoliageInfo> foliage;
    
    UDBDInstancedFoliageComponent();
};

