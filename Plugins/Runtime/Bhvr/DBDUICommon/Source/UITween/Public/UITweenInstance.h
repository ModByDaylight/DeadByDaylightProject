#pragma once
#include "CoreMinimal.h"
#include "TweenCompletedDelegate.h"
#include "UObject/Object.h"
#include "TweenUpdatedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EEasingType.h"
#include "UITweenInstance.generated.h"

class UUITweenMaterialScalarProperties;
class UUITweenMaterialVectorProperties;
class UMaterialInstanceDynamic;
class UUITweenInstance;
class UWidget;

UCLASS(BlueprintType)
class UITWEEN_API UUITweenInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTweenCompleted TweenCompletedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FTweenUpdated TweenUpdatedDelegate;
    
protected:
    UPROPERTY(Transient)
    TArray<UUITweenMaterialScalarProperties*> _materialScalarProperties;
    
    UPROPERTY(Transient)
    TArray<UUITweenMaterialVectorProperties*> _materialVectorProperties;
    
public:
    UUITweenInstance();
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* ToTranslation(FVector2D targetValue);
    
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* ToScale(FVector2D targetValue);
    
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* ToReset();
    
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* ToOpacity(float targetValue);
    
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* ToMaterialVectorParameter(UMaterialInstanceDynamic* targetMaterialInstance, FName targetParameterName, FLinearColor targetValue);
    
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* ToMaterialScalarParameter(UMaterialInstanceDynamic* targetMaterialInstance, FName targetParameterName, float targetValue);
    
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* ToColor(FLinearColor targetValue);
    
    UFUNCTION(BlueprintPure)
    UWidget* GetTargetWidget() const;
    
    UFUNCTION(BlueprintPure)
    float GetProgress() const;
    
    UFUNCTION(BlueprintPure)
    EEasingType GetEasing() const;
    
    UFUNCTION(BlueprintPure)
    float GetDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetDelay() const;
    
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* FromTranslation(FVector2D startValue);
    
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* FromScale(FVector2D startValue);
    
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* FromOpacity(float startValue);
    
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* FromMaterialVectorParameter(UMaterialInstanceDynamic* targetMaterialInstance, FName targetParameterName, FLinearColor targetValue);
    
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* FromMaterialScalarParameter(UMaterialInstanceDynamic* targetMaterialInstance, FName targetParameterName, float targetValue);
    
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* FromColor(FLinearColor startValue);
    
    UFUNCTION(BlueprintCallable)
    UUITweenInstance* Easing(EEasingType InType);
    
    UFUNCTION(BlueprintCallable)
    void Begin();
    
};

