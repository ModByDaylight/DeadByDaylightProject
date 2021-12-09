#include "BombLauncher.h"
#include "Net/UnrealNetwork.h"

class UCurveFloat;

void UBombLauncher::SetProjectileSpeedCurve(UCurveFloat* newProjectileSpeedCurve) {
}

void UBombLauncher::SetProjectilePitchCurve(UCurveFloat* newProjectilePitchCurve) {
}

void UBombLauncher::SetPercentThrowStrength(float throwStrength) {
}

void UBombLauncher::Server_SwitchBombType_Implementation() {
}
bool UBombLauncher::Server_SwitchBombType_Validate() {
    return true;
}

void UBombLauncher::LocalLaunch(float percentThrowStrength) {
}


bool UBombLauncher::IsBombFullyCharged() const {
    return false;
}

float UBombLauncher::GetPercentThrowStrenght() const {
    return 0.0f;
}

EBombType UBombLauncher::GetCurrentBombType() const {
    return EBombType::Toxin;
}

void UBombLauncher::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBombLauncher, _currentBombType);
}

UBombLauncher::UBombLauncher() {
    this->_speedCurve = NULL;
    this->_pitchCurve = NULL;
    this->_currentBombType = EBombType::Toxin;
}

