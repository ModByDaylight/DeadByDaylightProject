#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "K26CrowAttachmentSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UK26CrowAttachmentSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _hasCrowAttached;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isRemovingCrow;
    
public:
    UK26CrowAttachmentSubAnimInstance();
};

