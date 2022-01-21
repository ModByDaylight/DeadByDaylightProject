#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDProjectileUtilities.generated.h"

class UAuthoritativeActorPoolComponent;
class UObject;
class UAuthoritativePoolProjectileProviderAdapter;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDProjectileUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDProjectileUtilities();
    UFUNCTION(BlueprintCallable)
    static UAuthoritativePoolProjectileProviderAdapter* CreateProjectilePoolAdapter(UObject* outer, UAuthoritativeActorPoolComponent* pool);
    
};

