#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine HISMMaterialHelperComponent
#include "PlayerOverlapHISMComponent.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
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

