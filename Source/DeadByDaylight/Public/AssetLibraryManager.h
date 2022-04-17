#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AssetLibraryLoader.h"
#include "AssetLibraryManager.generated.h"

class UShopManager;
class UGameAssetLibrary;
class UCharacterItemsAssetLibrary;
class UIniAssetLibrary;
class UTutorialAssetLibrary;
class UMenuAssetLibrary;

UCLASS(Config=Game)
class UAssetLibraryManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UObject* _worldContextObject;
    
    UPROPERTY(Transient)
    TMap<int32, UCharacterItemsAssetLibrary*> _characterItemsAssetLibrary;
    
    UPROPERTY(Transient)
    UIniAssetLibrary* _globalAssetLibrary;
    
    UPROPERTY(Transient)
    UMenuAssetLibrary* _menuAssetLibrary;
    
    UPROPERTY(Transient)
    UGameAssetLibrary* _gameAssetLibrary;
    
    UPROPERTY(Transient)
    UTutorialAssetLibrary* _tutorialAssetLibrary;
    
    UPROPERTY(Transient)
    UShopManager* _shopManager;
    
    UPROPERTY(Transient)
    TArray<FAssetLibraryLoader> _loadingList;
    
    UPROPERTY(Config)
    int32 CharacterItemsAssetLoadCountPerChunk;
    
    UPROPERTY(Config)
    int32 BlindPackAssetLoadCountPerChunk;
    
    UPROPERTY(Config)
    int32 MenuAssetLoadCountPerChunk;
    
    UPROPERTY(Config)
    int32 GlobalAssetLoadCountPerChunk;
    
    UPROPERTY(Config)
    int32 GameAssetLoadCountPerChunk;
    
public:
    UAssetLibraryManager();
};

