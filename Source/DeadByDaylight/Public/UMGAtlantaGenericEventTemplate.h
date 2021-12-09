#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UMGAtlantaBaseEventsTemplate.h"
#include "UMGAtlantaGenericEventTemplate.generated.h"

class UUMGAtlantaEventsElement;
class UHorizontalBox;
class UUMGPromoPackItemWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaGenericEventTemplate : public UUMGAtlantaBaseEventsTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* RelatedItemsBox;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUMGAtlantaEventsElement> EventsElementWBPReference;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUMGPromoPackItemWidget> CustomizationWBPReference;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUMGPromoPackItemWidget> CharacterWBPReference;
    
public:
    UUMGAtlantaGenericEventTemplate();
};

