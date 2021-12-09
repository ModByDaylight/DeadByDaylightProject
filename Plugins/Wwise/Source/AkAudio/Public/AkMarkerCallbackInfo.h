#pragma once
#include "CoreMinimal.h"
#include "AkEventCallbackInfo.h"
#include "AkMarkerCallbackInfo.generated.h"

UCLASS()
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Identifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Position;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Label;
    
    UAkMarkerCallbackInfo();
};

