#pragma once
#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "EFindInteractableLockerStatusFilter.h"
#include "BTService_FindInteractor_Locker.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_Locker : public UBTService_FindInteractor {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EFindInteractableLockerStatusFilter StatusFilter;
    
    UBTService_FindInteractor_Locker();
};

