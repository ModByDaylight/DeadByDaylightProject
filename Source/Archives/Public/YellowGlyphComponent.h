#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ESkillCheckCustomType.h"
#include "YellowGlyphComponent.generated.h"

class ADBDPlayer;
class UTileSpawnPoint;
class AGlyph;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UYellowGlyphComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ADBDPlayer* _currentlyInteractingPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    float _skillCheckDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float _skillCheckZoneLength;
    
    UPROPERTY(EditDefaultsOnly)
    float _skillCheckDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float _skillCheckAverageDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float _skillCheckDistanceVariance;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _teleportDelay;
    
    UPROPERTY(Export)
    TArray<UTileSpawnPoint*> _survivorSpawns;
    
    UPROPERTY()
    TArray<AGlyph*> _allGlyphs;
    
public:
    UYellowGlyphComponent();
private:
    UFUNCTION()
    void TriggerSkillCheck(float currentTickerLocation);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StartGlyphPreTeleportVFX();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartGlyphPostTeleportVFX();
    
private:
    UFUNCTION()
    void OnSkillCheck(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type);
    
    UFUNCTION()
    void OnLevelReadyToPlay();
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TeleportGlyph(FVector location);
    
    UFUNCTION(BlueprintPure)
    AGlyph* GetOwningGlyph() const;
    
    UFUNCTION(BlueprintCallable)
    bool Authority_TeleportGlyph(int32 maxNumberOfTries);
    
};

