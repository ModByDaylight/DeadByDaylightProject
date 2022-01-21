#pragma once
#include "CoreMinimal.h"
#include "GeneratorDrivenActor.h"
#include "DBDGeneratorDrivenReflectionCaptureActor.generated.h"

class UGenyReflectionCaptureComponent;

UCLASS()
class DEADBYDAYLIGHT_API ADBDGeneratorDrivenReflectionCaptureActor : public AGeneratorDrivenActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UGenyReflectionCaptureComponent* genyReflectionCapture;
    
    ADBDGeneratorDrivenReflectionCaptureActor();
    UFUNCTION(BlueprintCallable)
    void SwapToSecondState();
    
};

