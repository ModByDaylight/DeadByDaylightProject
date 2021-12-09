#pragma once
#include "CoreMinimal.h"
#include "AkGameObject.h"
#include "AkRoomComponent.generated.h"

class UAkRoomComponent;

UCLASS()
class AKAUDIO_API UAkRoomComponent : public UAkGameObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnable: 1;
    
    UPROPERTY(Export, Transient)
    UAkRoomComponent* NextLowerPriorityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AuxSendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay)
    bool AutoPost;
    
    UAkRoomComponent();
};

