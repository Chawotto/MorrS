#ifndef DEVELOPERMENU_H
#define DEVELOPERMENU_H

#include <QWidget>

class MainWindow;

namespace Ui {
    class DeveloperMenu;
}

class DeveloperMenu : public QWidget {
    Q_OBJECT

public:
    explicit DeveloperMenu(MainWindow *mainWin, QWidget *parent = nullptr);
    ~DeveloperMenu() override;

    private slots:
        void on_createButton_clicked();
        void on_readGamesButton_clicked();
        void on_findButton_clicked();
        void on_backButton_clicked();
        void on_updateButton_clicked();
        void on_deleteButton_clicked();

private:
    Ui::DeveloperMenu *ui;
    MainWindow *mainWindow;
};

#endif // DEVELOPERMENU_H