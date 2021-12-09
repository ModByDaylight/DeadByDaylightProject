#include "Presenter.h"

UPresenter::UPresenter() {
    this->RequestPresentationAtBeginPlay = true;
    this->InitialVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->_widget = NULL;
}

