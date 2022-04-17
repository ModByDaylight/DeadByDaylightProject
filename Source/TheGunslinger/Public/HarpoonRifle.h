#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Collectable.h"
#include "DBDTunableRowHandle.h"
#include "HarpoonRifle.generated.h"

class UHarpoonProviderComponent;
class UChainLinkableComponent;
class ARifleChain;
class URifleChainTensionComponent;
class UHarpoonLauncher;
class UChargeableComponent;
class URiflePlayerLinker;
class UHarpoonChainPositioner;
class UFireHarpoonRifleInteraction;
class UTriggerableActivatorComponent;

UCLASS()
class THEGUNSLINGER_API AHarpoonRifle : public ACollectable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UChainLinkableComponent> _survivorLinkableClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UChainLinkableComponent> _killerLinkableClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ARifleChain> _chainClass;
    
    UPROPERTY(EditAnywhere)
    FName _rifleMuzzleSocket;
    
    UPROPERTY(EditAnywhere)
    FName _rifleHarpoonLoadingSocket;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _crowActiveRange;
    
    UPROPERTY(Export, VisibleAnywhere)
    UHarpoonLauncher* _launcher;
    
    UPROPERTY(Export, VisibleAnywhere)
    UHarpoonProviderComponent* _harpoonProvider;
    
    UPROPERTY(Transient)
    ARifleChain* _chain;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    URifleChainTensionComponent* _chainTensionComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UChargeableComponent* _chainTensionChargeable;
    
    UPROPERTY(Export, VisibleAnywhere)
    URiflePlayerLinker* _playerLinker;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UHarpoonChainPositioner* _harpoonChainPositioner;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UFireHarpoonRifleInteraction* _fireInteraction;
    
    UPROPERTY(Export, VisibleAnywhere)
    UTriggerableActivatorComponent* _crowsActivatorComponent;
    
public:
    AHarpoonRifle();
    UFUNCTION(BlueprintPure)
    ARifleChain* GetChain() const;
    
private:
    UFUNCTION()
    void Authority_OnFireHarpoon();
    
};

