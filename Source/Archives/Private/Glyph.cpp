#include "Glyph.h"
#include "Net/UnrealNetwork.h"
#include "DBDOutlineComponent.h"
#include "ChargeableComponent.h"
#include "GlyphInteraction.h"
#include "Interactor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NearTrackedActorComponent.h"

class ADBDPlayer;
class AActor;

void AGlyph::OnRep_PlayersWithVisibility() {
}

bool AGlyph::DoesLocalPlayerHaveVisibility() {
    return false;
}





void AGlyph::Authority_TrackPlayerWithBehaviourID(const ADBDPlayer* dbdPlayer) {
}

void AGlyph::Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, const AActor* trackedActor) {
}

void AGlyph::Authority_OnIntroCompleted() {
}


void AGlyph::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGlyph, _playersWithVisibility);
    DOREPLIFETIME(AGlyph, _isGlyphActivatedForPlayer);
    DOREPLIFETIME(AGlyph, _playersThatInteractedWithGlyph);
}

AGlyph::AGlyph() {
    this->_allowedPlayerType = EAllowedPlayerType::All;
    this->_grantChallengeProgress = true;
    this->_isAlwaysActivated = true;
    this->_glyphInteraction = CreateDefaultSubobject<UGlyphInteraction>(TEXT("GlyphInteraction"));
    this->_glyphInteractionKiller = CreateDefaultSubobject<UGlyphInteraction>(TEXT("GlyphInteractionKiller"));
    this->_glyphInteractionChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("GlyphInteractionChargeable"));
    this->_glyphInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("GlyphInteractionChargeableKiller"));
    this->_glyphInteractor = CreateDefaultSubobject<UInteractor>(TEXT("GlyphInteractor"));
    this->_glyphInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("GlyphInteractionZone"));
    this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
    this->_glyphMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GlyphMesh"));
    this->_nearTrackedActorComponent = CreateDefaultSubobject<UNearTrackedActorComponent>(TEXT("NearPlayerTracker"));
}

