#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreStatusEffectWidget.generated.h"

class UCoreStatusEffectIcon;
class UGridPanel;

UCLASS(EditInlineNew)
class UCoreStatusEffectWidget : public UCoreBaseHudWidget, public IStatusEffectViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, NoClear)
    int32 InactiveThreshold;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    int32 PrepooledItemAmount;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    int32 ItemsByColumn;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    float EvenColumnOffset;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSubclassOf<UCoreStatusEffectIcon> CoreStatusEffectIconClass;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGridPanel* StatusEffectContainer;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UCoreStatusEffectIcon*> _statusEffectPool;
    
    UPROPERTY(Transient)
    TArray<FName> _statusEffectOrder;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UCoreStatusEffectIcon*> _statusEffectMap;
    
public:
    UCoreStatusEffectWidget();
protected:
    UFUNCTION(BlueprintPure)
    TMap<FName, UCoreStatusEffectIcon*> GetStatusEffectMap() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

