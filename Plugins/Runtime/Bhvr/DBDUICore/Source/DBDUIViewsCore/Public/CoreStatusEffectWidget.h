#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoreBaseHudWidget.h"
#include "StatusEffectViewInterface.h"
#include "CoreStatusEffectWidget.generated.h"

class UGridPanel;
class UCoreStatusEffectIcon;

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
    
protected:
    UFUNCTION(BlueprintPure)
    TMap<FName, UCoreStatusEffectIcon*> GetStatusEffectMap() const;
    
public:
    UCoreStatusEffectWidget();
};

