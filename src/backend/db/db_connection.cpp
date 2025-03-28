#include "db_connection.h"

namespace backend::db {

DBConnection& DBConnection::getInstance() {
    static DBConnection instance;
    return instance;
}

void DBConnection::initialize() {
    // TODO: Implement database initialization
}

} // namespace backend::db
