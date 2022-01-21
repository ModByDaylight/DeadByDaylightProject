#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnInfo.h"
#include "DBDClientSyncer.generated.h"

class UPaperTileMap;

UCLASS()
class ADBDClientSyncer : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FSpawnInfo> _actorsToSpawnLocally;
    
    UPROPERTY(Transient)
    TArray<FSpawnInfo> _currentQueue;
    
    UPROPERTY(Transient)
    UPaperTileMap* _tileMap;
    
public:
    ADBDClientSyncer();
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SyncSeed(int32 seed, UPaperTileMap* tileMap, int32 generationPlayerCount, const FString& premadeMap);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SyncFinalLocallySpawnCount(int16 numLocal);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SyncActorToSpawnLocally(const TArray<FSpawnInfo>& spawnInfos, int16 startIndex);
    
};

