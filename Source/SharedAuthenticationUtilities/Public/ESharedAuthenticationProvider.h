#pragma once
#include "CoreMinimal.h"
#include "ESharedAuthenticationProvider.generated.h"

UENUM()
enum class ESharedAuthenticationProvider : uint8 {
    None,
    Facebook,
    Google,
    NetEase,
    Kraken,
    SignInWithApple,
};

