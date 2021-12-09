#include "DBDBaseHud.h"


bool ADBDBaseHud::ShouldDrawAnimHud() const {
    return false;
}

void ADBDBaseHud::DBD_ShowAnimHud(bool show) {
}

ADBDBaseHud::ADBDBaseHud() {
    this->_debugFont = NULL;
}

