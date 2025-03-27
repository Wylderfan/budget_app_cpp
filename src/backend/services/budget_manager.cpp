#include "budget_manager.h"

namespace backend {
namespace services {

BudgetManager& BudgetManager::getInstance() {
    static BudgetManager instance;
    return instance;
}

void BudgetManager::initialize() {
    // Initialize budget manager components here
}

} // namespace services
} // namespace backend
