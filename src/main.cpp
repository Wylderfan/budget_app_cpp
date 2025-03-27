#include <QApplication>
#include <QMainWindow>
#include "frontend/widgets/widget_init.h"
#include "frontend/dialogs/dialog_init.h"
#include "backend/services/budget_manager.h"
#include "backend/db/db_connection.h"
#include "backend/models/budget.h"

using namespace backend::db;
using namespace backend::services;
using namespace frontend::widgets;
using namespace frontend::dialogs;

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    // Initialize database connection
    DBConnection::getInstance().initialize();
    
    // Initialize budget manager
    BudgetManager::getInstance().initialize();
    
    // Initialize widgets
    WidgetInitializer::initialize();
    
    // Initialize dialogs
    DialogInitializer::initialize();
    
    // Create and show main window
    QMainWindow mainWindow;
    mainWindow.show();
    
    return app.exec();
}
