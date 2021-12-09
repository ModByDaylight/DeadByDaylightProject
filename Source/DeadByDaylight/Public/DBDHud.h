#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDHud.generated.h"

class AStatusView;
class AActor;

UCLASS()
class UDBDHud : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FName, AStatusView*> _statusViews;
    
    UFUNCTION()
    void RemoveStatusViewOnDestroy(AActor* actor);
    
public:
    UDBDHud();
};

