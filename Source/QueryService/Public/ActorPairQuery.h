#pragma once
#include "CoreMinimal.h"
#include "DistanceTrackerCase.h"
#include "ActorPairQuery.generated.h"

USTRUCT()
struct QUERYSERVICE_API FActorPairQuery {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<uint32, FDistanceTrackerCase> _distanceTrackerCases;
    
    UPROPERTY()
    uint32 _caseIndex;
    
    UPROPERTY()
    bool _usePlanarDistance;
    
public:
    FActorPairQuery();
};

