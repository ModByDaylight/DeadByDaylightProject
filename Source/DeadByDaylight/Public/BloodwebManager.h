#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "BloodwebManager.generated.h"

class UBloodwebGenerator;
class UBloodwebTunables;
class UDBDGameInstance;
class UDBDDesignTunables;
class UBloodwebHandler;
class UDBDBloodwebDefinitionBase;
class IDBDBloodwebDefinitionBase;
class UBloodwebEntity;

UCLASS()
class DEADBYDAYLIGHT_API UBloodwebManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBloodwebGenerator> _bloodwebBuilderClass;
    
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
    UPROPERTY(Transient)
    UDBDDesignTunables* _designTunables;
    
    UPROPERTY(Transient)
    UBloodwebTunables* _bloodwebTunables;
    
    UPROPERTY(Transient)
    TScriptInterface<IDBDBloodwebDefinitionBase> _bloodWebDefinition;
    
    UPROPERTY(Transient)
    UBloodwebGenerator* _bloodwebBuilder;
    
    UPROPERTY(Transient)
    UBloodwebEntity* _entity;
    
    UPROPERTY(Transient)
    UBloodwebHandler* _bloodwebHandler;
    
public:
    UBloodwebManager();
    UFUNCTION()
    void Init(UDBDGameInstance* gameInstance, UDBDDesignTunables* tunables);
    
};

