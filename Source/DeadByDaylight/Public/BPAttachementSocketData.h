#pragma once
#include "CoreMinimal.h"
#include "MaterialReplacerData.h"
#include "ConditionalMaterialReplacer.h"
#include "BPAttachementSocketData.generated.h"

class AItemBlueprint;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FBPAttachementSocketData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AItemBlueprint> AttachementBlueprint;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaterialReplacerData> MaterialsMap;
    
    UPROPERTY(EditAnywhere)
    FConditionalMaterialReplacer ConditionalMaterialReplacer;
    
    DEADBYDAYLIGHT_API FBPAttachementSocketData();
};

