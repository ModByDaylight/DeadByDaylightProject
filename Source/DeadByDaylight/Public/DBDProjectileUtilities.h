#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDProjectileUtilities.generated.h"

class UAuthoritativePoolProjectileProviderAdapter;
class UObject;
class UAuthoritativeActorPoolComponent;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDProjectileUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDProjectileUtilities();
    UFUNCTION(BlueprintCallable)
    static UAuthoritativePoolProjectileProviderAdapter* CreateProjectilePoolAdapter(UObject* outer, UAuthoritativeActorPoolComponent* pool);
    
};

