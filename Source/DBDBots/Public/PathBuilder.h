#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAITerrorLevel.h"
#include "AIDisplayDebugInterface.h"
#include "PathBuilder.generated.h"

class UNavMovePath;
class ADBDAIBTController;

UCLASS(Abstract, EditInlineNew)
class DBDBOTS_API UPathBuilder : public UObject, public IAIDisplayDebugInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float PathReachedPointRadius;
    
    UPROPERTY(EditDefaultsOnly)
    EAITerrorLevel ToleratedTerrorPressure;
    
    UPROPERTY(EditDefaultsOnly)
    bool OverridePreviousPathStrategy;
    
protected:
    UPROPERTY(Transient)
    UNavMovePath* _path;
    
    UPROPERTY(Transient)
    ADBDAIBTController* _aiOwner;
    
public:
    UPathBuilder();
    
    // Fix for true pure virtual functions not being implemented
};

