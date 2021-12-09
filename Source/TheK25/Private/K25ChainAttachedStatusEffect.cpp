#include "K25ChainAttachedStatusEffect.h"
#include "Net/UnrealNetwork.h"

void UK25ChainAttachedStatusEffect::OnRep_ChainAttachementComponent() {
}

void UK25ChainAttachedStatusEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UK25ChainAttachedStatusEffect, _chainAttachmentComponent);
}

UK25ChainAttachedStatusEffect::UK25ChainAttachedStatusEffect() {
    this->_percentageReductionSpeedPerChainCurve = NULL;
    this->_chainAttachmentComponent = NULL;
    this->_cachedNumberOfChainsAttached = 0;
}

