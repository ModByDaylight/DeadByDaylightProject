#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "MoveLinkPlayerInfo.h"
#include "UObject/NoExportTypes.h"
#include "NavLinkProxy_Base.generated.h"

class ADBDPlayer;
class AActor;

UCLASS(Abstract)
class DBDBOTS_API ANavLinkProxy_Base : public ANavLinkProxy {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float WaitLinkOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveOnEndPointTimeLimit;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NbMaxLinkUsers;
    
private:
    UPROPERTY(Transient)
    TMap<ADBDPlayer*, FMoveLinkPlayerInfo> _players;
    
    UPROPERTY(Transient)
    TArray<ADBDPlayer*> _linkUsedByPlayers;
    
public:
    ANavLinkProxy_Base();
private:
    UFUNCTION()
    void OnSmartLinkReachedCallback(AActor* MovingActor, const FVector& DestinationPoint);
    
public:
    UFUNCTION(BlueprintCallable)
    void AutoAdjustSmartLinkPoints();
    
};

