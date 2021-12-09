#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HexPerk.h"
#include "HexPentimento.generated.h"

class ATotem;
class URekindleTotemInteraction;

UCLASS()
class THEK26_API UHexPentimento : public UHexPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSet<FName> _statusEffectNames;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<URekindleTotemInteraction> _rekindleInteractionClass;
    
    UPROPERTY(Transient)
    TArray<ATotem*> _blockedTotems;
    
public:
    UHexPentimento();
};

