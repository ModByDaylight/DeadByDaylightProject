#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBD_SoundSpawnerData.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "DBD_SoundEventSpawner.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBD_SoundEventSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDBD_SoundSpawnerData> AtlantaSoundDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDBD_SoundSpawnerData> SoundDescriptor;
    
protected:
    UPROPERTY(Transient)
    TArray<TSubclassOf<AActor>> _loadedSoundAssets;
    
public:
    ADBD_SoundEventSpawner();
protected:
    UFUNCTION()
    void OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction);
    
    UFUNCTION()
    void AssetsLoaded();
    
};

