#pragma once

namespace backend::db {

class DBConnection {
public:
    static DBConnection& getInstance();
    void initialize();

private:
    DBConnection() = default;
    DBConnection(const DBConnection&) = delete;
    DBConnection& operator=(const DBConnection&) = delete;
};

} // namespace backend::db
