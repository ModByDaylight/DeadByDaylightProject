#pragma once
#include "CoreMinimal.h"
#include "AuthenticationInfo.h"
#include "UObject/Object.h"
#include "DBDAuthentication.generated.h"

class UDBDGameInstance;

UCLASS()
class UDBDAuthentication : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FAuthenticationInfo> _localInfos;
    
    UPROPERTY(Transient)
    TArray<FAuthenticationInfo> _remoteInfos;
    
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
public:
    UDBDAuthentication();
};

