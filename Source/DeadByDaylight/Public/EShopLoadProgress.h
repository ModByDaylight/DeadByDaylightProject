#pragma once
#include "CoreMinimal.h"
#include "EShopLoadProgress.generated.h"

UENUM()
enum class EShopLoadProgress {
    None,
    LoadCatalog,
    LoadCurrencyPacks,
    PlatformStoreCatalog,
    Inventory,
    Wallet,
    FeaturedPageContent,
};

