#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DecalSpawner.generated.h"

class UDecalCollection;
class USpawnerStrategy;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDecalSpawner : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDecalCollection* _decalCollection;
    
    UPROPERTY(Transient)
    USpawnerStrategy* _spawnerStrategy;
    
public:
    UDecalSpawner();
    UFUNCTION(BlueprintCallable)
    USpawnerStrategy* GetSpawnerStrategy();
    
};

