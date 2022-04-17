#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "BloodwebGenerator.generated.h"

class UBloodwebDistribution;
class UDBDBloodwebDefinitionBase;
class IDBDBloodwebDefinitionBase;
class UBloodwebSettings;
class UDBDDesignTunables;
class UBloodwebTunables;

UCLASS()
class DEADBYDAYLIGHT_API UBloodwebGenerator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FRandomStream _randomizationStream;
    
    UPROPERTY()
    TArray<FString> _selectedNodes;
    
    UPROPERTY()
    TArray<FName> _selectedContent;
    
    UPROPERTY(Transient)
    TScriptInterface<IDBDBloodwebDefinitionBase> _bloodWebDefinition;
    
    UPROPERTY(Transient)
    UDBDDesignTunables* _designTunables;
    
    UPROPERTY(Transient)
    UBloodwebTunables* _bloodwebTunables;
    
    UPROPERTY()
    float _alternativePathOccurenceFactor;
    
    UPROPERTY(Transient)
    UBloodwebDistribution* _dataDistribution;
    
    UPROPERTY(EditAnywhere)
    UBloodwebSettings* _bloodwebSettings;
    
public:
    UBloodwebGenerator();
};

