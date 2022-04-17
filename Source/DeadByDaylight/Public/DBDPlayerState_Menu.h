#pragma once
#include "CoreMinimal.h"
#include "DBDPlayerState.h"
#include "EPlayerRole.h"
#include "CharmIdSlot.h"
#include "ELoadoutSlot.h"
#include "DBDPlayerState_Menu.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayerState_Menu : public ADBDPlayerState {
    GENERATED_BODY()
public:
    ADBDPlayerState_Menu();
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetSelectedCharacterCustomizationMesh(EPlayerRole forRole, int32 id, const TArray<FName>& customizationItemIds);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetSelectedCharacterCustomizationCharms(EPlayerRole forRole, int32 id, const TArray<FCharmIdSlot>& customizationCharms);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetEquipment(ELoadoutSlot slot, FName itemId, bool callOnRep);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetSelectedCharacterCustomizationMesh(EPlayerRole forRole, int32 id, const TArray<FName>& customizationItemIds);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetSelectedCharacterCustomizationCharms(EPlayerRole forRole, int32 id, const TArray<FCharmIdSlot>& customizationCharms);
    
};

