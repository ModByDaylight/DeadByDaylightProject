#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "DBDAIUtilities.generated.h"

class UNavigationPath;
class UObject;
class UActorComponent;
class AActor;
class UNavigationQueryFilter;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDAIUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
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
    
    UDBDAIUtilities();
};

