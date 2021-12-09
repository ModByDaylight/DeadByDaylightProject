#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "UObject/NoExportTypes.h"
#include "RedStainComponent.generated.h"

UCLASS(EditInlineNew)
class URedStainComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FLinearColor _initialSpotLightColor;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateRedStain(bool shouldBeHidden, const float alpha);
    
    UFUNCTION(Exec)
    void DBD_HideRedStain(const bool hideStain);
    
    URedStainComponent();
};

