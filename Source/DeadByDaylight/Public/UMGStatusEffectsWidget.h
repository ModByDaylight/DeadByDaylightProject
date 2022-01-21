#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGStatusEffectsWidget.generated.h"

class UUMGStatusEffectIcon;
class UHorizontalBox;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGStatusEffectsWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGStatusEffectIcon> AtlantaStatusEffectIconClass;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* StatusEffectsBox;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TMap<FName, UUMGStatusEffectIcon*> _statusEffectsMap;
    
public:
    UUMGStatusEffectsWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveExistingStatusEffect(const FString& statusEffectID);
    
};

