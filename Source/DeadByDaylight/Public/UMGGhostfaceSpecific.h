#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGGhostfaceSpecific.generated.h"

class UImage;

UCLASS(EditInlineNew)
class UUMGGhostfaceSpecific : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* LeftLeanImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* RightLeanImage;
    
    UUMGGhostfaceSpecific();
};

