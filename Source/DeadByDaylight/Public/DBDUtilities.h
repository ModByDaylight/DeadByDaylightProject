#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EPlayerRole.h"
#include "Engine/EngineTypes.h"
#include "EShadowSystem.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DBDUtilities.generated.h"

class UDBDGameInstance;
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
class UMaterialHelper;
class UActorComponent;
class ADBDPlayer;
class UMaterialInterface;
class ADBDPlayerCameraManager;
class UActorSpawner;
class ADBDGameMode;
class ADBDAIPlayerController;
class AProceduralLevelBuilder;
class UAkAudioBank;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDUtilities();
    UFUNCTION(BlueprintPure)
    static bool WithinRangeExclusive(float min, float max, float value);
    
    UFUNCTION(BlueprintPure)
    static bool WithinRange(float min, float max, float value);
    
    UFUNCTION(BlueprintPure)
    static float ToAngle_negative180to180(float angle);
    
    UFUNCTION(BlueprintPure)
    static bool SphereTraceSingle(const FVector start, const FVector end, const USphereComponent* sphere, FHitResult& outHitResult, const TArray<AActor*>& ignoredActors);
    
    UFUNCTION(BlueprintPure)
    static bool SphereTraceAgainstActor(const FVector start, const FVector end, const USphereComponent* sphere, const AActor* actor, FHitResult& outHitResult);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentCastHiddenShadow(UPrimitiveComponent* component, bool castShadow);
    
    UFUNCTION(BlueprintCallable)
    static int32 ResolveCharacterIdFromPlayerState(const ADBDPlayerState* playerState);
    
    UFUNCTION(BlueprintCallable)
    static void PrintStringEmbiggened(UObject* WorldContextObject, const FString& InString, FLinearColor TextColor, float Duration, int32 Key, float Scale);
    
    UFUNCTION(BlueprintPure)
    static int32 PointerToInt(UObject* obj);
    
    UFUNCTION(BlueprintCallable)
    static bool NormalizeXY(FVector& vector, float tolerance);
    
    UFUNCTION(BlueprintCallable)
    static void LogString(const FString& inStr);
    
    UFUNCTION(BlueprintCallable)
    static void LogMeshMaterialInfo(const FString& inStr, const UMeshComponent* root);
    
    UFUNCTION(BlueprintPure)
    static bool IsServer(const UObject* worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsReplaceDisconnectedPlayersWithBotsActive();
    
    UFUNCTION(BlueprintPure)
    static bool IsNonViolent();
    
    UFUNCTION(BlueprintPure)
    static bool IsLocallyObservingASurvivor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsLocallyObservingAKiller(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsInTutorialLevel();
    
    UFUNCTION(BlueprintPure)
    static bool IsInSurvivorTeam(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsInKillerTeam(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool HasWalkableSurfaceForward(UObject* WorldContextObject, FVector location, FVector fowardVector, float distance, float raycastStartHeight, float raycastEndHeight, TArray<FHitResult>& outHits, FVector& raycastStart);
    
    UFUNCTION(BlueprintPure)
    static bool HasLineOfSightToTarget(UObject* WorldContextObject, const FVector& startPosition, const FVector& targetPosition, const AActor* ignoredActor, const bool useComplex);
    
    UFUNCTION(BlueprintCallable)
    static bool HasFloorForward(UObject* WorldContextObject, FVector location, FVector fowardVector, float distance, float raycastStartHeight, float raycastEndHeight, TArray<FHitResult>& outHits, FVector& raycastStart);
    
    UFUNCTION(BlueprintPure)
    static FRotator GetYawOnly(const FRotator& rotation);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetXYVector(const FVector& vector);
    
    UFUNCTION(BlueprintCallable)
    static float GetVelocityXYAngleDegrees(const AActor* actor);
    
    UFUNCTION(BlueprintPure)
    static void GetTileSpawnPoints(TArray<UTileSpawnPoint*>& tileSpawnPoints);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AGenerator*> GetThreeClosestGenerators(const TArray<AGenerator*>& unrevealedGenerators);
    
    UFUNCTION(BlueprintPure)
    static float GetSlasherTunableValue(UObject* WorldContextObject, FName valueName);
    
    UFUNCTION(BlueprintPure)
    static ASlasherPlayer* GetSlasher(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FVector GetSimilarVector(FVector vector, float maximumDeviation);
    
    UFUNCTION(BlueprintPure)
    static float GetPlayRateForMontage(UAnimMontage* montage, float time);
    
    UFUNCTION(BlueprintCallable)
    static float GetPercentOfRange(const float val, const float min, const float max);
    
    UFUNCTION(BlueprintPure)
    static ASlasherPlayer* GetOwningSlasher(const UAnimInstance* animInstance);
    
    UFUNCTION(BlueprintPure)
    static ADBDBasePlayer* GetOwningDBDBasePlayer(const UAnimInstance* animInstance);
    
    UFUNCTION(BlueprintPure)
    static USkeletalMeshComponent* GetOwningCharacterSkeletalMeshComponent(const UAnimInstance* animInstance);
    
    UFUNCTION(BlueprintPure)
    static ACamperPlayer* GetOwningCamper(const UAnimInstance* animInstance);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetOuterMostActor(const UAnimInstance* animInstance);
    
    UFUNCTION(BlueprintCallable)
    static void GetNearbyCampers(UWorld* world, FVector center, float radius, TArray<ACamperPlayer*>& outNearbyCampers, const TArray<AActor*>& ignoredCampers);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNearbyActorsOfType(UWorld* world, FVector center, float radius, TArray<AActor*>& outNearbyActors, UClass* actorClassType, TEnumAsByte<ECollisionChannel> collisionChannel, AActor* ignoreActor);
    
    UFUNCTION(BlueprintPure)
    static float GetMontageLength(UAnimMontage* montage);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMaterialHelper*> GetMaterialHelpersAttachedToPlayerMesh(const ADBDPlayer* player);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLogStringMaterialInfo(const FString& inStr, const UMaterialInterface* root);
    
    UFUNCTION(BlueprintPure)
    static EPlayerRole GetLocallyObservedCharacterRole(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ADBDPlayer* GetLocallyObservedCharacter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ACamperPlayer* GetLocallyControlledSurvivor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ASlasherPlayer* GetLocallyControlledKiller(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static EPlayerRole GetLocallyControlledCharacterRole(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ADBDPlayer* GetLocallyControlledCharacter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ADBDPlayerControllerBase* GetLocalDBDPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static ADBDPlayerCameraManager* GetLocalDBDCameraManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 GetInventoryCountForMultipleCharacters(UObject* worldContextObject, TArray<int32> characterIndexes, FName itemID);
    
    UFUNCTION(BlueprintPure)
    static int32 GetInventoryCount(UObject* worldContextObject, int32 characterIndex, FName itemID);
    
    UFUNCTION(BlueprintPure)
    static TSet<ACamperPlayer*> GetInGameSurvivorsByRef(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static TArray<ACamperPlayer*> GetInGameSurvivors(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static TArray<ADBDPlayer*> GetInGamePlayers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FCollisionResponseContainer GetImpactCollisionResponseContainer(const UPrimitiveComponent* primitive);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<ECollisionChannel> GetImpactCollisionObjectType(const UPrimitiveComponent* primitive);
    
    UFUNCTION(BlueprintCallable)
    static FText GetFormattedNumberText(float value, int32 maxDecimals, int32 minDecimals, bool leadingZero);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFormattedNumberString(float value, int32 maxDecimals, int32 minDecimals, bool leadingZero);
    
    UFUNCTION(BlueprintPure)
    static FVector GetFloorLocationAt(UObject* WorldContextObject, FVector location, float raycastStartHeight, float raycastEndHeight, bool useComplex);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetFirstActorWithTag(FName tag, const TArray<AActor*>& actorsArray);
    
    UFUNCTION(BlueprintPure)
    static float GetEndGameTunableValue(UObject* worldContextObject, FName valueName);
    
    UFUNCTION(BlueprintPure)
    static float GetDistanceToNearestHookedSurvivor(const ADBDPlayer* player);
    
    UFUNCTION(BlueprintPure)
    static ADBDGameState* GetDBDGameState(const UObject* worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ADBDGameMode* GetDBDGameMode(const UObject* worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UDBDGameInstance* GetDBDGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ADBDAIPlayerController* GetDBDAIPlayerController(ADBDPlayer* player);
    
    UFUNCTION(BlueprintPure)
    static FName GetCurrentCharacterName(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetComponentOwnerName(UActorComponent* actorComponent);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetClosestSnapTransformOnOrbit(const FVector& centerPoint, const FVector& orbitterPosition, const float distance);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetClosestPointOnOrbit(const FVector& centerPoint, const FVector& orbitterPosition, const float distance);
    
    UFUNCTION(BlueprintPure)
    static AProceduralLevelBuilder* GetBuilder(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float GetAnimSequenceLength(const UAnimSequence* sequence);
    
    UFUNCTION(BlueprintPure)
    static void GetActorSpawners(TArray<UActorSpawner*>& actorSpawners);
    
    UFUNCTION(BlueprintCallable)
    static FString GetActorOwnerName(AActor* actor);
    
    UFUNCTION(BlueprintCallable)
    static EShadowSystem GetActiveShadowSystem();
    
    UFUNCTION(BlueprintCallable)
    static AActor* FindParentOfClass(AActor* InChild, UClass* InClass);
    
    UFUNCTION(BlueprintCallable)
    static bool FindFloorSingle(UObject* WorldContextObject, FVector location, float raycastLength, FHitResult& outHit);
    
    UFUNCTION(BlueprintPure)
    static float DistanceFromPointToPane(const FVector point, const FPlane plane);
    
    UFUNCTION(BlueprintCallable)
    static UObject* DBDLoadAudioBankByAssetPtr(TSoftObjectPtr<UAkAudioBank> bank, AActor* caller);
    
    UFUNCTION(BlueprintCallable)
    static void DBDLoadAudioBankAsync(UAkAudioBank* bank, AActor* caller);
    
    UFUNCTION(BlueprintCallable)
    static void DBDLoadAudioBank(UAkAudioBank* bank, AActor* caller);
    
    UFUNCTION(BlueprintCallable)
    static bool DBDCapsuleTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf);
    
    UFUNCTION(BlueprintCallable)
    static void CrashGameCausingInterrupt();
    
    UFUNCTION(BlueprintPure)
    static bool BoxTraceAgainstActor(const FVector start, const FVector end, const UBoxComponent* box, const AActor* actor, FHitResult& outHitResult);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddComponentToActor(UClass* compClass, FName compName, AActor* actor);
    
};

