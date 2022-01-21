#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BloodOrbAbsorbedDelegate.h"
#include "BloodOrbIsAbsorbingChangedDelegate.h"
#include "BloodOrbAbsorberComponent.generated.h"

class UBloodOrbDropperComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEONI_API UBloodOrbAbsorberComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBloodOrbAbsorbedDelegate Authority_OnBloodOrbAbsorbed;
    
    UPROPERTY(BlueprintAssignable)
    FBloodOrbIsAbsorbingChangedDelegate OnIsAbsorbingChanged;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FVector AbsorbLocationOffset;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UBloodOrbDropperComponent*> _camperBloodOrbDropperComponents;
    
public:
    UBloodOrbAbsorberComponent();
    UFUNCTION(BlueprintCallable)
    void SetInAbsorbMode(const bool inAbsorptionMode);
    
    UFUNCTION(BlueprintPure)
    bool IsInAbsorbMode() const;
    
};

