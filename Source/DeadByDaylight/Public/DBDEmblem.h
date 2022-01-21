#pragma once
#include "CoreMinimal.h"
#include "ProgressionPoints.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "DBDEmblem.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDEmblem : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient)
    float _points;
    
    UPROPERTY(Replicated, Transient)
    TArray<FProgressionPoints> _progressionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle _definition;
    
public:
    UDBDEmblem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Client, Reliable)
    void Client_FinalizeReplication(const float points, const TArray<FProgressionPoints>& progressionPoints);
    
};

