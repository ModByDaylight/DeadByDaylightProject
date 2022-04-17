#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGTallyRankBanner.generated.h"

class UUMGTallyPipsContainer;
class UUMGRankBanner;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyRankBanner : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyPipsContainer* PipsContainerWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGRankBanner* RankBanner;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* SmokeBackground;
    
public:
    UUMGTallyRankBanner();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAsLocked(bool locked);
    
};

