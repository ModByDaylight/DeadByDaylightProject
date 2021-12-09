#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SharedAuthenticationMigrateComponent.generated.h"

UCLASS()
class SHAREDAUTHENTICATIONUTILITIES_API USharedAuthenticationMigrateComponent : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UObject* _worldContextObject;
    
public:
    USharedAuthenticationMigrateComponent();
};

