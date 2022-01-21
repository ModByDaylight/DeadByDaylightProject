#pragma once
#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "VaultableOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UVaultableOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool _canBeRevealedToLocalPlayer;
    
public:
    UVaultableOutlineUpdateStrategy();
    UFUNCTION(BlueprintCallable)
    void SetCanBeRevealedToLocalPlayer(bool canBeRevealedToLocalPlayer);
    
};

