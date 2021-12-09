#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DecalCollection.generated.h"

class UDBDDecalComponent;
class UStaticMeshComponent;

UCLASS()
class DEADBYDAYLIGHT_API UDecalCollection : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UDBDDecalComponent*> _decalComponentsArray;
    
    UPROPERTY(Export, Transient)
    TSet<UDBDDecalComponent*> _activeDecalComponents;
    
    UPROPERTY(Export, Transient)
    TSet<UDBDDecalComponent*> _inactiveDecalComponents;
    
    UPROPERTY(Transient)
    TArray<bool> _DeltaZPool;
    
    UPROPERTY(Transient)
    TMap<UStaticMeshComponent*, int32> _deltaZMultipliers;
    
public:
    UDecalCollection();
};

