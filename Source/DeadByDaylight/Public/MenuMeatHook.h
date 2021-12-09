#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StandDisplayable.h"
#include "CharmAttachable.h"
#include "CharmIdSlot.h"
#include "MenuMeatHook.generated.h"

class UCharmSpawnerComponent;

UCLASS()
class AMenuMeatHook : public AActor, public IStandDisplayable, public ICharmAttachable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCharmSpawnerComponent* _charmSpawnerComponent;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCharmsUpdated(const TArray<FCharmIdSlot>& charmIDs);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void BeginDestroySequence_Internal();
    
public:
    AMenuMeatHook();
};

