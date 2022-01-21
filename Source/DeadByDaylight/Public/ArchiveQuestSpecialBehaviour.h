#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "EAdditiveBehaviour.h"
#include "EContextualType.h"
#include "EOwnershipBehaviour.h"
#include "EStackingBehaviours.h"
#include "ArchiveQuestSpecialBehaviour.generated.h"

USTRUCT(BlueprintType)
struct FArchiveQuestSpecialBehaviour : public FDBDTableRowBaseWithId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EContextualType Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SpawnObjectId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAdditiveBehaviour AdditiveBehaviour;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStackingBehaviours StackableBehaviour;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOwnershipBehaviour OwnershipBehaviour;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SpawnQuantity;
    
    DEADBYDAYLIGHT_API FArchiveQuestSpecialBehaviour();
};

