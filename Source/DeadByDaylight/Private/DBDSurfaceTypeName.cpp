#include "DBDSurfaceTypeName.h"

class UPhysicalMaterial;

TEnumAsByte<EPhysicalSurface> UDBDSurfaceTypeName::GetSurfaceType(const UPhysicalMaterial* physicalMaterial) {
    return SurfaceType_Default;
}

FString UDBDSurfaceTypeName::GetSurfaceName(const UPhysicalMaterial* physicalMaterial) {
    return TEXT("");
}

FName UDBDSurfaceTypeName::ConvertFromPhysicalMaterial(const UPhysicalMaterial* material) {
    return NAME_None;
}

FName UDBDSurfaceTypeName::Convert(const TEnumAsByte<EPhysicalSurface> surfaceType) {
    return NAME_None;
}

UDBDSurfaceTypeName::UDBDSurfaceTypeName() {
}

