#include "DownloadProgression.h"

FDownloadProgression::FDownloadProgression() {
    this->DownloadSize = 0.00f;
    this->TotalDownloadedSize = 0.00f;
    this->DownloadSpeed = 0.00f;
    this->InstallProgress = 0.00f;
    this->IsDownloading = false;
}

