#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPlayerRole.h"
#include "DBDCharacterUtilities.generated.h"

class ADBDBasePlayer;
class UObject;
class ADBDPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDCharacterUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDCharacterUtilities();
    UFUNCTION(BlueprintPure)
    static bool IsWilliamBillOverbeck(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheWraith(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheTwins_Sister(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheTwins_Brother(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheTwins(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheTrickster(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheTrapper(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheSpirit(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheShape(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsThePig(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheOni(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheNurse(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheNightmare(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheLegion(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheHuntress(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheHillBilly(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheHag(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheGhost(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheExecutioner(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheDoctor(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheDemogorgon(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheClown(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheCannibal(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsTheBlight(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsSteveHarrington(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsSlasherLocallyObserved(const UObject* worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsQuentinSmith(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlague(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsNeaKarlsson(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsNancyWheeler(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsMegThomas(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsLaurieStrode(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsKateDenson(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsJeffJohansen(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsJaneRomero(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsJakePark(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsInDreamworld(const ADBDPlayer* player);
    
    UFUNCTION(BlueprintPure)
    static bool IsFengMin(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsDwightFairfield(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsDavidTapp(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsDavidKing(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsClaudetteMorel(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsAshleyWilliams(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsAdamFrancis(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool IsAceVisconti(const ADBDBasePlayer* targetPlayer);
    
    UFUNCTION(BlueprintPure)
    static EPlayerRole GetLocallyObservedPlayerRole(const UObject* worldContextObject);
    
};

