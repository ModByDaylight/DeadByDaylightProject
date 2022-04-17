#include "ZombieCharacter.h"
#include "Net/UnrealNetwork.h"
#include "OtherCharactersVerticalCollisionsHandler.h"
#include "Components/StaticMeshComponent.h"
#include "CharacterPositionRecorderComponent.h"
#include "Components/SphereComponent.h"
#include "AuthoritativeMovementComponent.h"
#include "AuthoritativePoolableActorComponent.h"
#include "ZombieBlindableComponent.h"
#include "ChargeableComponent.h"
#include "FirecrackerEffectHandlerComponent.h"
#include "FlashlightableComponent.h"
#include "GameplayTagContainerComponent.h"

class ASlasherPlayer;
class UPrimitiveComponent;
class AActor;
class UFlashlightComponent;




void AZombieCharacter::OnSlasherSet(ASlasherPlayer* slasher) {
}

void AZombieCharacter::OnRep_ZombieState(EZombieState previousState) {
}

void AZombieCharacter::OnRep_ZombieGender() {
}


void AZombieCharacter::OnEndOverlapZombieAttackDetector(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void AZombieCharacter::OnBeginOverlapZombieAttackDetector(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}

void AZombieCharacter::Multicast_ZombieKilledByKillerCosmetic_Implementation(EAttackType attackType) {
}

EZombieGender AZombieCharacter::GetZombieGender() const {
    return EZombieGender::Male;
}

UOtherCharactersVerticalCollisionsHandler* AZombieCharacter::GetOtherCharactersVerticalCollisionsHandler() const {
    return NULL;
}

UAuthoritativeMovementComponent* AZombieCharacter::GetAuthoritativeMovementComponent() const {
    return NULL;
}

FString AZombieCharacter::GetAudioSwitchState() const {
    return TEXT("");
}

void AZombieCharacter::Authority_OnZombieStateChanged(EZombieState zombieState) {
}

void AZombieCharacter::Authority_OnFlashlightRemoved(const UFlashlightComponent* flashlight) {
}

void AZombieCharacter::Authority_OnFlashlightAdded(const UFlashlightComponent* flashlight) {
}

void AZombieCharacter::Authority_OnFirecrackerInRangeBegin(const FFirecrackerEffectData& effectData) {
}

void AZombieCharacter::Authority_DeactivateZombieAndStartRespawnTimer() {
}

void AZombieCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AZombieCharacter, _zombieState);
    DOREPLIFETIME(AZombieCharacter, _zombieGender);
    DOREPLIFETIME(AZombieCharacter, _audioSwitchState);
}

AZombieCharacter::AZombieCharacter() {
    this->_poolableComponent = CreateDefaultSubobject<UAuthoritativePoolableActorComponent>(TEXT("PollableComponent"));
    this->_zombieAttackDetector = CreateDefaultSubobject<USphereComponent>(TEXT("ZombieAttackDetector"));
    this->_attackDamageZone = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieAttackDamageZone"));
    this->_zombieState = EZombieState::InPool;
    this->_zombieGender = EZombieGender::Male;
    this->_femaleSkeletalMesh = NULL;
    this->_audioSwitchState = TEXT("SVR_M01");
    this->_blindableComponent = CreateDefaultSubobject<UZombieBlindableComponent>(TEXT("ZombieBlindableComponent"));
    this->_blindingChargeableComponent = CreateDefaultSubobject<UChargeableComponent>(TEXT("BlindnessChargeableComponent"));
    this->_firecrackerEffectHandlerComponent = CreateDefaultSubobject<UFirecrackerEffectHandlerComponent>(TEXT("FirecrackerEffectHandlerComponent"));
    this->_flashLightableComponent = CreateDefaultSubobject<UFlashlightableComponent>(TEXT("EyesFlashlightableComponent"));
    this->_objectState = CreateDefaultSubobject<UGameplayTagContainerComponent>(TEXT("ObjectState"));
    this->_positionRecorder = CreateDefaultSubobject<UCharacterPositionRecorderComponent>(TEXT("Position Recorder"));
    this->_authoritativeMovementComponent = CreateDefaultSubobject<UAuthoritativeMovementComponent>(TEXT("AuthoritativeMovement"));
    this->_otherCharactersVerticalCollisionsHandler = CreateDefaultSubobject<UOtherCharactersVerticalCollisionsHandler>(TEXT("OtherCharactersVerticalCollisionsHandler"));
    this->_zombieStunnedCapsuleRadius = 15.00f;
    this->_minFallHeight = 50.00f;
    this->_afterInAirAttackCooldown = 0.80f;
}

