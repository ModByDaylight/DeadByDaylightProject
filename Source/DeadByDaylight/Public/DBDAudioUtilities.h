#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDAudioUtilities.generated.h"

class UAkAudioBank;
class UAkAudioEvent;
class UObject;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDAudioUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void DBD_PostUiEvent(UAkAudioEvent* event);
    
    UFUNCTION(BlueprintCallable)
    static UObject* DBD_LoadPersistentBankByAssetPtr(TSoftObjectPtr<UAkAudioBank> bank);
    
    UFUNCTION(BlueprintCallable)
    static void DBD_LoadPersistentBankAsync(UAkAudioBank* bank);
    
    UFUNCTION(BlueprintCallable)
    static void DBD_LoadPersistentBank(UAkAudioBank* bank);
    
    UDBDAudioUtilities();
};

