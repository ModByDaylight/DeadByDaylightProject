#pragma once
#include "CoreMinimal.h"
#include "LobbyLevel.h"
#include "UObject/NoExportTypes.h"
#include "EOfflineLobbyState.h"
#include "OfflineLobbyLevel.generated.h"

class ATargetPoint;
class APlayerStart;
class ADisplayStand;
class ACharm;
class ADBDMenuSilhouette;
class AMenuMeatHook;
class ADBDMenuPlayer;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API AOfflineLobbyLevel : public ALobbyLevel {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector _partyLobbyInviteButtonOffset;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<TWeakObjectPtr<APlayerStart>> _roleSelectionCamperSpawns;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TWeakObjectPtr<APlayerStart>> _roleSelectionSlasherSpawns;
    
    UPROPERTY(EditDefaultsOnly)
    TWeakObjectPtr<ADisplayStand> _offlineLobbyLocalSlasherSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    FVector _partyLobbyEmptySlotFxOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TWeakObjectPtr<ADisplayStand> _offlineLobbyLocalCamperSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> _partyLobbySlasherPOVTrackerOffsets;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<ADBDMenuSilhouette> _partyLobbyEmptySlotSilhouette;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TWeakObjectPtr<ADisplayStand>> _partyLobbySlasherDisplayStands;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TWeakObjectPtr<ADisplayStand>> _partyLobbyCamperDisplayStands;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AMenuMeatHook> _meatHookForCustomization;
    
    UPROPERTY(EditDefaultsOnly)
    TWeakObjectPtr<ATargetPoint> _meatHookSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<ACharm> _charmForCustomizationZoom;
    
    UPROPERTY(EditDefaultsOnly)
    TWeakObjectPtr<ATargetPoint> _camperCharmSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    TWeakObjectPtr<ATargetPoint> _slasherCharmSpawn;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<ADisplayStand>, TWeakObjectPtr<ADBDMenuSilhouette>> _partyLobbyEmptySlotPawns;
    
    UPROPERTY(Transient)
    TArray<ADBDMenuPlayer*> _destroyingPawns;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStateChanged(EOfflineLobbyState lobbyState);
    
protected:
    UFUNCTION()
    void CheckDestroyingPawns(AActor* DestroyedActor);
    
public:
    AOfflineLobbyLevel();
};

