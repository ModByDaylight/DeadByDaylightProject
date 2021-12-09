#pragma once
#include "CoreMinimal.h"
#include "EPawnInputPressTypes.h"
#include "AITunableParameter.h"
#include "NavLinkInteractPlayerSetup.generated.h"

USTRUCT(BlueprintType)
struct FNavLinkInteractPlayerSetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EPawnInputPressTypes Input;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> InteractionIds;
    
    UPROPERTY(EditDefaultsOnly)
    FAITunableParameter InputTimeDeviationInChase;
    
    DBDBOTS_API FNavLinkInteractPlayerSetup();
};

