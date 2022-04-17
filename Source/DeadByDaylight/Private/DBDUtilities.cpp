#include "DBDUtilities.h"

class UAnimMontage;
class USphereComponent;
class UPrimitiveComponent;
class AActor;
class UAnimSequence;
class ADBDPlayerState;
class UObject;
class UMeshComponent;
class ADBDPlayerControllerBase;
class UAnimInstance;
class UTileSpawnPoint;
class AGenerator;
class ASlasherPlayer;
class UBoxComponent;
class ADBDBasePlayer;
class USkeletalMeshComponent;
class ACamperPlayer;
class UWorld;
class ADBDGameState;
class UActorComponent;
class ADBDPlayer;
class UMaterialHelper;
class UMaterialInterface;
class ADBDPlayerCameraManager;
class UActorSpawner;
class ADBDGameMode;
class UDBDGameInstance;
class ADBDAIPlayerController;
class AProceduralLevelBuilder;
class UAkAudioBank;

bool UDBDUtilities::WithinRangeExclusive(float min, float max, float value) {
    return false;
}

bool UDBDUtilities::WithinRange(float min, float max, float value) {
    return false;
}

float UDBDUtilities::ToAngle_negative180to180(float angle) {
    return 0.0f;
}

bool UDBDUtilities::SphereTraceSingle(const FVector start, const FVector end, const USphereComponent* sphere, FHitResult& outHitResult, const TArray<AActor*>& ignoredActors) {
    return false;
}

bool UDBDUtilities::SphereTraceAgainstActor(const FVector start, const FVector end, const USphereComponent* sphere, const AActor* actor, FHitResult& outHitResult) {
    return false;
}

void UDBDUtilities::SetComponentCastHiddenShadow(UPrimitiveComponent* component, bool castShadow) {
}

int32 UDBDUtilities::ResolveCharacterIdFromPlayerState(const ADBDPlayerState* playerState) {
    return 0;
}

void UDBDUtilities::PrintStringEmbiggened(UObject* WorldContextObject, const FString& InString, FLinearColor TextColor, float Duration, int32 Key, float Scale) {
}

int32 UDBDUtilities::PointerToInt(UObject* obj) {
    return 0;
}

bool UDBDUtilities::NormalizeXY(FVector& vector, float tolerance) {
    return false;
}

void UDBDUtilities::LogString(const FString& inStr) {
}

void UDBDUtilities::LogMeshMaterialInfo(const FString& inStr, const UMeshComponent* root) {
}

bool UDBDUtilities::IsServer(const UObject* worldContextObject) {
    return false;
}

bool UDBDUtilities::IsReplaceDisconnectedPlayersWithBotsActive() {
    return false;
}

bool UDBDUtilities::IsNonViolent() {
    return false;
}

bool UDBDUtilities::IsLocallyObservingASurvivor(const UObject* WorldContextObject) {
    return false;
}

bool UDBDUtilities::IsLocallyObservingAKiller(const UObject* WorldContextObject) {
    return false;
}

bool UDBDUtilities::IsInTutorialLevel() {
    return false;
}

bool UDBDUtilities::IsInSurvivorTeam(const UObject* WorldContextObject) {
    return false;
}

bool UDBDUtilities::IsInKillerTeam(const UObject* WorldContextObject) {
    return false;
}

bool UDBDUtilities::HasWalkableSurfaceForward(UObject* WorldContextObject, FVector location, FVector fowardVector, float distance, float raycastStartHeight, float raycastEndHeight, TArray<FHitResult>& outHits, FVector& raycastStart) {
    return false;
}

bool UDBDUtilities::HasLineOfSightToTarget(UObject* WorldContextObject, const FVector& startPosition, const FVector& targetPosition, const AActor* ignoredActor, const bool useComplex) {
    return false;
}

bool UDBDUtilities::HasFloorForward(UObject* WorldContextObject, FVector location, FVector fowardVector, float distance, float raycastStartHeight, float raycastEndHeight, TArray<FHitResult>& outHits, FVector& raycastStart) {
    return false;
}

FRotator UDBDUtilities::GetYawOnly(const FRotator& rotation) {
    return FRotator{};
}

FVector UDBDUtilities::GetXYVector(const FVector& vector) {
    return FVector{};
}

float UDBDUtilities::GetVelocityXYAngleDegrees(const AActor* actor) {
    return 0.0f;
}

void UDBDUtilities::GetTileSpawnPoints(TArray<UTileSpawnPoint*>& tileSpawnPoints) {
}

TArray<AGenerator*> UDBDUtilities::GetThreeClosestGenerators(const TArray<AGenerator*>& unrevealedGenerators) {
    return TArray<AGenerator*>();
}

float UDBDUtilities::GetSlasherTunableValue(UObject* WorldContextObject, FName valueName) {
    return 0.0f;
}

ASlasherPlayer* UDBDUtilities::GetSlasher(UObject* WorldContextObject) {
    return NULL;
}

FVector UDBDUtilities::GetSimilarVector(FVector vector, float maximumDeviation) {
    return FVector{};
}

float UDBDUtilities::GetPlayRateForMontage(UAnimMontage* montage, float time) {
    return 0.0f;
}

float UDBDUtilities::GetPercentOfRange(const float val, const float min, const float max) {
    return 0.0f;
}

ASlasherPlayer* UDBDUtilities::GetOwningSlasher(const UAnimInstance* animInstance) {
    return NULL;
}

ADBDBasePlayer* UDBDUtilities::GetOwningDBDBasePlayer(const UAnimInstance* animInstance) {
    return NULL;
}

USkeletalMeshComponent* UDBDUtilities::GetOwningCharacterSkeletalMeshComponent(const UAnimInstance* animInstance) {
    return NULL;
}

ACamperPlayer* UDBDUtilities::GetOwningCamper(const UAnimInstance* animInstance) {
    return NULL;
}

AActor* UDBDUtilities::GetOuterMostActor(const UAnimInstance* animInstance) {
    return NULL;
}

void UDBDUtilities::GetNearbyCampers(UWorld* world, FVector center, float radius, TArray<ACamperPlayer*>& outNearbyCampers, const TArray<AActor*>& ignoredCampers) {
}

bool UDBDUtilities::GetNearbyActorsOfType(UWorld* world, FVector center, float radius, TArray<AActor*>& outNearbyActors, UClass* actorClassType, TEnumAsByte<ECollisionChannel> collisionChannel, AActor* ignoreActor) {
    return false;
}

float UDBDUtilities::GetMontageLength(UAnimMontage* montage) {
    return 0.0f;
}

TArray<UMaterialHelper*> UDBDUtilities::GetMaterialHelpersAttachedToPlayerMesh(const ADBDPlayer* player) {
    return TArray<UMaterialHelper*>();
}

FString UDBDUtilities::GetLogStringMaterialInfo(const FString& inStr, const UMaterialInterface* root) {
    return TEXT("");
}

EPlayerRole UDBDUtilities::GetLocallyObservedCharacterRole(const UObject* WorldContextObject) {
    return EPlayerRole::VE_None;
}

ADBDPlayer* UDBDUtilities::GetLocallyObservedCharacter(const UObject* WorldContextObject) {
    return NULL;
}

ACamperPlayer* UDBDUtilities::GetLocallyControlledSurvivor(const UObject* WorldContextObject) {
    return NULL;
}

ASlasherPlayer* UDBDUtilities::GetLocallyControlledKiller(const UObject* WorldContextObject) {
    return NULL;
}

EPlayerRole UDBDUtilities::GetLocallyControlledCharacterRole(const UObject* WorldContextObject) {
    return EPlayerRole::VE_None;
}

ADBDPlayer* UDBDUtilities::GetLocallyControlledCharacter(const UObject* WorldContextObject) {
    return NULL;
}

ADBDPlayerControllerBase* UDBDUtilities::GetLocalDBDPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

ADBDPlayerCameraManager* UDBDUtilities::GetLocalDBDCameraManager(UObject* WorldContextObject) {
    return NULL;
}

int32 UDBDUtilities::GetInventoryCountForMultipleCharacters(UObject* worldContextObject, TArray<int32> characterIndexes, FName itemID) {
    return 0;
}

int32 UDBDUtilities::GetInventoryCount(UObject* worldContextObject, int32 characterIndex, FName itemID) {
    return 0;
}

TSet<ACamperPlayer*> UDBDUtilities::GetInGameSurvivorsByRef(const UObject* WorldContextObject) {
    return TSet<ACamperPlayer*>();
}

TArray<ACamperPlayer*> UDBDUtilities::GetInGameSurvivors(const UObject* WorldContextObject) {
    return TArray<ACamperPlayer*>();
}

TArray<ADBDPlayer*> UDBDUtilities::GetInGamePlayers(const UObject* WorldContextObject) {
    return TArray<ADBDPlayer*>();
}

FCollisionResponseContainer UDBDUtilities::GetImpactCollisionResponseContainer(const UPrimitiveComponent* primitive) {
    return FCollisionResponseContainer{};
}

TEnumAsByte<ECollisionChannel> UDBDUtilities::GetImpactCollisionObjectType(const UPrimitiveComponent* primitive) {
    return ECC_WorldStatic;
}

FText UDBDUtilities::GetFormattedNumberText(float value, int32 maxDecimals, int32 minDecimals, bool leadingZero) {
    return FText::GetEmpty();
}

FString UDBDUtilities::GetFormattedNumberString(float value, int32 maxDecimals, int32 minDecimals, bool leadingZero) {
    return TEXT("");
}

FVector UDBDUtilities::GetFloorLocationAt(UObject* WorldContextObject, FVector location, float raycastStartHeight, float raycastEndHeight, bool useComplex) {
    return FVector{};
}

AActor* UDBDUtilities::GetFirstActorWithTag(FName tag, const TArray<AActor*>& actorsArray) {
    return NULL;
}

float UDBDUtilities::GetEndGameTunableValue(UObject* worldContextObject, FName valueName) {
    return 0.0f;
}

float UDBDUtilities::GetDistanceToNearestHookedSurvivor(const ADBDPlayer* player) {
    return 0.0f;
}

ADBDGameState* UDBDUtilities::GetDBDGameState(const UObject* worldContextObject) {
    return NULL;
}

ADBDGameMode* UDBDUtilities::GetDBDGameMode(const UObject* worldContextObject) {
    return NULL;
}

UDBDGameInstance* UDBDUtilities::GetDBDGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

ADBDAIPlayerController* UDBDUtilities::GetDBDAIPlayerController(ADBDPlayer* player) {
    return NULL;
}

FName UDBDUtilities::GetCurrentCharacterName(const UObject* WorldContextObject) {
    return NAME_None;
}

FString UDBDUtilities::GetComponentOwnerName(UActorComponent* actorComponent) {
    return TEXT("");
}

FTransform UDBDUtilities::GetClosestSnapTransformOnOrbit(const FVector& centerPoint, const FVector& orbitterPosition, const float distance) {
    return FTransform{};
}

FVector UDBDUtilities::GetClosestPointOnOrbit(const FVector& centerPoint, const FVector& orbitterPosition, const float distance) {
    return FVector{};
}

AProceduralLevelBuilder* UDBDUtilities::GetBuilder(const UObject* WorldContextObject) {
    return NULL;
}

float UDBDUtilities::GetAnimSequenceLength(const UAnimSequence* sequence) {
    return 0.0f;
}

void UDBDUtilities::GetActorSpawners(TArray<UActorSpawner*>& actorSpawners) {
}

FString UDBDUtilities::GetActorOwnerName(AActor* actor) {
    return TEXT("");
}

EShadowSystem UDBDUtilities::GetActiveShadowSystem() {
    return EShadowSystem::CascadedShadowMap;
}

AActor* UDBDUtilities::FindParentOfClass(AActor* InChild, UClass* InClass) {
    return NULL;
}

bool UDBDUtilities::FindFloorSingle(UObject* WorldContextObject, FVector location, float raycastLength, FHitResult& outHit) {
    return false;
}

float UDBDUtilities::DistanceFromPointToPane(const FVector point, const FPlane plane) {
    return 0.0f;
}

UObject* UDBDUtilities::DBDLoadAudioBankByAssetPtr(TSoftObjectPtr<UAkAudioBank> bank, AActor* caller) {
    return NULL;
}

void UDBDUtilities::DBDLoadAudioBankAsync(UAkAudioBank* bank, AActor* caller) {
}

void UDBDUtilities::DBDLoadAudioBank(UAkAudioBank* bank, AActor* caller) {
}

bool UDBDUtilities::DBDCapsuleTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf) {
    return false;
}

void UDBDUtilities::CrashGameCausingInterrupt() {
}

bool UDBDUtilities::BoxTraceAgainstActor(const FVector start, const FVector end, const UBoxComponent* box, const AActor* actor, FHitResult& outHitResult) {
    return false;
}

UActorComponent* UDBDUtilities::AddComponentToActor(UClass* compClass, FName compName, AActor* actor) {
    return NULL;
}

UDBDUtilities::UDBDUtilities() {
}

