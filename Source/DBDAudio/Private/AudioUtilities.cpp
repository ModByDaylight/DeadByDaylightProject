#include "AudioUtilities.h"

class UAkAudioEvent;
class UAkAudioBank;
class UObject;

void UAudioUtilities::PostAkAudioEvent(UAkAudioEvent* audioEvent) {
}

void UAudioUtilities::DBD_PostUiEvent(UAkAudioEvent* event) {
}

UObject* UAudioUtilities::DBD_LoadPersistentBankByAssetPtr(TSoftObjectPtr<UAkAudioBank> bank) {
    return NULL;
}

void UAudioUtilities::DBD_LoadPersistentBankAsync(UAkAudioBank* bank) {
}

void UAudioUtilities::DBD_LoadPersistentBank(UAkAudioBank* bank) {
}

UAudioUtilities::UAudioUtilities() {
}

