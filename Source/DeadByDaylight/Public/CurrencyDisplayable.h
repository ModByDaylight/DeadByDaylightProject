#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECurrencyType.h"
#include "StandDisplayable.h"
#include "CurrencyDisplayable.generated.h"

class USkeletalMeshComponent;
class USkeletalMesh;

UCLASS()
class ACurrencyDisplayable : public AActor, public IStandDisplayable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TMap<ECurrencyType, USkeletalMesh*> _currencyMeshes;
    
public:
    ACurrencyDisplayable();
    UFUNCTION(BlueprintImplementableEvent)
    void FinishSpawningCurrency(ECurrencyType currencyType);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void BeginDestroySequence_Internal();
    
    
    // Fix for true pure virtual functions not being implemented
};

