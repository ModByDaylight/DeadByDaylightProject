#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProgressionPoints.h"
#include "Engine/DataTable.h"
#include "DBDEmblem.generated.h"

UCLASS(BlueprintType)
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
    
private:
    UFUNCTION(Client, Reliable)
    void Client_FinalizeReplication(const float points, const TArray<FProgressionPoints>& progressionPoints);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UDBDEmblem();
};

