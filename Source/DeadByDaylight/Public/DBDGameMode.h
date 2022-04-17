#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnPlayersLoadoutsCreatedDelegate.h"
#include "DBDBaseMatchGameMode.h"
#include "EGameState.h"
#include "DBDGameMode.generated.h"

class APlayerController;
class APlayerStart;
class APlayerState;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDGameMode : public ADBDBaseMatchGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FOnPlayersLoadoutsCreated OnPlayersLoadoutsCreated;
    
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
    ADBDGameMode();
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
    
};

