#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "DBDAIUtilities.generated.h"

class UActorComponent;
class AActor;
class UNavigationPath;
class UNavigationQueryFilter;
class UObject;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDAIUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDAIUtilities();
    UFUNCTION(BlueprintCallable)
    static void SetCanEverAffectNavigation(UActorComponent* component, bool affectNavigation);
    
    UFUNCTION(BlueprintCallable)
    static UNavigationPath* FindPathWithAgentRadiusToActorSynchronously(UObject* worldContextObject, const FVector& pathStart, AActor* goalActor, float agentRadius, float tetherDistance, AActor* pathfindingContext, TSubclassOf<UNavigationQueryFilter> filterClass);
    
    UFUNCTION(BlueprintCallable)
    static bool DrawDebugAIPerception();
    
    UFUNCTION(BlueprintCallable)
    static bool DrawDebugAINavigationFilter();
    
    UFUNCTION(BlueprintCallable)
    static bool DrawDebugAINavigation();
    
};

