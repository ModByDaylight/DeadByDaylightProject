#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "AITypes.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "PurpleGlyphComponent.generated.h"

class UBloodTrailSettings;
class UTileSpawnPoint;
class UNavigationQueryFilter;
class ADBDPlayer;
class AGlyph;

UCLASS(Blueprintable)
class UPurpleGlyphComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UTileSpawnPoint*> _survivorSpawns;
    
    UPROPERTY(Transient)
    FAIMoveRequest MoveRequest;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> _navFilter;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _auraRevealDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _nextLocationDistanceMinimum;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _nextLocationDistanceMaximum;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _movementAcceptanceRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _distanceToAccelerate;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _distanceToDecelerate;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor outlineColor;
    
    UPROPERTY(EditAnywhere)
    UBloodTrailSettings* _bloodTrailSettings;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopGlyphMovement(bool useDeceleration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartGlyphMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResumeGlyphMovement(bool useAcceleration);
    
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
public:
    UFUNCTION(BlueprintCallable)
    ADBDPlayer* GetTrackedPlayer();
    
protected:
    UFUNCTION(BlueprintPure)
    AGlyph* GetOwningGlyph() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Authority_StartMoveWithAcceleration(const FVector& goalLocation);
    
    UFUNCTION(BlueprintCallable)
    void Authority_MoveTo(FVector location);
    
private:
    UFUNCTION(BlueprintCallable)
    FVector Authority_GetNextLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    void Authority_AbortMoveWithDeceleration();
    
    UFUNCTION(BlueprintCallable)
    void Authority_AbortMove();
    
    UPurpleGlyphComponent();
};

