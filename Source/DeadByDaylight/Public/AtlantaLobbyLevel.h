#pragma once
#include "CoreMinimal.h"
#include "LobbyLevel.h"
#include "Engine/EngineTypes.h"
#include "AtlantaLobbyLevel.generated.h"

class AAtlantaOfflineLobbyCamera;
class AActor;

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
    
public:
    AAtlantaLobbyLevel();
private:
    UFUNCTION()
    void OnFrontPawnSpawned(AActor* forefrontPawn);
    
    UFUNCTION()
    void OnBackPawnSpawned(AActor* backgroundPawn);
    
};

