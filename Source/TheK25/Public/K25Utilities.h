#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "K25Utilities.generated.h"

class ALamentConfiguration;
class AK25ControlledProjectile;
class AK25Power;
class UObject;
class AK25Husk;
class AK25Gateway;

UCLASS(BlueprintType)
class UK25Utilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UK25Utilities();
    UFUNCTION(BlueprintPure)
    static ALamentConfiguration* GetLamentConfiguration(UObject* worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static AK25Power* GetK25Power(UObject* worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static AK25Husk* GetK25Husk(UObject* worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static AK25Gateway* GetK25Gateway(UObject* worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static AK25ControlledProjectile* GetK25ControlledProjectile(UObject* worldContextObject);
    
};

