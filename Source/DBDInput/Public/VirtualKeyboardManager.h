#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VirtualKeyboardManager.generated.h"

class UVirtualKeyboard;

UCLASS()
class DBDINPUT_API UVirtualKeyboardManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UVirtualKeyboard* _virtualKeyboard;
    
public:
    UVirtualKeyboardManager();
};

