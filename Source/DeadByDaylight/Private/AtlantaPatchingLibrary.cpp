#include "AtlantaPatchingLibrary.h"

class UAtlantaPendingContent;
class UAtlantaInstalledContent;

void UAtlantaPatchingLibrary::RequestContent(const FString& RemoteManifestURL, const FString& CloudURL, const FString& InstallDirectory, FAtlantaPatchingLibraryOnSucceeded OnSucceeded, FAtlantaPatchingLibraryOnFailed OnFailed, UAtlantaPendingContent* MobilePendingContent) {
}

void UAtlantaPatchingLibrary::PrintPakLocations() {
}

bool UAtlantaPatchingLibrary::HasActiveWiFiConnection() {
    return false;
}

TArray<FString> UAtlantaPatchingLibrary::GetSupportedPlatformNames() {
    return TArray<FString>();
}

UAtlantaInstalledContent* UAtlantaPatchingLibrary::GetInstalledContent(const FString& InstallDirectory, const FString& ManifestFilename) {
    return NULL;
}

FString UAtlantaPatchingLibrary::GetActiveDeviceProfileName() {
    return TEXT("");
}

UAtlantaPatchingLibrary::UAtlantaPatchingLibrary() {
}

