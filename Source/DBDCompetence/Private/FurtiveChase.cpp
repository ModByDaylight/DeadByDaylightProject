#include "FurtiveChase.h"

UFurtiveChase::UFurtiveChase() {
    this->_maxTokensByLevel[0] = 0;
    this->_maxTokensByLevel[1] = 0;
    this->_maxTokensByLevel[2] = 0;
    this->_terrorRadiusSuppressionPerToken = 400.00f;
}

