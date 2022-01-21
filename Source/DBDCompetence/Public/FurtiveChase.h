#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "FurtiveChase.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UFurtiveChase : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    int32 _maxTokensByLevel[3];
    
    UPROPERTY(EditAnywhere)
    float _terrorRadiusSuppressionPerToken;
    
public:
    UFurtiveChase();
};

