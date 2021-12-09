#include "AkSettingsPerUser.h"

UAkSettingsPerUser::UAkSettingsPerUser() {
    this->WaapiIPAddress = TEXT("127.0.0.1");
    this->WaapiPort = 8080;
    this->AutoSyncSelection = true;
    this->SoundDataGenerationSkipLanguage = false;
}

