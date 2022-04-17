#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PresenterGroup.generated.h"

class UContextObserver;
class UFocusHandler;
class UPawnObserver;
class URootContainer;

UCLASS(Abstract)
class DBDUIPRESENTERS_API APresenterGroup : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UContextObserver* ContextObserver;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFocusHandler* FocusHandler;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnObserver* PawnObserver;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    URootContainer* RootContainer;
    
public:
    APresenterGroup();
};

