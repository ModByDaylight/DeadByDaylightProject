#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LoopBannerProvider.generated.h"

UCLASS()
class DYNAMICCONTENT_API ULoopBannerProvider : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    int32 _currentLoopIndex;
    
public:
    ULoopBannerProvider();
};

