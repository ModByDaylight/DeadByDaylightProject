#include "CurrencyDisplayable.h"
#include "Components/SkeletalMeshComponent.h"


void ACurrencyDisplayable::BeginDestroySequence_Internal_Implementation() {
}

ACurrencyDisplayable::ACurrencyDisplayable() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CurrencySkeletalMeshComponent"));
}

