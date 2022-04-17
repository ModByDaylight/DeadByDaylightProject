#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WhiteGlyphBasementComponent.generated.h"

class AGlyph;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UWhiteGlyphBasementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReadyForInteractionDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnReadyForInteractionDelegate OnReadyForInteraction;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float _basementGlyphInteractionCoolDownTime;
    
public:
    UWhiteGlyphBasementComponent();
protected:
    UFUNCTION(BlueprintPure)
    AGlyph* GetOwningGlyph() const;
    
};

