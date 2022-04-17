#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EScreenType.h"
#include "ScreenController.generated.h"

class UDBDGameInstance;
class UUserWidget;
class UScreenBase;
class UGFxObject;
class UGFxMoviePlayer;

UCLASS()
class DEADBYDAYLIGHT_API UScreenController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
    UPROPERTY(Transient)
    UGFxObject* _screenControllerObj;
    
    UPROPERTY(Transient)
    UGFxMoviePlayer* _moviePlayer;
    
    UPROPERTY(Transient)
    TMap<FString, UScreenBase*> _screenDictionary;
    
    UPROPERTY(Transient)
    TMap<FString, EScreenType> _screenTypeDictionary;
    
    UPROPERTY(Export, Transient)
    TMap<UClass*, TWeakObjectPtr<UUserWidget>> _cachedUMGScreens;
    
public:
    UScreenController();
};

