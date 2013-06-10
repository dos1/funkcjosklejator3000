#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractButton>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
		Q_OBJECT
		
	public:
		explicit MainWindow(QWidget *parent = 0);
		~MainWindow();
		
	public slots:
			void buttonBox(QAbstractButton* btn);

	private:
		Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
