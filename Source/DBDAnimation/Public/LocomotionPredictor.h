#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FootBoneData.h"
#include "LocomotionPredictor.generated.h"

class UAnimSequence;

UCLASS()
class DBDANIMATION_API ULocomotionPredictor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<UAnimSequence*, FFootBoneData> _animFootData;
    
public:
    ULocomotionPredictor();
};

