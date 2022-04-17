#include "LamentConfiguration.h"
#include "Net/UnrealNetwork.h"
#include "SpherePlayerOverlapComponent.h"
#include "K25CollectLamentConfigurationInteraction.h"
#include "Interactor.h"
#include "DBDOutlineComponent.h"
#include "MaterialHelper.h"
#include "LamentConfigurationOutlineStrategy.h"
#include "LamentConfigurationSpawnStrategy.h"
#include "LamentConfigurationChainHuntComponent.h"
#include "AnimationMontageSlave.h"
#include "MontagePlayer.h"

class ACamperPlayer;


void ALamentConfiguration::OnRep_SurvivorHeldHostage(ACamperPlayer* oldSurvivorHeldHostage) {
}

void ALamentConfiguration::OnRep_LamentConfigurationState() {
}

void ALamentConfiguration::OnCamperEscaped(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ALamentConfiguration::Multicast_TriggerSolvedSFX_Implementation() {
}

void ALamentConfiguration::Multicast_TriggerKillerPickUpSFX_Implementation(const TArray<ACamperPlayer*>& affectedSurvivors) {
}

void ALamentConfiguration::Multicast_DownedSurvivorHoldingLamentConfiguration_Implementation(ACamperPlayer* survivor) {
}

void ALamentConfiguration::Multicast_CorrectLamentConfigurationPosition_Implementation(const FVector& newPosition) {
}

float ALamentConfiguration::GetChainHuntProgressPercentage() const {
    return 0.0f;
}
















void ALamentConfiguration::Authority_RespawnLamentConfiguration(bool triggerChainHuntUponSpawning) {
}

void ALamentConfiguration::Authority_OnSurvivorHitByControlledProjectile(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ALamentConfiguration::Authority_OnIntroCompletedOrLevelReadyToPlay() {
}

void ALamentConfiguration::Authority_OnGameEnded(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ALamentConfiguration::Authority_OnEndGameOver(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ALamentConfiguration::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALamentConfiguration, _lamentconfigurationState);
    DOREPLIFETIME(ALamentConfiguration, _survivorHeldHostage);
    DOREPLIFETIME(ALamentConfiguration, _solved);
    DOREPLIFETIME(ALamentConfiguration, _releasedByAttack);
}

ALamentConfiguration::ALamentConfiguration() {
    this->_interactable = CreateDefaultSubobject<USpherePlayerOverlapComponent>(TEXT("InteractableZone"));
    this->_collectableInteractor = CreateDefaultSubobject<UInteractor>(TEXT("CollectableInteractor"));
    this->_survivorCollectItemInteraction = CreateDefaultSubobject<UK25CollectLamentConfigurationInteraction>(TEXT("SurvivorCollectItem"));
    this->_killerCollectItemInteraction = CreateDefaultSubobject<UK25CollectLamentConfigurationInteraction>(TEXT("KillerCollectItem"));
    this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
    this->_materialHelper = CreateDefaultSubobject<UMaterialHelper>(TEXT("MaterialHelper"));
    this->_outlineStrategy = CreateDefaultSubobject<ULamentConfigurationOutlineStrategy>(TEXT("Outline Strategy"));
    this->_spawnStrategy = CreateDefaultSubobject<ULamentConfigurationSpawnStrategy>(TEXT("Spawn Strategy"));
    this->_chainHuntComponent = CreateDefaultSubobject<ULamentConfigurationChainHuntComponent>(TEXT("Chain Hunt"));
    this->_dotProductMinValue = 0.50f;
    this->_survivorAttachmentSocket = EAttachToSocketNameEnum::HandItemSocket;
    this->_killerAttachmentSocket = EAttachToSocketNameEnum::Weapon_SocketRT;
    this->_montageFollower = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("MontageSlave"));
    this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("AnimMontagePlayer"));
    this->_chainAnimationActorClass = NULL;
    this->_lamentConfigurationTeleportIndicatorClass = NULL;
    this->_chainAnimationFollowerAttachmentSocketName = TEXT("LamentBox_joint_char");
    this->_localLamentConfigurationState = ELamentConfigurationState::WaitingToSpawn;
    this->_lamentconfigurationState = ELamentConfigurationState::WaitingToSpawn;
    this->_chainAnimationActor = NULL;
    this->_survivorHeldHostage = NULL;
    this->_solvedLamentConfigurationDropDistanceToCollectorCentimeters = 91.30f;
    this->_failedLamentConfigurationSolveDropDistanceToCollectorCentimeters = 60.50f;
    this->_solved = false;
    this->_releasedByAttack = false;
    this->_lamentConfigurationTeleportIndicator = NULL;
}

