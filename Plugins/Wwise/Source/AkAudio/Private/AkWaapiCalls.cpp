#include "AkWaapiCalls.h"

FAKWaapiJsonObject UAkWaapiCalls::Unsubscribe(const FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone) {
    return FAKWaapiJsonObject{};
}

FAKWaapiJsonObject UAkWaapiCalls::SubscribeToWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiOptions, const FAkWaapiCallsCallBack2& CallBack, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone) {
    return FAKWaapiJsonObject{};
}

void UAkWaapiCalls::SetSubscriptionID(const FAkWaapiSubscriptionId& Subscription, int32 id) {
}

bool UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(const FAkWaapiCallsCallback1& Callback) {
    return false;
}

bool UAkWaapiCalls::RegisterWaapiConnectionLostCallback(const FAkWaapiCallsCallback1& Callback) {
    return false;
}

int32 UAkWaapiCalls::GetSubscriptionID(const FAkWaapiSubscriptionId& Subscription) {
    return 0;
}

FText UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId) {
    return FText::GetEmpty();
}

FString UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId) {
    return TEXT("");
}

FAKWaapiJsonObject UAkWaapiCalls::CallWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiArgs, const FAKWaapiJsonObject& WaapiOptions) {
    return FAKWaapiJsonObject{};
}

UAkWaapiCalls::UAkWaapiCalls() {
}

