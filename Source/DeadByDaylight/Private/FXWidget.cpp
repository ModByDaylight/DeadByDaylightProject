#include "FXWidget.h"

class UNiagaraComponent;

void UFXWidget::StopParticle() const {
}

void UFXWidget::PlayParticle(float startAtTime, int32 numLoopsToPlay) const {
}

UNiagaraComponent* UFXWidget::GetNiagaraFX() {
    return NULL;
}

UFXWidget::UFXWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_niagaraSystem = NULL;
}

