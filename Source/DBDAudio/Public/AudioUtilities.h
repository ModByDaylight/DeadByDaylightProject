#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AudioUtilities.generated.h"

class UAkAudioBank;
class UAkAudioEvent;
class UObject;

UCLASS(BlueprintType)
class DBDAUDIO_API UAudioUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioUtilities();
    UFUNCTION(BlueprintCallable)
    static void PostAkAudioEvent(UAkAudioEvent* audioEvent);
    
    UFUNCTION(BlueprintCallable)
    static void DBD_PostUiEvent(UAkAudioEvent* event);
    
    UFUNCTION(BlueprintCallable)
    static UObject* DBD_LoadPersistentBankByAssetPtr(TSoftObjectPtr<UAkAudioBank> bank);
    
    UFUNCTION(BlueprintCallable)
    static void DBD_LoadPersistentBankAsync(UAkAudioBank* bank);
    
    UFUNCTION(BlueprintCallable)
    static void DBD_LoadPersistentBank(UAkAudioBank* bank);
    
};

