#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "WhiteGlyphSpawnerComponent.generated.h"

class AGlyph;
class UTileSpawnPoint;
class UWhiteGlyphSurfaceComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UWhiteGlyphSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AGlyph> _surfaceGlyphClass;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _minDistanceFromBasement;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _maxDistanceFromBasement;
    
    UPROPERTY(EditDefaultsOnly)
    float _spawnDistanceDebug;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _surfaceGlyphCoolDownTime;
    
    UPROPERTY(Export, Transient)
    UWhiteGlyphSurfaceComponent* _lastSurfaceGlyphComponentDebug;
    
    UPROPERTY(Export, Transient)
    TArray<UTileSpawnPoint*> _spawnPointsCollection;
    
public:
    UWhiteGlyphSpawnerComponent();
protected:
    UFUNCTION(BlueprintPure)
    AGlyph* GetOwningGlyph() const;
    
private:
    UFUNCTION()
    void Authority_OnLevelReadyToPlay();
    
};

