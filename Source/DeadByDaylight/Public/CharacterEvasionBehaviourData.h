#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "CharacterEvasionBehaviourData.generated.h"

class AActor;

UCLASS(BlueprintType)
class UCharacterEvasionBehaviourData : public UAICharacterBehaviourData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* _hunter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> _escapePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _minEscapeDist;
    
public:
    UCharacterEvasionBehaviourData();
    UFUNCTION(BlueprintCallable)
    void Init(AActor* hunter, TArray<AActor*> escapePoints, float minEscapeDist);
    
};

