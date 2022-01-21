#include "AtlantaPendingContent.h"

void UAtlantaPendingContent::StartInstall(FOnContentInstallSucceeded OnSucceeded, FOnContentInstallFailed OnFailed) {
}

float UAtlantaPendingContent::GetTotalDownloadedSize() {
    return 0.0f;
}

float UAtlantaPendingContent::GetRequiredDiskSpace() {
    return 0.0f;
}

bool UAtlantaPendingContent::GetIsDownloading() {
    return false;
}

float UAtlantaPendingContent::GetInstallProgress() {
    return 0.0f;
}

FText UAtlantaPendingContent::GetDownloadStatusText() {
    return FText::GetEmpty();
}

float UAtlantaPendingContent::GetDownloadSpeed() {
    return 0.0f;
}

float UAtlantaPendingContent::GetDownloadSize() {
    return 0.0f;
}

UAtlantaPendingContent::UAtlantaPendingContent() {
}

