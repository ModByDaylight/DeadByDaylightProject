#pragma once
#include "CoreMinimal.h"
#include "SlasherAttackPickerComponent.h"
#include "NurseAttackPicker.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UNurseAttackPicker : public USlasherAttackPickerComponent {
    GENERATED_BODY()
public:
    UNurseAttackPicker();
};

