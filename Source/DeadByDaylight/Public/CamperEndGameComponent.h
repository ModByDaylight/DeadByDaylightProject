#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "CamperEndGameComponent.generated.h"

class AEndGameEntity;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCamperEndGameComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AEndGameEntity> _endGameEntityClass;
    
    UPROPERTY(Replicated)
    float _delayBeforeSacrifice;
    
    UPROPERTY(Replicated)
    bool _readyToBeSacrificed;
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEndGameSacrificeEnd();
    
private:
    UFUNCTION()
    void OnDelayBeforeSacrificeEnd();
    
public:
    UFUNCTION(BlueprintPure)
    bool GetSacrificedByEndGame() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCamperEndGameComponent();
};

