#pragma once
#include "CoreMinimal.h"
#include "EK25ChainAttachmentLimbType.h"
#include "EK25ChainAnchorPointDirection.h"
#include "UObject/NoExportTypes.h"
#include "K25SurvivorChainAttachmentData.generated.h"

class ACamperPlayer;

USTRUCT(BlueprintType)
struct FK25SurvivorChainAttachmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AnchorName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EK25ChainAnchorPointDirection Direction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFlexibleLimb;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EK25ChainAttachmentLimbType LimbType;
    
private:
    UPROPERTY(Transient)
    ACamperPlayer* _attachedSurvivor;
    
public:
    THEK25_API FK25SurvivorChainAttachmentData();
};

