#include "LamentConfigurationPlayerAnalyticsComponent.h"
#include "Net/UnrealNetwork.h"

void ULamentConfigurationPlayerAnalyticsComponent::OnRep_AnalyticsCount() {
}

void ULamentConfigurationPlayerAnalyticsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULamentConfigurationPlayerAnalyticsComponent, _analyticsCount);
    DOREPLIFETIME(ULamentConfigurationPlayerAnalyticsComponent, _possessionAnalytics);
}

ULamentConfigurationPlayerAnalyticsComponent::ULamentConfigurationPlayerAnalyticsComponent() {
    this->_analyticsCount = 0;
}

