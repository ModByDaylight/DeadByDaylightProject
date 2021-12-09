#include "AISkill_FindCollectable_Searchable.h"

UAISkill_FindCollectable_Searchable::UAISkill_FindCollectable_Searchable() {
    this->SearchIntervalAfterOpenSearchable = 0.50f;
    this->OpenSearchableRelevancyDuration = 3.00f;
    this->_relevantSearchable = NULL;
}

