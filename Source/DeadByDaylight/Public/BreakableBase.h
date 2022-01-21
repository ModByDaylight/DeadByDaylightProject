#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "EBreakableState.h"
#include "UObject/NoExportTypes.h"
#include "BreakableBase.generated.h"

class UBoxComponent;
class UAkComponent;
class ADBDPlayer;
class UAkAudioEvent;
class USceneComponent;

UCLASS(Abstract)
class DEADBYDAYLIGHT_API ABreakableBase : public AInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UBoxComponent* _breakableCollision;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EBreakableState _state;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAkComponent* _akAudioBreakable;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* _akAudioBreakEvent;
    
private:
    UPROPERTY(Export)
    USceneComponent* _rootComponent;
    
public:
    ABreakableBase();
    UFUNCTION(BlueprintCallable)
    void PlayAudioBreakable();
    
    UFUNCTION(BlueprintPure)
    bool IsUnbroken() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ExplodeVfxSfx(const FVector impulseDir);
    
public:
    UFUNCTION(BlueprintCallable)
    void Explode(ADBDPlayer* player);
    
};

