#pragma once
#include "CoreMinimal.h"
#include "ECharmCategory.h"
#include "CustomizationData.h"
#include "ECustomizationCategory.h"
#include "MaterialReplacerData.h"
#include "ConditionalMaterialReplacer.h"
#include "BPAttachementSocketData.h"
#include "UnlockSaveStatCondition.h"
#include "CustomSoundFXData.h"
#include "CustomAnimData.h"
#include "CustomizationItemData.generated.h"

class UAnimInstance;
class USkeletalMesh;
class AActor;

USTRUCT()
struct DEADBYDAYLIGHT_API FCustomizationItemData : public FCustomizationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECustomizationCategory Category;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> ItemMesh;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UAnimInstance> AnimClass;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> ItemBlueprint;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaterialReplacerData> MaterialsMap;
    
    UPROPERTY(EditAnywhere)
    FConditionalMaterialReplacer ConditionalMaterialReplacer;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SkeletalComponentTags;
    
    UPROPERTY(EditAnywhere)
    FText CollectionName;
    
    UPROPERTY(EditAnywhere)
    FText CollectionDescription;
    
    UPROPERTY(EditAnywhere)
    int32 PrestigeUlockLevel;
    
    UPROPERTY()
    FString PrestigeUnlockDate;
    
    UPROPERTY(EditAnywhere)
    FName EventId;
    
    UPROPERTY(EditAnywhere)
    ECharmCategory CharmCategory;
    
    UPROPERTY(EditAnywhere)
    TArray<FBPAttachementSocketData> SocketAttachements;
    
    UPROPERTY(EditAnywhere)
    TArray<FUnlockSaveStatCondition> UnlockingConditions;
    
    UPROPERTY(EditAnywhere)
    bool IsInStore;
    
    UPROPERTY(EditAnywhere)
    bool IsInNonViolentBuild;
    
    UPROPERTY(EditAnywhere)
    bool IsAvailableInAtlantaBuild;
    
    UPROPERTY(EditAnywhere)
    uint32 PlatformExclusiveFlag;
    
    UPROPERTY(EditAnywhere)
    TArray<FCustomSoundFXData> CustomSFXs;
    
    UPROPERTY(EditAnywhere)
    FCustomAnimData AnimationData;
    
    FCustomizationItemData();
};

