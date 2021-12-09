#pragma once
#include "CoreMinimal.h"
#include "DataTableProxy.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct DATATABLEUTILITIES_API FDataTableProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UDataTable> AssetPtr;
    
private:
    UPROPERTY(Transient)
    UDataTable* _dataTable;
    
public:
    FDataTableProxy();
};

