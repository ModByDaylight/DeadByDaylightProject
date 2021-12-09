#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodwebProgressionValue.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebProgressionValue : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRingNodeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRingNodeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRingNodeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Common_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Common_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Uncommon_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Uncommon_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Rare_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Rare_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VeryRare_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VeryRare_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UltraRare_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UltraRare_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Artifact_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Artifact_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Spectral_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Spectral_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpecialEvent_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpecialEvent_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Legendary_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Legendary_MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRingCommonItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRingCommonItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRingCommonItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRingUncommonItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRingUncommonItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRingUncommonItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRingRareItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRingRareItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRingRareItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRingVeryRareItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRingVeryRareItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRingVeryRareItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRingUltraRareItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRingUltraRareItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRingUltraRareItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRingArtifactItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRingArtifactItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRingArtifactItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRingSpectralItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRingSpectralItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRingSpectralItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRingSpecialEventItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRingSpecialEventItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRingSpecialEventItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRingLegendaryItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRingLegendaryItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRingLegendaryItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRingEpicItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRingEpicItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRingEpicItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRingSuperEpicItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRingSuperEpicItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRingSuperEpicItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InnerRingUltraEpicItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MiddleRingUltraEpicItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OuterRingUltraEpicItemProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EntityStartingRound;
    
    DEADBYDAYLIGHT_API FBloodwebProgressionValue();
};

