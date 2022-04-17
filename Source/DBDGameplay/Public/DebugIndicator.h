#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "DebugIndicator.generated.h"

class UStaticMeshComponent;
class UDBDOutlineComponent;

UCLASS()
class DBDGAMEPLAY_API ADebugIndicator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UStaticMeshComponent* _staticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UDBDOutlineComponent* _outlineComponent;
    
public:
    ADebugIndicator();
    UFUNCTION(BlueprintCallable)
    void SetVisible(const bool visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetColor(const FLinearColor color);
    
};

