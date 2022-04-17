#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ECurrencyType.h"
#include "SpecialEventObjectiveData.h"
#include "SpecialEventCinematicData.h"
#include "UObject/NoExportTypes.h"
#include "ESpecialEventDependency.h"
#include "SpecialEventEntryPopupData.h"
#include "ESpecialEventGameMode.h"
#include "SpecialEventData.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FSpecialEventData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EventId;
    
    UPROPERTY(EditAnywhere)
    ECurrencyType CurrencyType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText EventName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString EventBannerLabel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsTrackedOnline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseSpecialEventLoadingScreen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpecialEventObjectiveData> Objectives;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor ObjectOutlineColour;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LobbyName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ShopName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AudioStateSpecialEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UActorComponent> GameplayPlayerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UActorComponent> GameplayStateComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpecialEventCinematicData> Cinematics;
    
    UPROPERTY(EditAnywhere)
    ESpecialEventGameMode GameMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseEventEntryScreen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSpecialEventEntryPopupData EventEntryData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESpecialEventDependency EventDependency;
    
    DEADBYDAYLIGHT_API FSpecialEventData();
};

