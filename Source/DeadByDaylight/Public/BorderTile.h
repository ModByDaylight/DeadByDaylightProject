#pragma once
#include "CoreMinimal.h"
#include "Tile.h"
#include "BorderElements.h"
#include "BorderTile.generated.h"

class UMapData;

UCLASS()
class ABorderTile : public ATile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBorderElements> Borders;
    
private:
    UPROPERTY()
    UMapData* _map;
    
public:
    ABorderTile();
};

