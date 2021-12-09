#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodwebRarityPerRingDistribution.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebRarityPerRingDistribution : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CommonMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CommonMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CommonWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UncommonMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UncommonMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UncommonWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RareMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RareMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RareWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VeryRareMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VeryRareMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VeryRareWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UltraRareMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UltraRareMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UltraRareWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ArtefactMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ArtefactMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ArtefactWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpectralMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpectralMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpectralWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpecialEventMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpecialEventMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpecialEventWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LegendaryMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LegendaryMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LegendaryWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EpicMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EpicMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EpicWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SuperEpicMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SuperEpicMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SuperEpicWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UltraEpicMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UltraEpicMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UltraEpicWeight;
    
    DEADBYDAYLIGHT_API FBloodwebRarityPerRingDistribution();
};

