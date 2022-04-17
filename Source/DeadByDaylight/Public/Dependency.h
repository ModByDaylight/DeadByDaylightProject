#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETileSpawnPointType.h"
#include "UObject/NoExportTypes.h"
#include "Dependency.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FDependency {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ETileSpawnPointType Type;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath AssetReference;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> Object;
    
    UPROPERTY(EditAnywhere)
    bool Unique;
    
    UPROPERTY(EditAnywhere)
    int32 Count;
    
public:
    FDependency();
};

