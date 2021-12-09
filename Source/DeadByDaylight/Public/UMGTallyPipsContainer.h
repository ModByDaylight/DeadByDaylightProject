#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Layout/Margin.h"
#include "UMGTallyPipsContainer.generated.h"

class UHorizontalBox;
class UUMGTallyPip;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyPipsContainer : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* PipsContainer;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UUMGTallyPip>> _pipsClasses;
    
    UPROPERTY(EditAnywhere)
    FMargin _pipsPadding;
    
    UPROPERTY(Export, Transient)
    TArray<UUMGTallyPip*> Pips;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetData(int32 rank, int32 pipsRequiredForNextRank, int32 filledPips);
    
    UUMGTallyPipsContainer();
};

