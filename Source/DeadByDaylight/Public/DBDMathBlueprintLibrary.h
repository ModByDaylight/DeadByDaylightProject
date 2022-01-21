#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DBDMathBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDMathBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDMathBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static bool VectorIntersect(const FVector& OriginA, const FVector& ExtentA, const FVector& OriginB, const FVector& ExtentB);
    
    UFUNCTION(BlueprintPure)
    static FVector VectorAbsoluteValue(const FVector& A);
    
    UFUNCTION(BlueprintPure)
    static TArray<FLinearColor> TransformToMatrix(const FTransform& A);
    
};

