#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MovableCamera.generated.h"

class APlayerController;

UCLASS()
class GAMEPLAYUTILITIES_API AMovableCamera : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RequiresShiftModifierForInput;
    
protected:
    UPROPERTY(Transient)
    APlayerController* _playerController;
    
public:
    AMovableCamera();
};

