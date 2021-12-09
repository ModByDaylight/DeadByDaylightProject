#pragma once
#include "CoreMinimal.h"
#include "TallyScreen.h"
#include "TallyScreenUMG.generated.h"

class UUMGAtlantaTallyScreen;

UCLASS()
class UTallyScreenUMG : public UTallyScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UUMGAtlantaTallyScreen* _atlTallyScreen;
    
public:
    UTallyScreenUMG();
};

