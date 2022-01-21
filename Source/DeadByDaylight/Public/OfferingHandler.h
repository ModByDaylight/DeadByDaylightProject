#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OfferingHandler.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UOfferingHandler : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
    UPROPERTY(Replicated, Transient)
    TArray<FName> _levelPerkIDs;
    
public:
    UOfferingHandler();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

