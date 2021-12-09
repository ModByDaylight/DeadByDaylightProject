#pragma once
#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "HillbillyOverheatPresentationItemProgressComponent.generated.h"

class UHillbillyChainsawOverheatComponent;

UCLASS(BlueprintType)
class THEHILLBILLY_API UHillbillyOverheatPresentationItemProgressComponent : public UPresentationItemProgressComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UHillbillyChainsawOverheatComponent* _hillbillyChainsawOverheatComponent;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHillbillyChainsawOverheatComponent(UHillbillyChainsawOverheatComponent* hillbillyChainsawOverheatComponent);
    
    UHillbillyOverheatPresentationItemProgressComponent();
};

