#pragma once
#include "CoreMinimal.h"
#include "LanguageMessage.generated.h"

USTRUCT()
struct FLanguageMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Language;
    
    GENERICGAMEMESSAGES_API FLanguageMessage();
};

