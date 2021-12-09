#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ProceduralMap.generated.h"

USTRUCT(BlueprintType)
struct FProceduralMap : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ThemeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HookMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HookMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HookMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BookShelvesMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BookShelvesMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BookShelvesMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LivingWorldObjectsMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LivingWorldObjectsMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ThumbnailPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SortingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DlcIDString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> FixedLayoutSeed;
    
    UPROPERTY(EditAnywhere)
    bool IsInNonViolentBuild;
    
    DEADBYDAYLIGHT_API FProceduralMap();
};

