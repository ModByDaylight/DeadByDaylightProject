#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EPlayerRole.h"
#include "UMGTallyRankFrame.generated.h"

class UImage;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyRankFrame : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* Frame;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* Label;
    
public:
    UUMGTallyRankFrame();
    UFUNCTION(BlueprintCallable)
    void SetData(int32 rank, EPlayerRole playerRole);
    
};

