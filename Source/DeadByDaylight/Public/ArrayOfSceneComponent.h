#pragma once
#include "CoreMinimal.h"
#include "ArrayOfSceneComponent.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FArrayOfSceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<USceneComponent*> sceneComp;
    
    DEADBYDAYLIGHT_API FArrayOfSceneComponent();
};

