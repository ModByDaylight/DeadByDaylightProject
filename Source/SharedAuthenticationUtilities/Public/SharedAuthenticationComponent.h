#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "ESharedAuthenticationProvider.h"
#include "SharedAuthenticationComponent.generated.h"

class UUMGAutheticationProviderSelection;
class UUMGAuthenticationProviderSelection;
class UUserWidget;
class USharedAuthenticationMigrateComponent;

UCLASS()
class SHAREDAUTHENTICATIONUTILITIES_API USharedAuthenticationComponent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 PopupZOrder;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUMGAutheticationProviderSelection> AuthenticationProviderSelectionWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUMGAuthenticationProviderSelection> AuthenticationProviderSelectionWidgetToLoad;
    
    UPROPERTY(EditAnywhere)
    TMap<ESharedAuthenticationProvider, TSoftClassPtr<UUserWidget>> LoginBackgroundToLoadWidgetToLoadMap;
    
private:
    UPROPERTY(Transient)
    UObject* _worldContextObject;
    
    UPROPERTY(Transient)
    USharedAuthenticationMigrateComponent* _migrateComponent;
    
public:
    USharedAuthenticationComponent();
};

