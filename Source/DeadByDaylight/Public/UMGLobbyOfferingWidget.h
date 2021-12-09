#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGLobbyOfferingWidget.generated.h"

class UCanvasPanel;
class UUMGLobbyOfferingItemWidget;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLobbyOfferingWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* CanvasOffering;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGLobbyOfferingItemWidget> LobbyOfferingItemClass;
    
public:
    UUMGLobbyOfferingWidget();
};

