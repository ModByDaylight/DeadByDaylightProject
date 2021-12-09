#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CrowAnimInstance.generated.h"

class UWorldRunawayMeshComponent;

UCLASS(NonTransient)
class DBDANIMATION_API UCrowAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _shouldTakeOff;
    
private:
    UPROPERTY(Export, Transient)
    UWorldRunawayMeshComponent* _crow;
    
public:
    UCrowAnimInstance();
};

