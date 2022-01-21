#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "DBDAITypes.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDAITypes : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Root;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Task_Slasher_AttackTarget;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Slasher_AttackTarget;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Task_Slasher_CrawlingTarget;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Slasher_CrawlingTarget;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Slasher_Investigate_NotInChase;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Slasher_Investigate_InChase;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Slasher_Investigate_MoveAround;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Slasher_Patrol;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Slasher_Patrol_MoveAround;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Camper_Standing;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Camper_Flee_Run_InChase;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Camper_Flee_Run_NotInChase;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Camper_Patrol;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Camper_RescueCarriedFriend;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Camper_RemoveTrap;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Camper_Chained;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Camper_HelpOther;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Camper_GoalInTerror;
    
    UPROPERTY()
    FGameplayTag AISkills_Context_Service_Camper_Carried;
    
    UPROPERTY()
    FGameplayTag AIBlackboard_InteractableWishList_FindSkill;
    
    UPROPERTY()
    FGameplayTag AI_PointOfInterest_ActivatedDoor;
    
    UPROPERTY()
    FGameplayTag AI_PointOfInterest_ActivatedDoor_Opened;
    
    UPROPERTY()
    FGameplayTag AI_PointOfInterest_BrokenGenerator;
    
    UPROPERTY()
    FGameplayTag AI_PointOfInterest_OccupiedMeatHook;
    
    UPROPERTY()
    FGameplayTag AI_PointOfInterest_HexTotem;
    
    UPROPERTY()
    FGameplayTag AI_PinLocation_WarpStart;
    
    UPROPERTY()
    FGameplayTag AI_PinLocation_WarpEnd;
    
    UPROPERTY()
    FGameplayTag AI_PinLocation_EQS;
    
    UPROPERTY()
    FGameplayTag AI_PinLocation_WishedObj;
    
    UPROPERTY()
    FGameplayTag AI_PinLocation_GoTo;
    
    UPROPERTY()
    FGameplayTag AI_PinObject_EQS;
    
    UPROPERTY()
    FGameplayTag AI_PinObject_WishedObj;
    
    UDBDAITypes();
};

