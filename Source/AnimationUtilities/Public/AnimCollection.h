#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AnimSequenceSelector.h"
#include "AnimCollection.generated.h"

class UAnimCollection;
class UAnimSequence;
class UBlendSpaceBase;

UCLASS(BlueprintType)
class ANIMATIONUTILITIES_API UAnimCollection : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FGameplayTag, UAnimSequence*> _taggedAnimSequences;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FGameplayTag, UBlendSpaceBase*> _taggedAnimBlendspaces;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FGameplayTag, FAnimSequenceSelector> _taggedAnimSelectors;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimCollection* _parent;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UAnimCollection*> _children;
    
public:
    UAnimCollection();
};

