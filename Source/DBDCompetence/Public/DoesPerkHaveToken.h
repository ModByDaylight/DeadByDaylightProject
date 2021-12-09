#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "DoesPerkHaveToken.generated.h"

class UPerk;

UCLASS()
class UDoesPerkHaveToken : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_Perk)
    TWeakObjectPtr<UPerk> _perk;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPerk(UPerk* perk);
    
private:
    UFUNCTION()
    void OnRep_Perk();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UDoesPerkHaveToken();
};

