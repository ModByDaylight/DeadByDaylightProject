#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HISMMaterialHelperComponent -FallbackName=HISMMaterialHelperComponent
#include "PlayerOverlapHISMComponent.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerOverlapHISMComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _playerInfluenceRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> _playerOverlapOverrides;
    
public:
    UPlayerOverlapHISMComponent();
};

