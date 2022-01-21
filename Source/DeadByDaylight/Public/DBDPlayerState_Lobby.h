#pragma once
#include "CoreMinimal.h"
#include "DBDPlayerState_Menu.h"
#include "DBDPlayerState_Lobby.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayerState_Lobby : public ADBDPlayerState_Menu {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated, Transient)
    bool IsOwnershipValidated;
    
    ADBDPlayerState_Lobby();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

