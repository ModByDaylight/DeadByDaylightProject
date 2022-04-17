#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ArchiveStoriesContainer.generated.h"

class URewardTrackContainer;
class UArchiveVignettesContainer;
class UWalletHandler;

UCLASS()
class DEADBYDAYLIGHT_API UArchiveStoriesContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    URewardTrackContainer* _rewardTrackcontainer;
    
    UPROPERTY(Transient)
    UWalletHandler* _wallet;
    
    UPROPERTY(Transient)
    UArchiveVignettesContainer* _vignettesContainer;
    
public:
    UArchiveStoriesContainer();
};

