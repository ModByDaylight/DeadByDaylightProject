#include "DDoSDetectionAnalytics.h"

FDDoSDetectionAnalytics::FDDoSDetectionAnalytics() {
    this->NonConnPacketCounter = 0;
    this->NetConnPacketCounter = 0;
    this->DisconnPacketCounter = 0;
    this->BadPacketCounter = 0;
    this->ErrorPacketCounter = 0;
    this->DroppedPacketCounter = 0;
}

