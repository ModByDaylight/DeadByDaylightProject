#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDTextDesignTunables.generated.h"

UCLASS(BlueprintType, Transient, Config=Design)
class DEADBYDAYLIGHT_API UDBDTextDesignTunables : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString CreditsHtml;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FText LegalTextTitle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FText LegalText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FText ConsentTextTitle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FText ConsentText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FText LegalTextSIEA;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FText LegalTextSIEE;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FText SystemMessage_ChatDisconnected;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FText SystemMessage_ChatReturnedToLobby;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FText SystemMessage_ChatMatchServerClosed;
    
    UDBDTextDesignTunables();
};

