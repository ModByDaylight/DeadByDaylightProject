#pragma once
#include "CoreMinimal.h"
#include "LobbyLevel.h"
#include "UObject/NoExportTypes.h"
#include "OnlineLobbyLevel.generated.h"

class UProceduralGenerationData;
class ADisplayStand;

UCLASS()
class DEADBYDAYLIGHT_API AOnlineLobbyLevel : public ALobbyLevel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UProceduralGenerationData* ProceduralGenerationData;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> _onlineLobbySlasherPOVTrackerOffsets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TWeakObjectPtr<ADisplayStand>> _onlineLobbyCamperDisplayStands;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TWeakObjectPtr<ADisplayStand>> _onlineLobbySlasherDisplayStands;
    
public:
    AOnlineLobbyLevel();
};

