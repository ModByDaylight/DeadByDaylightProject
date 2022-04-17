#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "PerkLevelDefinition.h"
#include "DBDDesignTunables.generated.h"

class UDBDAtlantaDesignTunables;
class UDBDTextDesignTunables;
class UDBDCoreUMGDesignTunables;

UCLASS(BlueprintType, Transient, Config=Design)
class DEADBYDAYLIGHT_API UDBDDesignTunables : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 WinStreakThresholdLarge;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 WinStreakThresholdSmall;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 MaxFearTokens;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 QuantityOfItemsToBuyBeforeFreeBloodwebRefresh;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TArray<FPerkLevelDefinition> PerkLevelDefinitions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TSet<FGameplayTag> MetaModifiers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TSet<FGameplayTag> RangedSurvivorAuraPerceptionModifiers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TSet<FGameplayTag> SurvivorRevelatoryAuraPerceptionModifiers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TSet<FGameplayTag> DisruptableAuraReadingFlags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool ShouldUseKillerLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear)
    TSoftClassPtr<UDBDTextDesignTunables> TextDesignTunableClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UDBDTextDesignTunables* TextTunables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear)
    TSoftClassPtr<UDBDCoreUMGDesignTunables> CoreUMGDesignTunableClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UDBDCoreUMGDesignTunables* CoreUMGDesignTunables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear)
    TSoftClassPtr<UDBDAtlantaDesignTunables> AtlantaDesignTunableClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UDBDAtlantaDesignTunables* AtlantaDesignTunables;
    
    UDBDDesignTunables();
    UFUNCTION(BlueprintPure)
    float GetTunableValue(FName ID, bool warnIfRowMissing) const;
    
};

