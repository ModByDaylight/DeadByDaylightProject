#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "FriendsListScreen.generated.h"

UCLASS()
class UFriendsListScreen : public UScreenBase {
    GENERATED_BODY()
public:
    UFriendsListScreen();
private:
    UFUNCTION()
    void OnViewProfile(const FString& friendId);
    
    UFUNCTION()
    void OnUnblockPlayer(const FString& playerId);
    
    UFUNCTION()
    void OnSendPartyInvite(const FString& friendId);
    
    UFUNCTION()
    void OnSearchForFriend();
    
    UFUNCTION()
    void OnRemoveFriend(const FString& friendId);
    
    UFUNCTION()
    void OnPartyJoinRequest(const FString& friendId);
    
    UFUNCTION()
    void OnDeclineFriendInvite(const FString& friendId);
    
    UFUNCTION()
    void OnCancelFriendInvite(const FString& friendId);
    
    UFUNCTION()
    void OnBlockPlayer(const FString& playerId);
    
    UFUNCTION()
    void OnAcceptFriendInvite(const FString& friendId);
    
};

