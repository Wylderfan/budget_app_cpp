#include "budget_manager.h"

namespace backend::services {

BudgetManager& BudgetManager::getInstance() {
    static BudgetManager instance;
    return instance;
}

void BudgetManager::initialize() {
    // TODO: Implement budget manager initialization
}

} // namespace backend::services
