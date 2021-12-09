#include "MapActorDB.h"

class AActor;

TArray<AActor*> UMapActorDB::GetUniqueRandom(const TArray<EMapActorCategory>& categories, int32 count) const {
    return TArray<AActor*>();
}

AActor* UMapActorDB::GetRandom(EMapActorCategory category) const {
    return NULL;
}

TArray<EMapActorCategory> UMapActorDB::CopyListMinusCategories(const TArray<EMapActorCategory>& Categories, const TArray<EMapActorCategory>& categoriesToRemove) const {
    return TArray<EMapActorCategory>();
}

UMapActorDB::UMapActorDB() {
}

