#pragma once
#include "CoreMinimal.h"
#include "PlayerAnimInstance.h"
#include "BaseKillerAnimInstance.generated.h"

class ASlasherPlayer;

UCLASS(NonTransient)
class DBDANIMATION_API UBaseKillerAnimInstance : public UPlayerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    ASlasherPlayer* _owningKiller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _firstPersonView;
    
public:
    UBaseKillerAnimInstance();
protected:
    UFUNCTION(BlueprintPure)
    ASlasherPlayer* GetOwningKiller() const;
    
private:
    UFUNCTION(Exec)
    void DBD_ForceAnimPOV(const int32 animPOV);
    
};

