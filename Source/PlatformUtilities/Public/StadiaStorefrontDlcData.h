#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "StadiaStorefrontDlcData.generated.h"

USTRUCT(BlueprintType)
struct FStadiaStorefrontDlcData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DLC_Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString General_Dlc_ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString StadiaID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString copyright;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString en_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString en_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString fr_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString fr_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString de_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString de_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString it_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString it_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString es_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString es_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString cht_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString cht_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString chs_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString chs_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString th_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString th_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString rus_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString rus_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString brapor_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString brapor_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString kor_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString kor_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString jpn_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString jpn_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString dan_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString dan_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ara_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ara_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString dut_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString dut_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString fin_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString fin_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString nor_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString nor_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString pol_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString pol_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString por_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString por_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString swe_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString swe_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString tr_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString tr_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString cfre_name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString cfre_description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString mex__latam_spanish__name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString mex__latam_spanish__description;
    
    PLATFORMUTILITIES_API FStadiaStorefrontDlcData();
};

