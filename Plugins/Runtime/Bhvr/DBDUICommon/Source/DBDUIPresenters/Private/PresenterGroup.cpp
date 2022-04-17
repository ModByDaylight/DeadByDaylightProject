#include "PresenterGroup.h"
#include "ContextObserver.h"
#include "FocusHandler.h"
#include "PawnObserver.h"
#include "RootContainer.h"

APresenterGroup::APresenterGroup() {
    this->ContextObserver = CreateDefaultSubobject<UContextObserver>(TEXT("ContextObserver"));
    this->FocusHandler = CreateDefaultSubobject<UFocusHandler>(TEXT("FocusHandler"));
    this->PawnObserver = CreateDefaultSubobject<UPawnObserver>(TEXT("PawnObserver"));
    this->RootContainer = CreateDefaultSubobject<URootContainer>(TEXT("RootContainer"));
}

