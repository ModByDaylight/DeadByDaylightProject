#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ECharacterDifficulty.h"
#include "EPlayerRole.h"
#include "CustomizedMeshPart.h"
#include "EGender.h"
#include "EKillerAbilities.h"
#include "DataTableProxy.h"
#include "EKillerHeight.h"
#include "SlideShowDescription.h"
#include "CharacterDescription.generated.h"

class UTexture2D;
class APawn;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FCharacterDescription : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CharacterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerRole Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECharacterDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText BackStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Biography;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FName IconFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* HudIcon;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FName BackgroundImagePath;
    
    UPROPERTY(EditAnywhere)
    TArray<FCustomizedMeshPart> CustomizationDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ChapterDlcId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> AdditionalDlcIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AvailableIfDlcInstalled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName IdName;
    
    UPROPERTY(EditDefaultsOnly)
    FName DebugName;
    
    UPROPERTY(EditAnywhere)
    bool IsInChunk0;
    
    UPROPERTY(EditAnywhere)
    bool IsAvailableInNonViolentBuild;
    
    UPROPERTY(EditAnywhere)
    bool IsAvailableInAtlantaBuild;
    
    UPROPERTY(EditAnywhere)
    uint32 PlatformExclusiveFlag;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<APawn> GamePawn;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<APawn> MenuPawn;
    
    UPROPERTY(EditAnywhere)
    FName DefaultItem;
    
    UPROPERTY(EditAnywhere)
    EGender Gender;
    
    UPROPERTY(EditAnywhere)
    TArray<EKillerAbilities> KillerAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableProxy TunableDB;
    
    UPROPERTY(EditAnywhere)
    EKillerHeight KillerHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlideShowDescription SlideShowDescriptions;
    
    UPROPERTY(EditAnywhere)
    bool HideStoreCustomizations;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TArray<FName> CustomizationCategories;
    
public:
    FCharacterDescription();
};

