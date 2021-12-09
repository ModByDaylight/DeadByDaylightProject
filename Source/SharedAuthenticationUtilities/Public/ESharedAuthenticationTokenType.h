#pragma once
#include "CoreMinimal.h"
#include "ESharedAuthenticationTokenType.generated.h"

UENUM()
enum class ESharedAuthenticationTokenType {
    None,
    AccessToken,
    AuthorizationCode,
    IdentityToken,
};

