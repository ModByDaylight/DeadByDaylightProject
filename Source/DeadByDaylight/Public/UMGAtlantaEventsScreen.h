#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaEventsScreen.generated.h"

class UTextBlock;
class UWrapBox;
class UUMGAtlantaEventsDescription;
class UUMGAtlantaEventsTab;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaEventsScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PageTitle;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWrapBox* WrapBox;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGAtlantaEventsDescription* DescriptionWidget;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUMGAtlantaEventsTab> EventsTabWBPReference;
    
private:
    UPROPERTY(Export)
    TArray<UUMGAtlantaEventsTab*> _eventsArray;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleEventTabClicked(const FString& id);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnCloseButtonClicked();
    
private:
    UFUNCTION()
    void BroadcastDeepLinkRequest(const FString& id);
    
public:
    UUMGAtlantaEventsScreen();
};

