#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SlashableActivationSourceCollection.generated.h"

class UObject;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USlashableActivationSourceCollection : public UActorComponent {
    GENERATED_BODY()
public:
    USlashableActivationSourceCollection();
    UFUNCTION(BlueprintCallable)
    static void RemoveSource(UObject* source);
    
    UFUNCTION(BlueprintCallable)
    static void ForceActivate(const UObject* worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddSource(UObject* source);
    
};

