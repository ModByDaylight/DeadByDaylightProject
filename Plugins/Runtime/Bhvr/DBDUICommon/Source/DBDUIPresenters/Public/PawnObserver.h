#pragma once
#include "CoreMinimal.h"
#include "UIComponent.h"
#include "PawnObserver.generated.h"

class APawn;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API UPawnObserver : public UUIComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    APawn* _pawn;
    
public:
    UPawnObserver();
    UFUNCTION()
    void OnLocallyObservedChanged();
    
};

