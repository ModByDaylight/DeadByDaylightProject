#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "InboxMessageUIData.h"
#include "InboxScreen.generated.h"

class UUMGInboxScreen;

UCLASS()
class UInboxScreen : public UScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UUMGInboxScreen* _umgScreen;
    
    UPROPERTY(Transient)
    TArray<FInboxMessageUIData> _newsMessages;
    
    UPROPERTY(Transient)
    TArray<FInboxMessageUIData> _rewardsMessages;
    
    UPROPERTY(Transient)
    TArray<FInboxMessageUIData> _socialMessages;
    
public:
    UInboxScreen();
};

