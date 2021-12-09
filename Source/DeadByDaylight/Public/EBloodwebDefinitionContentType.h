#pragma once
#include "CoreMinimal.h"
#include "EBloodwebDefinitionContentType.generated.h"

UENUM()
enum class EBloodwebDefinitionContentType {
    Empty,
    Nodes,
    Paths,
    NodesAndPaths,
    NodesNoPath = 0x1,
    EBloodwebDefinitionContentType_MAX = 0x4,
};

