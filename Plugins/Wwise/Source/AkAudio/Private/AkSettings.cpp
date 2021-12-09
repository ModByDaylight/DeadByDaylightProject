#include "AkSettings.h"

UAkSettings::UAkSettings() {
    this->MaxSimultaneousReverbVolumes = 2;
    this->bAutoConnectToWAAPI = false;
    this->DefaultOcclusionCollisionChannel = ECC_Visibility;
    this->SplitSwitchContainerMedia = false;
    this->UseEventBasedPackaging = false;
    this->EnableAutomaticAssetSynchronization = false;
    this->CommandletCommitMessage = TEXT("Unreal Wwise Sound Data auto-generation");
    this->AskedToUseNewAssetManagement = true;
    this->bEnableMultiCoreRendering = false;
    this->MigratedEnableMultiCoreRendering = true;
    this->FixupRedirectorsDuringMigration = false;
}

