#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ArchivesManager.generated.h"

class UArchiveVignettesContainer;
class URewardTrackContainer;
class UArchiveStoriesContainer;

UCLASS()
class DEADBYDAYLIGHT_API UArchivesManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UArchiveStoriesContainer* _storiesContainer;
    
    UPROPERTY(Transient)
    UArchiveVignettesContainer* _vignettesContainer;
    
    UPROPERTY(Transient)
    URewardTrackContainer* _rewardTrackContainer;
    
public:
    UArchivesManager();
};

