#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInputInteractionType.h"
#include "InteractionArray.h"
#include "UObject/NoExportTypes.h"
#include "Interactable.generated.h"

class UPrimitiveComponent;
class UInteractor;
class UInterruptionDefinition;
class UInteractableTransformOptimizer;
class UInteractionDefinition;
class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API AInteractable : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UPrimitiveComponent* _singleZone;
    
    UPROPERTY(EditAnywhere)
    bool _useSingleZone;
    
    UPROPERTY(Export, Transient)
    TArray<UInteractor*> _interactors;
    
    UPROPERTY(EditAnywhere, Export)
    UInteractableTransformOptimizer* _transformOptimizer;
    
private:
    UPROPERTY(Transient)
    TMap<UPrimitiveComponent*, FInteractionArray> _zoneToInteractions;
    
public:
    AInteractable();
protected:
    UFUNCTION(BlueprintCallable)
    void SetSingleZone(UPrimitiveComponent* zone);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInteractorsUsable(bool usable, UInteractor* exception);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PreInterruptionEvent(ADBDPlayer* interruptor, ADBDPlayer* interruptee, UInterruptionDefinition* interruption);
    
protected:
    UFUNCTION()
    void OnLevelReadyToPlay_Native();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLevelReadyToPlay();
    
private:
    UFUNCTION()
    void OnInteractorLockChanged(bool locked, ADBDPlayer* interactingPlayer);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool IsInterruptionPossible(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInteractor* interactor, const UInteractionDefinition* definition, const UInterruptionDefinition* interruption) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsInteractionDone(ADBDPlayer* player, const UInteractor* interactor, const UInteractionDefinition* definition, EInputInteractionType interactionType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractingWith(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnOngoingInteraction() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetPlayerOwner() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UInteractor*> GetInteractors() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ADBDPlayer*> GetInteractingPlayersRaw() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetFocalPointPosition(const ADBDPlayer* player, const UInteractionDefinition* definition) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AuthorityRequestCancelOngoingInteractions(bool onlyOnHitCancelableInteractions);
    
    UFUNCTION(BlueprintPure)
    TArray<ADBDPlayer*> Authority_GetInteractingPlayers() const;
    
    UFUNCTION(BlueprintCallable)
    void AttachEveryInteractionToZone(UPrimitiveComponent* zone);
    
};

