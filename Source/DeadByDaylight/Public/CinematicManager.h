#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Cinematic.h"
#include "CinematicManager.generated.h"

UCLASS(BlueprintType)
class UCinematicManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FCinematic> _cinematicQueue;
    
public:
    UCinematicManager();
    UFUNCTION(BlueprintCallable)
    void PlaySingle(const FCinematic& cinematic);
    
    UFUNCTION(BlueprintCallable)
    void PlayMultiple(const TArray<FCinematic>& cinematics);
    
    UFUNCTION(BlueprintPure)
    bool HasCinematicToPlay() const;
    
    UFUNCTION(BlueprintCallable)
    FCinematic GetNextCinematicToPlay();
    
    UFUNCTION(BlueprintCallable)
    void CancelAllCinematicToPlay();
    
};

