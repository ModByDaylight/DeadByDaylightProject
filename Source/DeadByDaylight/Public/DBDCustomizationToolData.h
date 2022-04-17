#pragma once
#include "CoreMinimal.h"
#include "CustomizationItemData.h"
#include "DBDCustomizationToolData.generated.h"

class UTexture2D;
class USkeletalMesh;
class UAnimationAsset;

USTRUCT(BlueprintType)
struct FDBDCustomizationToolData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCustomizationItemData Head;
    
    UPROPERTY(EditAnywhere)
    FCustomizationItemData Torso;
    
    UPROPERTY(EditAnywhere)
    FCustomizationItemData Leg;
    
    UPROPERTY(EditAnywhere)
    FCustomizationItemData Bodies;
    
    UPROPERTY(EditAnywhere)
    FString CharacterName;
    
    UPROPERTY(EditAnywhere)
    FString RoleName;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* BaseSkeleton;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* MaskTexture;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* AnimationToPlay;
    
    UPROPERTY(EditAnywhere)
    FString StrHeadDLC;
    
    UPROPERTY(EditAnywhere)
    FString StrTorsoDLC;
    
    UPROPERTY(EditAnywhere)
    FString StrLegDLC;
    
    UPROPERTY(EditAnywhere)
    FString StrBodiesDLC;
    
    DEADBYDAYLIGHT_API FDBDCustomizationToolData();
};

