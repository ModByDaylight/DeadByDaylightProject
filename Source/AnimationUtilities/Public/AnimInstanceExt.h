#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimInstanceExt.generated.h"

class USkeletalMeshComponent;
class UAnimInstance;
class ACharacter;
class AActor;

UCLASS(BlueprintType)
class ANIMATIONUTILITIES_API UAnimInstanceExt : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static UAnimInstance* GetSubAnimInstance(const UAnimInstance* root, UClass* type);
    
    UFUNCTION(BlueprintPure)
    static USkeletalMeshComponent* GetRootSkeletalMeshComponent(const UAnimInstance* animInstance);
    
    UFUNCTION(BlueprintPure)
    static USkeletalMeshComponent* GetOwningCharacterSkeletalMeshComponent(const UAnimInstance* animInstance);
    
    UFUNCTION(BlueprintPure)
    static ACharacter* GetOwningCharacter(const UAnimInstance* animInstance);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetOwningActor(const UAnimInstance* animInstance);
    
    UAnimInstanceExt();
};

