#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "S3CommandErrorAnalytics.generated.h"

USTRUCT()
struct FS3CommandErrorAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString URL;
    
    UPROPERTY()
    FString Verb;
    
    UPROPERTY()
    int32 ResponseCode;
    
    UPROPERTY()
    bool InvalidRequest;
    
    UPROPERTY()
    bool InvalidResponse;
    
    UPROPERTY()
    bool DecryptionFailure;
    
    UPROPERTY()
    bool BadResponse;
    
    UPROPERTY()
    bool ContentModifiedError;
    
    DBDANALYTICS_API FS3CommandErrorAnalytics();
};

