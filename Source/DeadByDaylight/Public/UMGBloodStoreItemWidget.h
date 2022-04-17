#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBloodwebNodeContentType.h"
#include "MobileBaseUserWidget.h"
#include "UMGBloodStoreItemWidget.generated.h"

class UImage;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGBloodStoreItemWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* NodeImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* BackgroundImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* RarityBackground;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ItemPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* MysteryBoxPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* MysteryBoxRarityBackground;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* CollectedPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ConsumedPanel;
    
    UPROPERTY(BlueprintReadOnly)
    EBloodwebNodeContentType _contentType;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isMysteryBox;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D _bigItemScale;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D _normalItemScale;
    
    UPROPERTY(EditDefaultsOnly)
    float _consumedOpacity;
    
public:
    UUMGBloodStoreItemWidget();
    UFUNCTION(BlueprintNativeEvent)
    void UnFocusNode();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSelectedVisibilities(bool isSelected);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetBackgroundImages();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void PlayConsumedAnimation(const bool skipIntro);
    
    UFUNCTION(BlueprintNativeEvent)
    void FocusNode();
    
    UFUNCTION(BlueprintNativeEvent)
    void ConsumeNode();
    
    UFUNCTION(BlueprintNativeEvent)
    void CollectNode();
    
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastBloodNodeSelected();
    
};

