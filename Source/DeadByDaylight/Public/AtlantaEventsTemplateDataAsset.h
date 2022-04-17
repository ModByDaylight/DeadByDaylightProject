#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EEventsType.h"
#include "Engine/DataAsset.h"
#include "AtlantaEventsTemplateDataAsset.generated.h"

class UUMGAtlantaBaseEventsTemplate;

UCLASS()
class UAtlantaEventsTemplateDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<EEventsType, TSubclassOf<UUMGAtlantaBaseEventsTemplate>> Data;
    
public:
    UAtlantaEventsTemplateDataAsset();
};

