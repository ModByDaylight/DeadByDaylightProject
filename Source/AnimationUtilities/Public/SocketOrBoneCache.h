#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SocketOrBoneCache.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct ANIMATIONUTILITIES_API FSocketOrBoneCache {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAnimSequence> _sourceAnimation;
    
    UPROPERTY(EditAnywhere)
    FName _socketName;
    
    UPROPERTY(EditAnywhere)
    FName _notifyName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FVector _location;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FRotator _rotation;
    
public:
    FSocketOrBoneCache();
};

