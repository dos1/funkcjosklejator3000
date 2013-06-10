#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "cspl.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	connect(ui->buttonBox, SIGNAL(clicked(QAbstractButton*)), this, SLOT(buttonBox(QAbstractButton*)));
}

void MainWindow::buttonBox(QAbstractButton* btn) {
	QDialogButtonBox::StandardButton stdButton = ui->buttonBox->standardButton(btn);
	switch (stdButton) {
		case QDialogButtonBox::Apply:
			ui->label_2->hide();
			break;
		case QDialogButtonBox::Reset:
			ui->label_3->hide();
			break;
		default:
			break;
	}
}

MainWindow::~MainWindow()
{
	delete ui;
}
