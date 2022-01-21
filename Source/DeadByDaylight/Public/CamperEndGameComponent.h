#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "CamperEndGameComponent.generated.h"

class AEndGameEntity;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
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
    UCamperEndGameComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnEndGameSacrificeEnd();
    
private:
    UFUNCTION()
    void OnDelayBeforeSacrificeEnd();
    
public:
    UFUNCTION(BlueprintPure)
    bool GetSacrificedByEndGame() const;
    
};

