#include "BatchMeshCommands.h"

class UTexture;
class UMaterialInterface;

void UBatchMeshCommands::UpdateMaterials() {
}

void UBatchMeshCommands::SetVectorParameter(const FName parameterName, const FVector& newValue) {
}

void UBatchMeshCommands::SetTextureParameter(const FName parameterName, UTexture* newTexture) {
}

void UBatchMeshCommands::SetStencilIntegerScalarParameter(const FName parameterName, const int32& newValue) {
}

void UBatchMeshCommands::SetScalarParameter(const FName parameterName, const float newValue) {
}

void UBatchMeshCommands::SetRenderInMainPass(bool inRenderInMainPass) {
}

void UBatchMeshCommands::SetRenderInCustomDepth(bool renderInCustomDepth) {
}

void UBatchMeshCommands::SetRenderInCustomColourNoDepth(bool renderInCustomColour) {
}

void UBatchMeshCommands::SetReceivesDecals(bool receivesDecals) {
}

void UBatchMeshCommands::SetMaterial(const FString& groupName) {
}

void UBatchMeshCommands::SetLightingChannelForAllMeshes(FLightingChannels lightingChannels) {
}

void UBatchMeshCommands::SetCustomDepthStencilValue(int32 stencilValue) {
}

void UBatchMeshCommands::SetColourParameter(const FName parameterName, const FLinearColor newValue) {
}

void UBatchMeshCommands::SetCastCinematicShadows(bool castCinematicShadows) {
}

void UBatchMeshCommands::SetAllToSameMaterial(UMaterialInterface* materialInterface) {
}

void UBatchMeshCommands::ResetMaterials() {
}

bool UBatchMeshCommands::CopyFirstScalarParameter(const FName parameterName, float& outValue) {
    return false;
}

void UBatchMeshCommands::BatchSetVisibility(bool bNewVisibility, bool bPropagateToChildren) {
}

void UBatchMeshCommands::BatchSetSkipComponentAndChildrenTransformUpdate(bool skip) {
}

void UBatchMeshCommands::BatchSetComponentTickEnabled(bool enabled) {
}

UBatchMeshCommands::UBatchMeshCommands() {
}

