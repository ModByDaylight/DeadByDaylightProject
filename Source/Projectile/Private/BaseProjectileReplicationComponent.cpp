#include "BaseProjectileReplicationComponent.h"

class ABaseProjectile;

void UBaseProjectileReplicationComponent::Server_TryDetectPlayer_Implementation(ABaseProjectile* projectile, FImpactInfo impactInfo, const FVector_NetQuantize100 projectileLocation, const FVector_NetQuantize10 projectileRotation, const float targetLocationTimestamp) {
}
bool UBaseProjectileReplicationComponent::Server_TryDetectPlayer_Validate(ABaseProjectile* projectile, FImpactInfo impactInfo, const FVector_NetQuantize100 projectileLocation, const FVector_NetQuantize10 projectileRotation, const float targetLocationTimestamp) {
    return true;
}

void UBaseProjectileReplicationComponent::Multicast_SendAuthorityDetectPlayer_Implementation(ABaseProjectile* projectile, FImpactInfo impactInfo) {
}

void UBaseProjectileReplicationComponent::Multicast_OnLaunchWithImpact_Implementation(ABaseProjectile* projectile, FLaunchInfo launchInfo, FImpactInfo impactInfo) {
}

void UBaseProjectileReplicationComponent::Multicast_OnLaunch_Implementation(ABaseProjectile* projectile, FLaunchInfo launchInfo) {
}

void UBaseProjectileReplicationComponent::Multicast_DetectPlayer_Implementation(ABaseProjectile* projectile, FImpactInfo impactInfo) {
}

void UBaseProjectileReplicationComponent::Multicast_DetectImpact_Implementation(ABaseProjectile* projectile, FImpactInfo impactInfo) {
}

void UBaseProjectileReplicationComponent::Client_ReceiveDetectPlayerValidation_Implementation(ABaseProjectile* projectile, bool success) {
}

void UBaseProjectileReplicationComponent::Client_LaunchRefusedByServer_Implementation(ABaseProjectile* projectile) {
}

UBaseProjectileReplicationComponent::UBaseProjectileReplicationComponent() {
}

