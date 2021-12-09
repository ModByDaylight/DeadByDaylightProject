#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/NoExportTypes.h"
#include "VideoThumbnailProperties.generated.h"

class UMediaSource;

USTRUCT(BlueprintType)
struct FVideoThumbnailProperties : public FDBDTableRowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _id;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _hasAudio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D _size;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMediaSource> _source;
    
public:
    DEADBYDAYLIGHT_API FVideoThumbnailProperties();
};

