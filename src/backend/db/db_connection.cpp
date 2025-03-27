#include "db_connection.h"

namespace backend {
namespace db {

DBConnection& DBConnection::getInstance() {
    static DBConnection instance;
    return instance;
}

void DBConnection::initialize() {
    // Initialize database connection here
}

} // namespace db
} // namespace backend
