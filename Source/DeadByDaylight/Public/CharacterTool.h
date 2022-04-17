#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "CharacterToolData.h"
#include "NamedButton.h"
#include "CharacterTool.generated.h"

class ABaseSky;
class ATargetPoint;
class UAnimInstance;
class ADBDMenuPlayer;

UCLASS()
class ACharacterTool : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<ATargetPoint*> SpawnLocations;
    
private:
    UPROPERTY(EditAnywhere)
    FCharacterToolData _customizationData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimInstance> _animInstanceClass;
    
    UPROPERTY(EditAnywhere)
    bool _animated;
    
    UPROPERTY(EditAnywhere)
    bool UseInGameSkeleton;
    
    UPROPERTY(EditAnywhere)
    bool _showPower;
    
    UPROPERTY(EditAnywhere)
    bool _useMasterPoseForItems;
    
    UPROPERTY(EditAnywhere)
    FName _powerSocket;
    
    UPROPERTY(EditAnywhere)
    EAttachmentRule _powerAttachmentRule;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ABaseSky> _overallLightingClass;
    
    UPROPERTY(EditAnywhere)
    FNamedButton _showHelp;
    
    UPROPERTY()
    TArray<ADBDMenuPlayer*> _characters;
    
    UPROPERTY()
    AActor* _lighting;
    
public:
    ACharacterTool();
};

