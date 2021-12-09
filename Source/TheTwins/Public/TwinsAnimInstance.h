#pragma once
#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "TwinsAnimInstance.generated.h"

UCLASS(NonTransient)
class UTwinsAnimInstance : public UKillerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isDormant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _hasBrotherAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isPossessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isWakingUpFromPossess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isAutoPossessingAfterRelease;
    
public:
    UTwinsAnimInstance();
};

