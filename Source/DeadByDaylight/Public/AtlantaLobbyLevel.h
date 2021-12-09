#pragma once
#include "CoreMinimal.h"
#include "LobbyLevel.h"
#include "Engine/EngineTypes.h"
#include "AtlantaLobbyLevel.generated.h"

class AActor;
class AAtlantaOfflineLobbyCamera;

UCLASS()
class DEADBYDAYLIGHT_API AAtlantaLobbyLevel : public ALobbyLevel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FLightingChannels ForefrontLightingChannel;
    
    UPROPERTY(EditAnywhere)
    FLightingChannels BackgroundLightingChannel;
    
    UPROPERTY(Transient)
    AAtlantaOfflineLobbyCamera* _offlineLobbyCamera;
    
    UPROPERTY(Transient)
    AActor* _roleSelectionLobbyCameraPosition;
    
    UPROPERTY(Transient)
    AActor* _characterSelectionLobbyCameraPosition;
    
    UPROPERTY(Transient)
    AActor* _loadoutSelectionLobbyCameraPosition;
    
    UFUNCTION()
    void OnFrontPawnSpawned(AActor* forefrontPawn);
    
    UFUNCTION()
    void OnBackPawnSpawned(AActor* backgroundPawn);
    
public:
    AAtlantaLobbyLevel();
};

