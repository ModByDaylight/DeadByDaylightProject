#pragma once
#include "CoreMinimal.h"
#include "UMGTallyListElementWidget.h"
#include "UMGTallyCharacterProgressionWidget.generated.h"

class UUMGTallyCharacterProgressionBar;
class UTextBlock;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyCharacterProgressionWidget : public UUMGTallyListElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyCharacterProgressionBar* CharacterProgressionBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextCharacterCurrentExperience;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextExperienceForNextLevel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextExperienceEarned;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextCurrentLevel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CharacterPicture;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PrestigeIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextCharacterName;
    
    UPROPERTY(EditAnywhere)
    int32 ExperiencePerSecond;
    
public:
    UUMGTallyCharacterProgressionWidget();
    UFUNCTION(BlueprintCallable)
    void StartSequence();
    
private:
    UFUNCTION()
    void StartNewLevel();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWidgetToFinalState();
    
private:
    UFUNCTION()
    void OnFullBarOut();
    
    UFUNCTION()
    void OnFullBarIn();
    
};

