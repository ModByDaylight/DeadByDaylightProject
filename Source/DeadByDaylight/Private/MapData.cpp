#include "MapData.h"

UMapData::UMapData() {
    this->MapWidth = 0;
    this->MapHeight = 0;
    this->Draft = false;
    this->Blackboard = NULL;
    this->Gesture = false;
    this->_proceduralGenerationData = NULL;
}

