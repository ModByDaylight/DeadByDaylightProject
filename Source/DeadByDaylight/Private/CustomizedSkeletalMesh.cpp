#include "CustomizedSkeletalMesh.h"

class USkeletalMeshComponent;
class USkinnedMeshComponent;
class UCustomizedSkeletalMesh;

void UCustomizedSkeletalMesh::SetVfxsVisibility(ECustomizationCategory category, bool visible) {
}

void UCustomizedSkeletalMesh::SetMeshVisibility(bool visible) {
}

void UCustomizedSkeletalMesh::SetMeshOwner(USkinnedMeshComponent* mesh) {
}

void UCustomizedSkeletalMesh::SetCastShadow(bool castShadow) {
}

void UCustomizedSkeletalMesh::SetAllVfxsVisibility(bool visible) {
}

USkeletalMeshComponent* UCustomizedSkeletalMesh::GetSkeletalMesh(ECustomizationCategory category) const {
    return NULL;
}

USkinnedMeshComponent* UCustomizedSkeletalMesh::GetMeshOwner() {
    return NULL;
}

TArray<FName> UCustomizedSkeletalMesh::GetCurrentCustomizationItems() const {
    return TArray<FName>();
}

TArray<USkeletalMeshComponent*> UCustomizedSkeletalMesh::GetComponents() const {
    return TArray<USkeletalMeshComponent*>();
}

void UCustomizedSkeletalMesh::CopyCustomization(const UCustomizedSkeletalMesh* copyFrom) {
}

bool UCustomizedSkeletalMesh::Contains(TArray<FName> itemIds) const {
    return false;
}

void UCustomizedSkeletalMesh::ClearAllVfxs() {
}

UCustomizedSkeletalMesh::UCustomizedSkeletalMesh() {
    this->SlaveAnimInstanceClass = NULL;
    this->_meshOwner = NULL;
    this->_characterIdOverride = -1;
}

