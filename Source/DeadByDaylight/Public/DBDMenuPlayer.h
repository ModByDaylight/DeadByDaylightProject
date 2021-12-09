#pragma once
#include "CoreMinimal.h"
#include "DBDBasePlayer.h"
#include "StandDisplayable.h"
#include "EItemHandPosition.h"
#include "CharmAttachable.h"
#include "ECustomizationCategory.h"
#include "DBDMenuPlayer.generated.h"

class UMaterialHelper;
class UMaterialInterface;
class AActor;
class USkeletalMeshComponent;
class UCharmSpawnerComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDBDMenuPlayerOnItemEquipped);

UCLASS()
class DEADBYDAYLIGHT_API ADBDMenuPlayer : public ADBDBasePlayer, public IStandDisplayable, public ICharmAttachable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool RoleSelected;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsOnline;
    
    UPROPERTY(BlueprintAssignable)
    FDBDMenuPlayerOnItemEquipped OnItemEquipped;
    
private:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> DarkMaterial;
    
    UPROPERTY()
    EItemHandPosition _handPosition;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ItemMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialHelper* MaterialHelper;
    
    UPROPERTY()
    FName _equippedItemName;
    
    UFUNCTION()
    void WrappedOnDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool ShouldShowSpawnAnimation() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldApplyPositionOffset() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RestartInSequence_Internal();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCustomizationTransactionCompleted(ECustomizationCategory category);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsInMenuPlayer();
    
    UFUNCTION(BlueprintPure)
    EItemHandPosition GetHandPosition() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    UCharmSpawnerComponent* GetCharmSpawnerComponent();
    
    UFUNCTION(BlueprintNativeEvent)
    void BeginDestroySequence_Internal();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BeginCreateSequence();
    
public:
    ADBDMenuPlayer();
};

