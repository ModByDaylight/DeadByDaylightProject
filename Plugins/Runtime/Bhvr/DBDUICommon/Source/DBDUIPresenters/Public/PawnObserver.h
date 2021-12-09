#pragma once
#include "CoreMinimal.h"
#include "UIComponent.h"
#include "PawnObserver.generated.h"

class APawn;

UCLASS()
class DBDUIPRESENTERS_API UPawnObserver : public UUIComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    APawn* _pawn;
    
public:
    UFUNCTION()
    void OnLocallyObservedChanged();
    
    UPawnObserver();
};

