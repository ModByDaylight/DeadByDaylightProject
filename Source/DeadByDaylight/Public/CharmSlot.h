#pragma once
#include "CoreMinimal.h"
#include "CharmAttacherAnimationTweak.h"
#include "CharmSlot.generated.h"

class ACharmAttacher;

USTRUCT(BlueprintType)
struct FCharmSlot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SlotIndex;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ACharmAttacher> CharmAttacherClass;
    
    UPROPERTY(EditAnywhere)
    FCharmAttacherAnimationTweak DefaultAnimationTweak;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FCharmAttacherAnimationTweak> AnimationTweakByTag;
    
    UPROPERTY(Transient)
    ACharmAttacher* CharmAttacherSpawned;
    
    DEADBYDAYLIGHT_API FCharmSlot();
};

