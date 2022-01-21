#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "DBDImage.generated.h"

class UTexture2D;

UCLASS()
class UDBDImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* DefaultImage;
    
    UDBDImage();
    UFUNCTION(BlueprintCallable)
    void SetBrushFromTextureWithDefault(UTexture2D* texture, bool matchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromSoftTextureWithDefault(TSoftObjectPtr<UTexture2D> softTexture, bool matchSize);
    
};

