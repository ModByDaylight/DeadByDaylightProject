#include "ProceduralLevelBuilder.h"
#include "Net/UnrealNetwork.h"

class AActor;

void AProceduralLevelBuilder::SyncSeeds() {
}

void AProceduralLevelBuilder::StartGenerationOnSyncerReady() {
}

AActor* AProceduralLevelBuilder::SpawnActor(UClass* actorClass, ETileSpawnPointType spawnPointType) {
    return NULL;
}


void AProceduralLevelBuilder::OnMapLevelLoaded() {
}

void AProceduralLevelBuilder::Multicast_DebugShareGenerationData_Implementation(FGenerationParams usedParams) {
}

void AProceduralLevelBuilder::BuildFromSeed() {
}


void AProceduralLevelBuilder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProceduralLevelBuilder, _syncer);
}

AProceduralLevelBuilder::AProceduralLevelBuilder() {
    this->KillerMinProximityFromCamper = 3.00f;
    this->SurvivorMinProximityFromOtherCamper = 1.00f;
    this->MinProximityBetweenGenerators = 0.50f;
    this->MinProximityBetweenChests = 1.00f;
    this->MinProximityBetweenTotems = 1.00f;
    this->SurvivorMinProximityFromGenerator = 0.30f;
    this->SurvivorMinProximityFromTotem = 0.20f;
    this->SurvivorMaxLineOfSightFromTotem = 2.00f;
    this->MinProximityBetweenSpecialBehaviourItems = 0.50f;
    this->SpecialBehaviourItemMinProximityFromSurvivor = 0.50f;
    this->SpecialBehaviourItemMinProximityFromKiller = 0.50f;
    this->DebugMap = NULL;
    this->SmallMeatLockerMinProximityFromKillerLair = 1.50f;
    this->FactorToAdjustToWhenOutOfProximity = 0.00f;
    this->FactorToAdjustToWhenInLineOfSight = 0.00f;
    this->HeightAmplifier = 3.00f;
    this->HeightAmplifierActivationHeight = 350.00f;
    this->ProceduralGenerationData = NULL;
    this->TileWeightRateOfDecay = 0.00f;
    this->QuadTileWeightRateOfDecay = 0.01f;
    this->_mapData = NULL;
    this->_availableTilesLibrary = NULL;
    this->_availableDerivedTileLibrary = NULL;
    this->DesignTunableClass = NULL;
    this->_designTunables = NULL;
    this->_tileMatrix = NULL;
    this->_tileBank = NULL;
    this->_killerLairSpawner = NULL;
    this->_slasherPawn = NULL;
    this->_debugProceduralDatas = NULL;
    this->_syncer = NULL;
    this->_blackboardComp = NULL;
    this->_edgeObjectHandlingStrategy = NULL;
    this->_backupKillerLairTile = NULL;
}

