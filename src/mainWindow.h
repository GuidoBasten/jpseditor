#ifndef MAINWINDOW_H
#define MAINWINDOW_H



#include <QtGui>
#include <QLabel>
#include <QLineEdit>
#include "ui_mainwindow.h"
#include "roomwidget.h"
#include "GraphicView.h"
#include "datamanager.h"
#include "rooms.h"


class MWindow : public QMainWindow, private Ui::MainWindow {

    Q_OBJECT
public:
    MWindow();
    ~MWindow();

private:
    roomWidget* rwidget;
    jpsDatamanager* dmanager;
    jpsGraphicsView* mview;
    //QVBoxLayout* VBox;
    QLineEdit* length_edit;
    QLabel* label1;
    QLabel* label2;
    QLabel* infoLabel;


protected slots:
    void openFile();
    void saveFile();
    void saveAsDXF();
    void info();
    void gridmode();
    void en_disableWall();
    void en_disableDoor();
    void en_disableExit();
    void objectsnap();
    void show_coords();
    void delete_lines();
    void delete_marked_lines();
    void send_length();
    void define_room();
    void en_selectMode();
    void dis_selectMode();
    void lines_deleted();
    void remove_all_lines();


};


#endif // MAINWINDOW_H
