#pragma once
#include "CoreMinimal.h"
#include "LegalMenuScreen.h"
#include "LegalMenuScreenUMG.generated.h"

class UUMGAtlantaLegalMenuScreen;

UCLASS()
class ULegalMenuScreenUMG : public ULegalMenuScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UUMGAtlantaLegalMenuScreen* _atlLegalMenuScreen;
    
public:
    ULegalMenuScreenUMG();
private:
    UFUNCTION()
    void OnLegalMenuButtonClick(bool isAccept);
    
};

