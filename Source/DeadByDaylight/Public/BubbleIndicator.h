#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BubbleIndicator.generated.h"

class UStaticMesh;

UCLASS()
class DEADBYDAYLIGHT_API ABubbleIndicator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    float _lifeTime;
    
    UPROPERTY(BlueprintReadOnly)
    bool _displayToLocallyObserved;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isInRange;
    
public:
    ABubbleIndicator();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSilhouette(UStaticMesh* staticMesh);
    
};

