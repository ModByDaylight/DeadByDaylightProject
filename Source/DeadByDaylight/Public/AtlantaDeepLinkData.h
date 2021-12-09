#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EDeepLinkUid.h"
#include "AtlantaDeepLinkData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaDeepLinkData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Url;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDeepLinkUid DeepLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasCustomParameters;
    
    DEADBYDAYLIGHT_API FAtlantaDeepLinkData();
};

