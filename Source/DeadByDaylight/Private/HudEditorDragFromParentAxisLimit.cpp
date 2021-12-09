#include "HudEditorDragFromParentAxisLimit.h"

FHudEditorDragFromParentAxisLimit::FHudEditorDragFromParentAxisLimit() {
    this->Enable = false;
    this->AxisOption = EHudEditorDragAxisOption::PositiveSide;
    this->MinDragDistance = 0.00f;
    this->ScaleMinDragDistanceWithParent = false;
    this->MaxDragDistance = 0.00f;
    this->ScaleMaxDragDistanceWithParent = false;
}

