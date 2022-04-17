#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CurrencyProgressionUIData.h"
#include "EItemRarity.h"
#include "Styling/SlateTypes.h"
#include "EProgressionType.h"
#include "ECurrencyType.h"
#include "UIDataManager.generated.h"

class UMaterialInterface;

UCLASS()
class DBDUIMANAGERS_API UUIDataManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<EItemRarity, UMaterialInterface*> RarityMaterialMap;
    
    UPROPERTY(Transient)
    TMap<FString, FTextBlockStyle> RichTextStyleMap;
    
    UPROPERTY(Transient)
    TMap<ECurrencyType, FCurrencyProgressionUIData> CurrencyUIDataMap;
    
    UPROPERTY(Transient)
    TMap<EProgressionType, FCurrencyProgressionUIData> ProgressionUIDataMap;
    
    UUIDataManager();
};

