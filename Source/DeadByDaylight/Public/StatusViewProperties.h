#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EStatusEffectType.h"
#include "StatusViewProperties.generated.h"

class UTexture2D;
class AStatusView;

USTRUCT(BlueprintType)
struct FStatusViewProperties : public FDBDTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StatusViewID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AStatusView> StatusViewBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStatusEffectType StatusType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString IconFilePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> IconAsset;
    
public:
    DEADBYDAYLIGHT_API FStatusViewProperties();
};

