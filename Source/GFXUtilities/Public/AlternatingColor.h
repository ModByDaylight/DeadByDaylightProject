#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AlternatingColor.generated.h"

UCLASS()
class UAlternatingColor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor FirstColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor SecondColor;
    
    UPROPERTY(EditDefaultsOnly)
    float ColorChangePeriod;
    
public:
    UAlternatingColor();
};

