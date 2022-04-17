#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "SourceBasedOutlineUpdateStrategy.generated.h"

class UObject;
class ADBDPlayer;
class AActor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USourceBasedOutlineUpdateStrategy : public UOutlineUpdateStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _defaultColorForSurvivor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _defaultColorForSlasher;
    
public:
    USourceBasedOutlineUpdateStrategy();
    UFUNCTION(BlueprintCallable)
    void ResetReveal();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRevealSource(const UObject* source);
    
    UFUNCTION(BlueprintCallable)
    void ChangeDefaultColorForSurvivor(const FLinearColor newColor);
    
    UFUNCTION(BlueprintCallable)
    void ChangeDefaultColorForSlasher(const FLinearColor newColor);
    
    UFUNCTION(BlueprintCallable)
    void AddTimedReveal(const UObject* source, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters, float duration);
    
    UFUNCTION(BlueprintCallable)
    void AddTimedAndRangedReveal(const UObject* source, const AActor* sourceActor, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters, float duration, float range);
    
    UFUNCTION(BlueprintCallable)
    void AddReveal(const UObject* source, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters);
    
    UFUNCTION(BlueprintCallable)
    void AddRangedReveal(const UObject* source, const AActor* sourceActor, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters, float range);
    
};

