#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EItemRarity.h"
#include "CoreBaseLoadoutPartWidget.generated.h"

class UDBDImage;
class UTexture2D;
class UTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreBaseLoadoutPartWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDImage* ImageRarity;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDImage* ImageIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextStackCount;
    
    UFUNCTION(BlueprintCallable)
    void SetLoadoutStackCount(int32 stackCount);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadoutPartRarity(EItemRarity rarity);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadoutPartIcon(TSoftObjectPtr<UTexture2D> icon);
    
public:
    UCoreBaseLoadoutPartWidget();
};

