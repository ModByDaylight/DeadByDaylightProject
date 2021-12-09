#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "PlatformDlcData.generated.h"

USTRUCT(BlueprintType)
struct FPlatformDlcData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText UnlockDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 UISortOrder;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DlcIdSteam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DlcIdEpic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DlcIdDmm;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DlcIdPS4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DlcIdXB1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DlcIdXSX;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DlcIdSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DlcIdGRDK;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DlcIdPS5;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DlcIdStadia;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DlcIdMobile;
    
public:
    DEADBYDAYLIGHT_API FPlatformDlcData();
};

