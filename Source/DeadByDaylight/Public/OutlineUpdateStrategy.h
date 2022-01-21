#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OutlineUpdateStrategy.generated.h"

class UDBDOutlineComponent;

UCLASS(Abstract, BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UOutlineUpdateStrategy : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UDBDOutlineComponent* _outlineComponent;
    
public:
    UOutlineUpdateStrategy();
};

