#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavLinkProxy_Base.h"
#include "NavLinkProxy_DirectMove.generated.h"

class ADBDPlayer;
class UNavMovePath;

UCLASS()
class DBDBOTS_API ANavLinkProxy_DirectMove : public ANavLinkProxy_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> CustomPathPoints;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveToPathPointTimeLimit;
    
private:
    UPROPERTY(Transient)
    TMap<ADBDPlayer*, UNavMovePath*> _playersOnPath;
    
public:
    ANavLinkProxy_DirectMove();
private:
    UFUNCTION()
    void OnDisplayDebugInfo();
    
};

