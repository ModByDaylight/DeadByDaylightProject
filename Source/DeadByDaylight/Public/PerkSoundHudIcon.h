#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "PerkSoundHudIcon.generated.h"

UCLASS(Abstract, EditInlineNew)
class UPerkSoundHudIcon : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName PerkID;
    
    UPerkSoundHudIcon();
    UFUNCTION()
    void ClearPerk();
    
    UFUNCTION()
    void ActivatePerk(float percentage);
    
};

