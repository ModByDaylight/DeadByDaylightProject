#include "Collectable.h"
#include "Net/UnrealNetwork.h"
#include "ItemModifier.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayTagContainerComponent.h"
#include "Components/SceneComponent.h"

class UInteractor;
class ADBDPlayer;
class AActor;
class UItemAddon;

void ACollectable::SetVisibilityEvent_Implementation(bool visibility) {
}

void ACollectable::SetItemInteractor(UInteractor* interactor) {
}

void ACollectable::SetDisplayedInputType(const EInputInteractionType displayedInputType) {
}

void ACollectable::SetCount(int32 count) {
}

void ACollectable::Server_Discard_Implementation() {
}
bool ACollectable::Server_Discard_Validate() {
    return true;
}

void ACollectable::OnUseReleased_Implementation(ADBDPlayer* collector) {
}

void ACollectable::OnUse_Implementation() {
}

void ACollectable::OnRep_State() {
}

void ACollectable::OnRep_Collector() {
}

void ACollectable::OnRep_BegunPlayFenceName() {
}


void ACollectable::OnFenceInitialized() {
}

void ACollectable::OnDropped_Implementation(ADBDPlayer* droppingPlayer) {
}


void ACollectable::OnCollectorEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason) {
}

void ACollectable::OnCollected_Implementation(ADBDPlayer* collector) {
}




void ACollectable::Multicast_UseReleased_Implementation(ADBDPlayer* collector) {
}
bool ACollectable::Multicast_UseReleased_Validate(ADBDPlayer* collector) {
    return true;
}

void ACollectable::Multicast_Use_Implementation() {
}
bool ACollectable::Multicast_Use_Validate() {
    return true;
}

void ACollectable::Multicast_RemoveItemAddon_Implementation(UItemAddon* addon) {
}

void ACollectable::Multicast_RemoveAllAddons_Implementation() {
}

void ACollectable::Multicast_Dropped_Implementation(ADBDPlayer* droppedBy, const FVector& location, const FRotator& rotation) {
}
bool ACollectable::Multicast_Dropped_Validate(ADBDPlayer* droppedBy, const FVector& location, const FRotator& rotation) {
    return true;
}

void ACollectable::Multicast_Collected_Implementation(ADBDPlayer* collector) {
}
bool ACollectable::Multicast_Collected_Validate(ADBDPlayer* collector) {
    return true;
}

void ACollectable::Local_Dropped_Location(ADBDPlayer* droppedBy, const FVector& location, const FRotator& rotation) {
}

bool ACollectable::IsStored() const {
    return false;
}

bool ACollectable::IsRechargeable_Implementation() const {
    return false;
}

bool ACollectable::IsPickable() const {
    return false;
}

bool ACollectable::IsOnGround() const {
    return false;
}

bool ACollectable::IsLocallyControlled() const {
    return false;
}

bool ACollectable::IsInSearchable() const {
    return false;
}

bool ACollectable::IsEquipped() const {
    return false;
}

bool ACollectable::IsCountDisplayForced_Implementation() const {
    return false;
}

bool ACollectable::IsCollected() const {
    return false;
}

bool ACollectable::IsBeingUsed() const {
    return false;
}

bool ACollectable::HasGameplayModifierFlag(FGameplayTag modifierFlag) const {
    return false;
}

float ACollectable::GetUsePercentLeft_Implementation() const {
    return 0.0f;
}

float ACollectable::GetModifierSum(FGameplayTag modifierType, float defaultValue) const {
    return 0.0f;
}

float ACollectable::GetModifierMax(FGameplayTag modifierType, float defaultValue) const {
    return 0.0f;
}

UInteractor* ACollectable::GetItemInteractor() const {
    return NULL;
}

uint8 ACollectable::GetItemIconIndex_Implementation() const {
    return 0;
}

TArray<UItemAddon*> ACollectable::GetItemAddons() {
    return TArray<UItemAddon*>();
}

FString ACollectable::GetIconFilePath() const {
    return TEXT("");
}

EInputInteractionType ACollectable::GetDisplayedInputType() const {
    return EInputInteractionType::VE_None;
}

int32 ACollectable::GetCount_Implementation() const {
    return 0;
}

ADBDPlayer* ACollectable::GetCollector() const {
    return NULL;
}

void ACollectable::DebugPrintStats_Implementation() {
}

bool ACollectable::CanUse_Implementation() const {
    return false;
}

bool ACollectable::CanBeDropped_Implementation(const ADBDPlayer* dropper) const {
    return false;
}

bool ACollectable::CanBeCollected_Implementation(const ADBDPlayer* collector) const {
    return false;
}

void ACollectable::CallOnCollectablePickedUpBP(ACollectable::FOnCollectablePickedUpBPDelegate callback) {
}


void ACollectable::Authority_UseReleased() {
}

void ACollectable::Authority_Use() {
}

void ACollectable::Authority_RemoveItemAddon(UItemAddon* addon) {
}

void ACollectable::Authority_OnConsumed(bool forceDiscard) {
}

void ACollectable::Authority_Discard() {
}

void ACollectable::Authority_AddItemAddon(UItemAddon* addon) {
}

void ACollectable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACollectable, _collector);
    DOREPLIFETIME(ACollectable, _state);
    DOREPLIFETIME(ACollectable, _itemCount);
    DOREPLIFETIME(ACollectable, _begunPlayFenceName);
}

ACollectable::ACollectable() {
    this->DisplayUsePercent = false;
    this->ProgressBar = EAtlantaItemProgressionBarEnum::PrimaryBar;
    this->OverrideItemIndex = false;
    this->OverridenItemIndex = 0;
    this->StrafeOnUse = false;
    this->AimOnUse = false;
    this->VisibleWhenEquipped = true;
    this->StopRunningOnUse = false;
    this->HandPosition = EItemHandPosition::None;
    this->DisableArmOverrideDuringInteractions = false;
    this->HasUseInteraction = false;
    this->Category = ECollectableCategory::Common;
    this->IsInUse = false;
    this->FromPlayerSpawn = false;
    this->BaseItemModifier = CreateDefaultSubobject<UItemModifier>(TEXT("ItemModifier"));
    this->ItemModifier1 = CreateDefaultSubobject<UItemModifier>(TEXT("ItemModifier1"));
    this->ItemModifier2 = CreateDefaultSubobject<UItemModifier>(TEXT("ItemModifier2"));
    this->ShouldRegisterToOnSurvivorAdded = false;
    this->BeingCollected = false;
    this->BeingDropped = false;
    this->_beingConsumedByEntity = false;
    this->_itemInteractor = NULL;
    this->_mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemMesh"));
    this->_displayedInputType = EInputInteractionType::VE_ItemUse;
    this->_objectState = CreateDefaultSubobject<UGameplayTagContainerComponent>(TEXT("ObjectState"));
    this->_isBoundToFirstCollector = false;
    this->_placementOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("PlacementOrigin"));
    this->_collector = NULL;
    this->_firstCollector = NULL;
    this->_state = ECollectableState::OnGround;
    this->_itemCount = 1;
    this->_attachToSocketName = EAttachToSocketNameEnum::HandItemSocket;
    this->_collectInInventoryType = EInventoryType::Main;
    this->_itemType = ELoadoutItemType::None;
    this->_discardWhenConsumed = true;
    this->_disableAttachmentReplication = false;
}

