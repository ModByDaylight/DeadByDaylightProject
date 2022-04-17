#include "AnimInstanceExt.h"

class UAnimInstance;
class USkeletalMeshComponent;
class AActor;
class ACharacter;

UAnimInstance* UAnimInstanceExt::GetSubAnimInstance(const UAnimInstance* root, UClass* type) {
    return NULL;
}

USkeletalMeshComponent* UAnimInstanceExt::GetRootSkeletalMeshComponent(const UAnimInstance* animInstance) {
    return NULL;
}

USkeletalMeshComponent* UAnimInstanceExt::GetOwningCharacterSkeletalMeshComponent(const UAnimInstance* animInstance) {
    return NULL;
}

ACharacter* UAnimInstanceExt::GetOwningCharacter(const UAnimInstance* animInstance) {
    return NULL;
}

AActor* UAnimInstanceExt::GetOwningActor(const UAnimInstance* animInstance) {
    return NULL;
}

UAnimInstanceExt::UAnimInstanceExt() {
}

