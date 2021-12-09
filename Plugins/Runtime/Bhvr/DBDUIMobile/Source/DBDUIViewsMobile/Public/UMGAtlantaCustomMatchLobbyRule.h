#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaCustomMatchLobbyRule.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaCustomMatchLobbyRule : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* RuleName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* OptionName;
    
public:
    UUMGAtlantaCustomMatchLobbyRule();
};

