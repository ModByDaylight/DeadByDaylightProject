#pragma once
#include "CoreMinimal.h"
#include "EditorCollectionMetadata.h"
#include "GameplayTagContainer.h"
#include "EditorAnimCollectionDisplay.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONUTILITIES_API FEditorAnimCollectionDisplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TMap<FGameplayTag, FEditorCollectionMetadata> _taggedAnimSequencesMetadata;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FGameplayTag, FEditorCollectionMetadata> _taggedAnimBlendspacesMetadata;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FGameplayTag, FEditorCollectionMetadata> _taggedAnimSelectorsMetadata;
    
    FEditorAnimCollectionDisplay();
};

