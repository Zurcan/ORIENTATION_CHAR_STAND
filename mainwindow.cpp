#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsScene *scene = new QGraphicsScene;
    scene->addPixmap(QPixmap("C:/Users/User/Pictures/3.png"));
    ui->graphicsView->setScene(scene);
//    QRect centerSpacer,sideSpacers;
//    centerSpacer = ui->horizontalSpacer->geometry();
//    ui->horizontalSpacer->maximumSize().width() = 10;
//    ui->horizontalSpacer->setGeometry();
}

MainWindow::~MainWindow()
{
    delete ui;
}
