#include "AkGeometryComponent.h"

void UAkGeometryComponent::UpdateGeometry() {
}

void UAkGeometryComponent::RemoveGeometry() {
}

void UAkGeometryComponent::ConvertMesh() {
}

UAkGeometryComponent::UAkGeometryComponent() {
    this->MeshType = AkMeshType::StaticMesh;
    this->LOD = 0;
    this->bEnableDiffraction = true;
    this->bEnableDiffractionOnBoundaryEdges = false;
    this->AssociatedRoom = NULL;
}

