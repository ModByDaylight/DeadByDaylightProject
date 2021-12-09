#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LoadingImages.h"
#include "LoadingImagesDataProvider.generated.h"

class UDynamicContentHolder;

UCLASS()
class DYNAMICCONTENT_API ULoadingImagesDataProvider : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FName, FLoadingImages> _cachedLoadingImages;
    
    UPROPERTY(Transient)
    UDynamicContentHolder* _owningDynamicContentHolder;
    
public:
    ULoadingImagesDataProvider();
};

