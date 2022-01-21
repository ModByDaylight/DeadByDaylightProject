#pragma once
#include "CoreMinimal.h"
#include "UMGBaseSideMainMenuButton.h"
#include "UMGMenuBaseBanner.generated.h"

class UImage;
class UTextBlock;
class USlateTextureAtlasInterface;
class ISlateTextureAtlasInterface;

UCLASS(Abstract, EditInlineNew)
class UUMGMenuBaseBanner : public UUMGBaseSideMainMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* BannerImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TScriptInterface<ISlateTextureAtlasInterface> DefaultBanner;
    
public:
    UUMGMenuBaseBanner();
};

