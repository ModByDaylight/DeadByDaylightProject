#pragma once
#include "CoreMinimal.h"
#include "GeneratedLevelData.h"
#include "GameFramework/Actor.h"
#include "EKillerMoodInfluence.h"
#include "ProceduralLevelData.generated.h"

class UPaperTileMap;

UCLASS()
class DEADBYDAYLIGHT_API AProceduralLevelData : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UPaperTileMap> SelectedPaperMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 GenerationSeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EKillerMoodInfluence LevelMood;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGeneratedLevelData GeneratedData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> Offerings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PerksLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> Perks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SkipGameplayElementGeneration;
    
private:
    UPROPERTY(Transient)
    AActor* _builder;
    
    UPROPERTY(Transient)
    UClass* _builderClassDef;
    
public:
    AProceduralLevelData();
};

