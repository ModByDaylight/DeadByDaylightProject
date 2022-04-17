#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMapActorCategory.h"
#include "MapActorComponent.generated.h"

class ADBDPlayer;
class UPrimitiveComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMapActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMapActorCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPrimitiveComponent* _mapActorCollider;
    
private:
    UPROPERTY(Transient)
    bool _detectionEnabled;
    
public:
    UMapActorComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDetectionEnabled(bool enabled);
    
    UFUNCTION(BlueprintPure)
    bool IsKnownBy(const ADBDPlayer* character) const;
    
    UFUNCTION(BlueprintPure)
    bool GetDetectionEnabled() const;
    
};

