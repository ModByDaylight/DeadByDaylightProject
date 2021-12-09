#pragma once
#include "CoreMinimal.h"
#include "LoginJsonMessage.generated.h"

USTRUCT()
struct FLoginJsonMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString LoginJson;
    
    UPROPERTY(EditAnywhere)
    FString LoginType;
    
    UPROPERTY(EditAnywhere)
    FString RoleID;
    
    UPROPERTY(EditAnywhere)
    bool IsNewAccount;
    
    GENERICGAMEMESSAGES_API FLoginJsonMessage();
};

