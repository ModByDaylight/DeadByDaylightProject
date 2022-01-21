#pragma once
#include "CoreMinimal.h"
#include "AccessKey.h"
#include "UObject/Object.h"
#include "AccessKeys.generated.h"

UCLASS(Config=Game)
class UAccessKeys : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    TArray<FAccessKey> AccessKeys;
    
public:
    UAccessKeys();
};

