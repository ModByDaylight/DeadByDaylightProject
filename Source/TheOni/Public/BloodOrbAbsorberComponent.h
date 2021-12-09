#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "BloodOrbAbsorberComponent.generated.h"

class ABloodOrb;
class UBloodOrbDropperComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed, ABloodOrb*, bloodOrb);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBloodOrbAbsorberComponentOnIsAbsorbingChanged, bool, isAbsorbing);

UCLASS(BlueprintType)
class THEONI_API UBloodOrbAbsorberComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed Authority_OnBloodOrbAbsorbed;
    
    UPROPERTY(BlueprintAssignable)
    FBloodOrbAbsorberComponentOnIsAbsorbingChanged OnIsAbsorbingChanged;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FVector AbsorbLocationOffset;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UBloodOrbDropperComponent*> _camperBloodOrbDropperComponents;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInAbsorbMode(const bool inAbsorptionMode);
    
    UFUNCTION(BlueprintPure)
    bool IsInAbsorbMode() const;
    
    UBloodOrbAbsorberComponent();
};

