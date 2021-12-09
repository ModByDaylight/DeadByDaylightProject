#include "CharacterTool.h"

ACharacterTool::ACharacterTool() {
    this->_animInstanceClass = NULL;
    this->_animated = true;
    this->UseInGameSkeleton = true;
    this->_showPower = false;
    this->_useMasterPoseForItems = true;
    this->_powerSocket = TEXT("Weapon_SocketLT");
    this->_powerAttachmentRule = EAttachmentRule::SnapToTarget;
    this->_lighting = NULL;
}

