#include "UITweenInstance.h"

class UMaterialInstanceDynamic;
class UUITweenInstance;
class UWidget;

UUITweenInstance* UUITweenInstance::ToTranslation(FVector2D targetValue) {
    return NULL;
}

UUITweenInstance* UUITweenInstance::ToScale(FVector2D targetValue) {
    return NULL;
}

UUITweenInstance* UUITweenInstance::ToReset() {
    return NULL;
}

UUITweenInstance* UUITweenInstance::ToOpacity(float targetValue) {
    return NULL;
}

UUITweenInstance* UUITweenInstance::ToMaterialVectorParameter(UMaterialInstanceDynamic* targetMaterialInstance, FName targetParameterName, FLinearColor targetValue) {
    return NULL;
}

UUITweenInstance* UUITweenInstance::ToMaterialScalarParameter(UMaterialInstanceDynamic* targetMaterialInstance, FName targetParameterName, float targetValue) {
    return NULL;
}

UUITweenInstance* UUITweenInstance::ToColor(FLinearColor targetValue) {
    return NULL;
}

UWidget* UUITweenInstance::GetTargetWidget() const {
    return NULL;
}

float UUITweenInstance::GetProgress() const {
    return 0.0f;
}

EEasingType UUITweenInstance::GetEasing() const {
    return EEasingType::Linear;
}

float UUITweenInstance::GetDuration() const {
    return 0.0f;
}

float UUITweenInstance::GetDelay() const {
    return 0.0f;
}

UUITweenInstance* UUITweenInstance::FromTranslation(FVector2D startValue) {
    return NULL;
}

UUITweenInstance* UUITweenInstance::FromScale(FVector2D startValue) {
    return NULL;
}

UUITweenInstance* UUITweenInstance::FromOpacity(float startValue) {
    return NULL;
}

UUITweenInstance* UUITweenInstance::FromMaterialVectorParameter(UMaterialInstanceDynamic* targetMaterialInstance, FName targetParameterName, FLinearColor targetValue) {
    return NULL;
}

UUITweenInstance* UUITweenInstance::FromMaterialScalarParameter(UMaterialInstanceDynamic* targetMaterialInstance, FName targetParameterName, float targetValue) {
    return NULL;
}

UUITweenInstance* UUITweenInstance::FromColor(FLinearColor startValue) {
    return NULL;
}

UUITweenInstance* UUITweenInstance::Easing(EEasingType InType) {
    return NULL;
}

void UUITweenInstance::Begin() {
}

UUITweenInstance::UUITweenInstance() {
}

