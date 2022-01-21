#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AICharacterBehaviour.generated.h"

UCLASS()
class UAICharacterBehaviour : public UObject {
    GENERATED_BODY()
public:
    UAICharacterBehaviour();
    UFUNCTION()
    void Update(float deltaTime);
    
    UFUNCTION()
    void Stop();
    
    UFUNCTION()
    void Start();
    
    UFUNCTION()
    void SetEnable(bool enable);
    
    UFUNCTION()
    void Resume();
    
    UFUNCTION()
    void Pause();
    
    UFUNCTION()
    bool IsEnabled() const;
    
};

