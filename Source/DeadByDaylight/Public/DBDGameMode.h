#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDBaseMatchGameMode.h"
#include "EGameState.h"
#include "DBDGameMode.generated.h"

class APlayerStart;
class APlayerController;
class APlayerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDBDGameModeOnPlayersLoadoutsCreated);

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDGameMode : public ADBDBaseMatchGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FDBDGameModeOnPlayersLoadoutsCreated OnPlayersLoadoutsCreated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSubclassOf<APlayerController> _killerPlayerControllerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSubclassOf<APlayerController> _survivorPlayerControllerClass;
    
    UPROPERTY()
    TArray<APlayerStart*> _initialPlayerStarts;
    
private:
    UPROPERTY(Config, EditAnywhere)
    int32 KillerCreationPositionOrder;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEscapeOpened(bool val);
    
    UFUNCTION()
    void RegisterOnPlayerStateChanged(APlayerState* playerState);
    
    UFUNCTION()
    void OnPlayerGameStateChanged(EGameState playerGameState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LevelLoaded(const FString& levelName);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEscapeOpen() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HostGame();
    
    UFUNCTION(Exec)
    void DBD_BlockCamperEscape(bool shouldBlock);
    
    UFUNCTION(BlueprintPure)
    bool AreLoadoutsCreated() const;
    
public:
    ADBDGameMode();
};

