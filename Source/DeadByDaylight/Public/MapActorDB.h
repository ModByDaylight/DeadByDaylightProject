#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMapActorCategory.h"
#include "MapActorDB.generated.h"

class AActor;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UMapActorDB : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetUniqueRandom(const TArray<EMapActorCategory>& categories, int32 count) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetRandom(EMapActorCategory category) const;
    
    UFUNCTION(BlueprintPure)
    TArray<EMapActorCategory> CopyListMinusCategories(const TArray<EMapActorCategory>& Categories, const TArray<EMapActorCategory>& categoriesToRemove) const;
    
    UMapActorDB();
};

