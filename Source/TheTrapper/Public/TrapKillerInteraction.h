#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "UObject/NoExportTypes.h"
#include "TrapKillerInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTrapKillerInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FString> _overridableInteractions;
    
    UPROPERTY(EditAnywhere)
    FRotator _caughtFootRotationOffset;
    
    UPROPERTY(EditAnywhere)
    FName _openNotifyID;
    
    UPROPERTY(EditAnywhere)
    FName _footSocketName;
    
public:
    UTrapKillerInteraction();
};

