#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ObjectPlacerComponent.generated.h"

class UObjectPlacementValidationStrategy;
class UObjectPlacementUpdateStrategy;
class UStaticMeshComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UObjectPlacerComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* _objectMesh;
    
    UPROPERTY(EditDefaultsOnly)
    FName _socketName;
    
    UPROPERTY(EditDefaultsOnly)
    float _indicatorOffsetY;
    
    UPROPERTY(EditDefaultsOnly)
    float _indicatorOffsetX;
    
    UPROPERTY(EditDefaultsOnly)
    FName _itemObjectId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool _showIndicator;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool _stayActiveWhileItemInUse;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool _hideIndicatorDuringAttack;
    
    UPROPERTY(EditDefaultsOnly, Instanced, NoClear)
    UObjectPlacementUpdateStrategy* _objectPlacementUpdateStrategy;
    
    UPROPERTY(EditDefaultsOnly, Instanced, NoClear)
    UObjectPlacementValidationStrategy* _objectPlacementValidationStrategy;
    
public:
    UObjectPlacerComponent();
private:
    UFUNCTION(BlueprintCallable)
    void SetObjectMesh(UStaticMeshComponent* objectMesh);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIndicatorOffsetY(float y);
    
    UFUNCTION(BlueprintCallable)
    void SetIndicatorOffsetX(float x);
    
    UFUNCTION(BlueprintCallable)
    void SetHideIndicatorDuringAttack(bool enable);
    
    UFUNCTION(BlueprintPure)
    bool IsPlacementValid() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetObjectPlacementRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetObjectPlacementLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateObjectPlacement(bool active);
    
};

