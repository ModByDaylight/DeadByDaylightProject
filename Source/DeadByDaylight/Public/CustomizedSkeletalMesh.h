#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ECustomizationCategory.h"
#include "CustomizedSkeletalMesh.generated.h"

class USlaveAnimInstance;
class USkeletalMeshComponent;
class UCustomizedSkeletalMesh;
class USkinnedMeshComponent;
class AItemVfx;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCustomizedSkeletalMesh : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMeshSwitchEventBP, ECustomizationCategory, category, USkeletalMeshComponent*, mesh);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USlaveAnimInstance> SlaveAnimInstanceClass;
    
    UPROPERTY(BlueprintAssignable)
    FOnMeshSwitchEventBP OnMeshSwitchBP;
    
protected:
    UPROPERTY(Export, Transient)
    USkinnedMeshComponent* _meshOwner;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSet<ECustomizationCategory> _ignoredItemCategories;
    
    UPROPERTY(Export, Transient)
    TArray<USkeletalMeshComponent*> Components;
    
    UPROPERTY(Export, Transient)
    TMap<ECustomizationCategory, USkeletalMeshComponent*> _categoryToComponents;
    
    UPROPERTY(Export, Transient)
    TArray<USkeletalMeshComponent*> Slaves;
    
    UPROPERTY(Transient)
    TMap<ECustomizationCategory, AItemVfx*> _itemVfxs;
    
    UPROPERTY(EditAnywhere)
    int32 _characterIdOverride;
    
public:
    UCustomizedSkeletalMesh();
    UFUNCTION(BlueprintCallable)
    void SetVfxsVisibility(ECustomizationCategory category, bool visible);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshVisibility(bool visible);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshOwner(USkinnedMeshComponent* mesh);
    
    UFUNCTION(BlueprintCallable)
    void SetCastShadow(bool castShadow);
    
    UFUNCTION(BlueprintCallable)
    void SetAllVfxsVisibility(bool visible);
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMesh(ECustomizationCategory category) const;
    
    UFUNCTION(BlueprintCallable)
    USkinnedMeshComponent* GetMeshOwner();
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetCurrentCustomizationItems() const;
    
    UFUNCTION(BlueprintPure)
    TArray<USkeletalMeshComponent*> GetComponents() const;
    
    UFUNCTION(BlueprintCallable)
    void CopyCustomization(const UCustomizedSkeletalMesh* copyFrom);
    
    UFUNCTION(BlueprintPure)
    bool Contains(TArray<FName> itemIds) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAllVfxs();
    
};

