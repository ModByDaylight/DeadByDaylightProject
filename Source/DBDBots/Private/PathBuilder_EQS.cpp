#include "PathBuilder_EQS.h"

UPathBuilder_EQS::UPathBuilder_EQS() {
    this->NbMaxEQSRequests = 5;
    this->MergeToSinglePathPoint = true;
    this->_pendingEQSRequestBuilder = NULL;
}

