#pragma once
#include "CoreMinimal.h"
#include "EObsessionUIState.h"
#include "TricksterStatusData.h"
#include "DoctorStatusData.h"
#include "EPlayerStatus.h"
#include "ExecutionerStatusData.h"
#include "GhostStatusData.h"
#include "NightmareStatusData.h"
#include "PigStatusData.h"
#include "PlagueStatusData.h"
#include "TwinsStatusData.h"
#include "K24StatusData.h"
#include "K25StatusData.h"
#include "K26StatusData.h"
#include "PlayerStatusViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPlayerStatusViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    UTexture2D* PlayerPortraitIcon;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UTexture2D* PlayerPortraitIconOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerStatus PlayerStatusState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimerProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDeepWound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsLocalPlayerAKiller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EObsessionUIState ObsessionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DrainStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDoctorStatusData DoctorStatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FExecutionerStatusData ExecutionerStatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGhostStatusData GhostStatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FNightmareStatusData NightmareStatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPigStatusData PigStatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlagueStatusData PlagueStatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTwinsStatusData TwinsStatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTricksterStatusData TricksterStatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FK24StatusData K24StatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FK25StatusData K25StatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FK26StatusData K26StatusData;
    
    DBDUIVIEWINTERFACES_API FPlayerStatusViewData();
};

