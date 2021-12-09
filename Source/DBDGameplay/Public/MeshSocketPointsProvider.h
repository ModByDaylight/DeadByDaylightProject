#pragma once
#include "CoreMinimal.h"
#include "PointsProvider.h"
#include "Engine/EngineTypes.h"
#include "MeshSocketPointsProvider.generated.h"

class UMeshComponent;

UCLASS(EditInlineNew)
class DBDGAMEPLAY_API UMeshSocketPointsProvider : public UPointsProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FComponentReference _meshReference;
    
    UPROPERTY(Export, Transient)
    UMeshComponent* _mesh;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> _sockets;
    
public:
    UMeshSocketPointsProvider();
};

