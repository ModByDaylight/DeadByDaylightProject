#include "BubbleIndicatorNotifier.h"
#include "Templates/SubclassOf.h"

class UStaticMesh;
class ABubbleIndicator;
class UObject;

void UBubbleIndicatorNotifier::SpawnBubbleIndicator(UObject* worldContextObject, TSubclassOf<ABubbleIndicator> bubbleIndicatorBP, FTransform transform, bool triggerLoudNoise, bool spawnOnKillerSideOnly, float lifetime, UStaticMesh* silhouetteStaticMesh, float audibleRange) {
}

UBubbleIndicatorNotifier::UBubbleIndicatorNotifier() {
}

