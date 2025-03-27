#pragma once

namespace backend {
namespace db {

class DBConnection {
public:
    static DBConnection& getInstance();
    void initialize();

private:
    DBConnection() = default;
    ~DBConnection() = default;
    DBConnection(const DBConnection&) = delete;
    DBConnection& operator=(const DBConnection&) = delete;
};

} // namespace db
} // namespace backend
