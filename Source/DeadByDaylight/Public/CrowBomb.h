#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GeneratorDrivenActor.h"
#include "CrowBomb.generated.h"

class UWorldRunawayMeshComponent;
class USceneComponent;

UCLASS()
class DEADBYDAYLIGHT_API ACrowBomb : public AGeneratorDrivenActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _innerRadius;
    
    UPROPERTY(EditAnywhere)
    float _outerRadius;
    
    UPROPERTY(EditAnywhere)
    float _maxTakeoffDelay;
    
    UPROPERTY(EditAnywhere)
    int32 _numCrows;
    
    UPROPERTY(EditAnywhere)
    int32 _crowCenterDistance;
    
    UPROPERTY(EditAnywhere)
    int32 _crowOuterDistance;
    
    UPROPERTY(EditAnywhere)
    int32 _eliminationSamples;
    
    UPROPERTY(EditAnywhere)
    float _eliminationStddev;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UWorldRunawayMeshComponent> _meshComponentClass;
    
    UPROPERTY(Export, Replicated, Transient)
    TArray<UWorldRunawayMeshComponent*> _crows;
    
    UPROPERTY(Export)
    USceneComponent* _root;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* _traceStart;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* _traceEnd;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool _landed;
    
public:
    ACrowBomb();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TriggerTakeOff(FVector triggerLocation);
    
    UFUNCTION(BlueprintCallable)
    void TriggerLand();
    
};

