#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ContentScheduleManager.generated.h"

class UObjectLibrary;

UCLASS()
class DEADBYDAYLIGHT_API UContentScheduleManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UObjectLibrary* _availableMapLibrary;
    
public:
    UContentScheduleManager();
};

