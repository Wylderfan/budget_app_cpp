#pragma once

namespace backend {
namespace services {

class BudgetManager {
public:
    static BudgetManager& getInstance();
    void initialize();

private:
    BudgetManager() = default;
    ~BudgetManager() = default;
    BudgetManager(const BudgetManager&) = delete;
    BudgetManager& operator=(const BudgetManager&) = delete;
};

} // namespace services
} // namespace backend 