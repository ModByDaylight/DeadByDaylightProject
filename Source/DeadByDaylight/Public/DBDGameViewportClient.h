#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "DBDGameViewportClient.generated.h"

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API UDBDGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UDBDGameViewportClient();
};

