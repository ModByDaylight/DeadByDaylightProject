#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "OnboardingBotMatchDefinition.generated.h"

USTRUCT(BlueprintType)
struct FOnboardingBotMatchDefinition : public FDBDTableRowBaseWithId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName DefaultMapId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DefaultSurvivorId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DefaultKillerId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> DefaultBotsId;
    
    ONBOARDING_API FOnboardingBotMatchDefinition();
};

