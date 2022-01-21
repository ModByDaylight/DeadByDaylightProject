#pragma once
#include "CoreMinimal.h"
#include "FsCommandSignature.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFsCommandSignature, const FString&, Cmd, const FString&, Arg);

