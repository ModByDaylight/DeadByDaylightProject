#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIDisplayDebugInterface.h"
#include "AIPathValidatorInterface.h"
#include "PathStrategy.generated.h"

class UPathBuilder;
class ADBDAIBTController;

UCLASS(EditInlineNew)
class DBDBOTS_API UPathStrategy : public UObject, public IAIDisplayDebugInterface, public IAIPathValidatorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, Export)
    TArray<UPathBuilder*> DefaultPathBuilders;
    
    UPROPERTY(EditDefaultsOnly)
    float RefreshPartialPathDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float StartNextBranchBuildDelay;
    
protected:
    UPROPERTY(Transient)
    ADBDAIBTController* _aiOwner;
    
    UPROPERTY(Transient)
    TArray<UPathBuilder*> _pathBuilders;
    
public:
    UPathStrategy();
    
    // Fix for true pure virtual functions not being implemented
};

