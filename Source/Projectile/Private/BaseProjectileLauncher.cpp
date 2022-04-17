#include "BaseProjectileLauncher.h"
#include "Net/UnrealNetwork.h"
#include "BaseProjectileReplicationComponent.h"

class UProjectileProvider;
class IProjectileProvider;
class ABaseProjectile;
class APawn;


void UBaseProjectileLauncher::SetProjectileProvider(TScriptInterface<IProjectileProvider> projectileProvider) {
}

void UBaseProjectileLauncher::Server_LaunchWithImpact_Implementation(const FLaunchInfo& launchInfo, const FImpactInfo& impactInfo, ABaseProjectile* projectile) {
}
bool UBaseProjectileLauncher::Server_LaunchWithImpact_Validate(const FLaunchInfo& launchInfo, const FImpactInfo& impactInfo, ABaseProjectile* projectile) {
    return true;
}

void UBaseProjectileLauncher::Server_Launch_Implementation(const FLaunchInfo& launchInfo, ABaseProjectile* projectile) {
}
bool UBaseProjectileLauncher::Server_Launch_Validate(const FLaunchInfo& launchInfo, ABaseProjectile* projectile) {
    return true;
}

void UBaseProjectileLauncher::OnRep_MaxAmmo(int32 oldMaxAmmo) {
}

void UBaseProjectileLauncher::OnRep_Ammo(int32 oldAmmo) {
}


void UBaseProjectileLauncher::Local_Launch() {
}

bool UBaseProjectileLauncher::IsLocallyControlled() const {
    return false;
}

bool UBaseProjectileLauncher::IsAmmoFull() const {
    return false;
}

bool UBaseProjectileLauncher::HasProjectile() const {
    return false;
}

bool UBaseProjectileLauncher::HasAuthority() const {
    return false;
}

ABaseProjectile* UBaseProjectileLauncher::GetProjectileToLaunch_Implementation() const {
    return NULL;
}

APawn* UBaseProjectileLauncher::GetOwningPawn() const {
    return NULL;
}

float UBaseProjectileLauncher::GetLaunchSpeedAtThrowPowerRatio_Implementation(float throwPowerRatio) const {
    return 0.0f;
}

float UBaseProjectileLauncher::GetLaunchSpeed_Implementation() const {
    return 0.0f;
}

FVector UBaseProjectileLauncher::GetLaunchPosition_Implementation() const {
    return FVector{};
}

FVector UBaseProjectileLauncher::GetLaunchDirectionAtViewAndThrowPowerRatio_Implementation(FRotator viewRotation, float throwPowerRatio) const {
    return FVector{};
}

FVector UBaseProjectileLauncher::GetLaunchDirection_Implementation() const {
    return FVector{};
}

int32 UBaseProjectileLauncher::GetAmmo() const {
    return 0;
}


void UBaseProjectileLauncher::Authority_SetMaxAmmo(int32 newMaxAmmo, bool isMaxAmmoImmutable) {
}

void UBaseProjectileLauncher::Authority_ReturnAmmoUnits(int32 amountOfAmmoUnitsReturned) {
}

void UBaseProjectileLauncher::Authority_Reload() {
}

void UBaseProjectileLauncher::Authority_Launch() {
}

void UBaseProjectileLauncher::Authority_AddMaxAmmo(int32 ammoToAdd) {
}

void UBaseProjectileLauncher::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBaseProjectileLauncher, _ammo);
    DOREPLIFETIME(UBaseProjectileLauncher, _maxAmmo);
    DOREPLIFETIME(UBaseProjectileLauncher, _canLaunchWhileOutOfAmmo);
}

UBaseProjectileLauncher::UBaseProjectileLauncher() {
    this->_requireLaunchImpactDetection = false;
    this->_hasInfiniteAmmunition = false;
    this->ProjectileClass = NULL;
    this->_ammo = 1;
    this->_maxAmmo = 1;
    this->_canLaunchWhileOutOfAmmo = false;
    this->_debugProjectile = NULL;
    this->_projectileReplicationComponent = CreateDefaultSubobject<UBaseProjectileReplicationComponent>(TEXT("Projectile Replication Component"));
}

