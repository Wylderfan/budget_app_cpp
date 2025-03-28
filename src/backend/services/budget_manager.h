#pragma once

namespace backend::services {

class BudgetManager {
public:
    static BudgetManager& getInstance();
    void initialize();

private:
    BudgetManager() = default;
    BudgetManager(const BudgetManager&) = delete;
    BudgetManager& operator=(const BudgetManager&) = delete;
};

} // namespace backend::services 