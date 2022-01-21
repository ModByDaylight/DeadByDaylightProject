#include "DBDGeneratorDrivenReflectionCaptureActor.h"
#include "GenyReflectionCaptureComponent.h"

void ADBDGeneratorDrivenReflectionCaptureActor::SwapToSecondState() {
}

ADBDGeneratorDrivenReflectionCaptureActor::ADBDGeneratorDrivenReflectionCaptureActor() {
    this->genyReflectionCapture = CreateDefaultSubobject<UGenyReflectionCaptureComponent>(TEXT("GenyReflectionCapture"));
}

