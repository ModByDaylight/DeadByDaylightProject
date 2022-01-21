#include "MockPoolableActor.h"
#include "PoolableActorComponent.h"

AMockPoolableActor::AMockPoolableActor() {
    this->_poolable = CreateDefaultSubobject<UPoolableActorComponent>(TEXT("Poolable"));
}

