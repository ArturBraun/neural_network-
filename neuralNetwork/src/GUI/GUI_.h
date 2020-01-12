/********************************************************************************
** Form generated from reading UI file 'GUI.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIClass
{
public:
	QAction* actionNowy;
	QWidget* centralWidget;
	QGridLayout* gridLayout_4;
	QGroupBox* ParametersGroupBox;
	QGridLayout* gridLayout_2;
	QLabel* RadiusLabel;
	QLineEdit* RadiusLineEdit;
	QLabel* TextureLabel;
	QLineEdit* TextureLineEdit;
	QLabel* PerimeterLabel;
	QLineEdit* PerimeterLineEdit;
	QLabel* AreaLabel;
	QLineEdit* AreaLineEdit;
	QLabel* SmoothnessLabel;
	QLineEdit* SmoothnessLineEdit;
	QLabel* CompactnessLabel;
	QLineEdit* CompactnessLineEdit;
	QLabel* ConcavityLabel;
	QLineEdit* ConcavityLineEdit;
	QLabel* ConcavePointsLabel;
	QLineEdit* ConcavePointsLineEdit;
	QLabel* SymmetryLabel;
	QLineEdit* SymmetryLineEdit;
	QLabel* FractalDimensionLabel;
	QLineEdit* FractalDimensionLineEdit;
	QFrame* PushButtonsFrame;
	QGridLayout* gridLayout_3;
	QPushButton* RunProcessPushButton;
	QFrame* LogsFrame;
	QGridLayout* gridLayout;
	QLabel* LogsLabel;
	QTextEdit* LogsTextEdit;
	QMenuBar* menuBar;
	QMenu* menuPlik;
	QToolBar* mainToolBar;
	QStatusBar* statusBar;

	void setupUi(QMainWindow* GUIClass)
	{
		if (GUIClass->objectName().isEmpty())
			GUIClass->setObjectName(QString::fromUtf8("GUIClass"));
		GUIClass->resize(600, 900);
		actionNowy = new QAction(GUIClass);
		actionNowy->setObjectName(QString::fromUtf8("actionNowy"));
		centralWidget = new QWidget(GUIClass);
		centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
		gridLayout_4 = new QGridLayout(centralWidget);
		gridLayout_4->setSpacing(6);
		gridLayout_4->setContentsMargins(11, 11, 11, 11);
		gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
		ParametersGroupBox = new QGroupBox(centralWidget);
		ParametersGroupBox->setObjectName(QString::fromUtf8("ParametersGroupBox"));
		gridLayout_2 = new QGridLayout(ParametersGroupBox);
		gridLayout_2->setSpacing(6);
		gridLayout_2->setContentsMargins(11, 11, 11, 11);
		gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
		RadiusLabel = new QLabel(ParametersGroupBox);
		RadiusLabel->setObjectName(QString::fromUtf8("RadiusLabel"));

		gridLayout_2->addWidget(RadiusLabel, 0, 0, 1, 1);

		RadiusLineEdit = new QLineEdit(ParametersGroupBox);
		RadiusLineEdit->setObjectName(QString::fromUtf8("RadiusLineEdit"));

		gridLayout_2->addWidget(RadiusLineEdit, 0, 1, 1, 1);

		TextureLabel = new QLabel(ParametersGroupBox);
		TextureLabel->setObjectName(QString::fromUtf8("TextureLabel"));

		gridLayout_2->addWidget(TextureLabel, 1, 0, 1, 1);

		TextureLineEdit = new QLineEdit(ParametersGroupBox);
		TextureLineEdit->setObjectName(QString::fromUtf8("TextureLineEdit"));

		gridLayout_2->addWidget(TextureLineEdit, 1, 1, 1, 1);

		PerimeterLabel = new QLabel(ParametersGroupBox);
		PerimeterLabel->setObjectName(QString::fromUtf8("PerimeterLabel"));

		gridLayout_2->addWidget(PerimeterLabel, 2, 0, 1, 1);

		PerimeterLineEdit = new QLineEdit(ParametersGroupBox);
		PerimeterLineEdit->setObjectName(QString::fromUtf8("PerimeterLineEdit"));

		gridLayout_2->addWidget(PerimeterLineEdit, 2, 1, 1, 1);

		AreaLabel = new QLabel(ParametersGroupBox);
		AreaLabel->setObjectName(QString::fromUtf8("AreaLabel"));

		gridLayout_2->addWidget(AreaLabel, 3, 0, 1, 1);

		AreaLineEdit = new QLineEdit(ParametersGroupBox);
		AreaLineEdit->setObjectName(QString::fromUtf8("AreaLineEdit"));

		gridLayout_2->addWidget(AreaLineEdit, 3, 1, 1, 1);

		SmoothnessLabel = new QLabel(ParametersGroupBox);
		SmoothnessLabel->setObjectName(QString::fromUtf8("SmoothnessLabel"));

		gridLayout_2->addWidget(SmoothnessLabel, 4, 0, 1, 1);

		SmoothnessLineEdit = new QLineEdit(ParametersGroupBox);
		SmoothnessLineEdit->setObjectName(QString::fromUtf8("SmoothnessLineEdit"));

		gridLayout_2->addWidget(SmoothnessLineEdit, 4, 1, 1, 1);

		CompactnessLabel = new QLabel(ParametersGroupBox);
		CompactnessLabel->setObjectName(QString::fromUtf8("CompactnessLabel"));

		gridLayout_2->addWidget(CompactnessLabel, 5, 0, 1, 1);

		CompactnessLineEdit = new QLineEdit(ParametersGroupBox);
		CompactnessLineEdit->setObjectName(QString::fromUtf8("CompactnessLineEdit"));

		gridLayout_2->addWidget(CompactnessLineEdit, 5, 1, 1, 1);

		ConcavityLabel = new QLabel(ParametersGroupBox);
		ConcavityLabel->setObjectName(QString::fromUtf8("ConcavityLabel"));

		gridLayout_2->addWidget(ConcavityLabel, 6, 0, 1, 1);

		ConcavityLineEdit = new QLineEdit(ParametersGroupBox);
		ConcavityLineEdit->setObjectName(QString::fromUtf8("ConcavityLineEdit"));

		gridLayout_2->addWidget(ConcavityLineEdit, 6, 1, 1, 1);

		ConcavePointsLabel = new QLabel(ParametersGroupBox);
		ConcavePointsLabel->setObjectName(QString::fromUtf8("ConcavePointsLabel"));

		gridLayout_2->addWidget(ConcavePointsLabel, 7, 0, 1, 1);

		ConcavePointsLineEdit = new QLineEdit(ParametersGroupBox);
		ConcavePointsLineEdit->setObjectName(QString::fromUtf8("ConcavePointsLineEdit"));

		gridLayout_2->addWidget(ConcavePointsLineEdit, 7, 1, 1, 1);

		SymmetryLabel = new QLabel(ParametersGroupBox);
		SymmetryLabel->setObjectName(QString::fromUtf8("SymmetryLabel"));

		gridLayout_2->addWidget(SymmetryLabel, 8, 0, 1, 1);

		SymmetryLineEdit = new QLineEdit(ParametersGroupBox);
		SymmetryLineEdit->setObjectName(QString::fromUtf8("SymmetryLineEdit"));

		gridLayout_2->addWidget(SymmetryLineEdit, 8, 1, 1, 1);

		FractalDimensionLabel = new QLabel(ParametersGroupBox);
		FractalDimensionLabel->setObjectName(QString::fromUtf8("FractalDimensionLabel"));

		gridLayout_2->addWidget(FractalDimensionLabel, 9, 0, 1, 1);

		FractalDimensionLineEdit = new QLineEdit(ParametersGroupBox);
		FractalDimensionLineEdit->setObjectName(QString::fromUtf8("FractalDimensionLineEdit"));

		gridLayout_2->addWidget(FractalDimensionLineEdit, 9, 1, 1, 1);


		gridLayout_4->addWidget(ParametersGroupBox, 0, 0, 1, 1);

		PushButtonsFrame = new QFrame(centralWidget);
		PushButtonsFrame->setObjectName(QString::fromUtf8("PushButtonsFrame"));
		PushButtonsFrame->setFrameShape(QFrame::StyledPanel);
		PushButtonsFrame->setFrameShadow(QFrame::Raised);
		gridLayout_3 = new QGridLayout(PushButtonsFrame);
		gridLayout_3->setSpacing(6);
		gridLayout_3->setContentsMargins(11, 11, 11, 11);
		gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
		RunProcessPushButton = new QPushButton(PushButtonsFrame);
		RunProcessPushButton->setObjectName(QString::fromUtf8("RunProcessPushButton"));

		gridLayout_3->addWidget(RunProcessPushButton, 0, 0, 1, 1);


		gridLayout_4->addWidget(PushButtonsFrame, 0, 1, 1, 1);

		LogsFrame = new QFrame(centralWidget);
		LogsFrame->setObjectName(QString::fromUtf8("LogsFrame"));
		LogsFrame->setFrameShape(QFrame::StyledPanel);
		LogsFrame->setFrameShadow(QFrame::Raised);
		gridLayout = new QGridLayout(LogsFrame);
		gridLayout->setSpacing(6);
		gridLayout->setContentsMargins(11, 11, 11, 11);
		gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
		LogsLabel = new QLabel(LogsFrame);
		LogsLabel->setObjectName(QString::fromUtf8("LogsLabel"));
		QFont font;
		font.setPointSize(20);
		LogsLabel->setFont(font);

		gridLayout->addWidget(LogsLabel, 0, 0, 1, 1);

		LogsTextEdit = new QTextEdit(LogsFrame);
		LogsTextEdit->setObjectName(QString::fromUtf8("LogsTextEdit"));
		LogsTextEdit->setEnabled(true);
		LogsTextEdit->setReadOnly(true);

		gridLayout->addWidget(LogsTextEdit, 1, 0, 1, 1);


		gridLayout_4->addWidget(LogsFrame, 1, 0, 1, 2);

		GUIClass->setCentralWidget(centralWidget);
		menuBar = new QMenuBar(GUIClass);
		menuBar->setObjectName(QString::fromUtf8("menuBar"));
		menuBar->setGeometry(QRect(0, 0, 600, 18));
		menuPlik = new QMenu(menuBar);
		menuPlik->setObjectName(QString::fromUtf8("menuPlik"));
		GUIClass->setMenuBar(menuBar);
		mainToolBar = new QToolBar(GUIClass);
		mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
		GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
		statusBar = new QStatusBar(GUIClass);
		statusBar->setObjectName(QString::fromUtf8("statusBar"));
		GUIClass->setStatusBar(statusBar);

		menuBar->addAction(menuPlik->menuAction());
		menuPlik->addAction(actionNowy);

		retranslateUi(GUIClass);

		QMetaObject::connectSlotsByName(GUIClass);
	} // setupUi

	void retranslateUi(QMainWindow* GUIClass)
	{
		GUIClass->setWindowTitle(QCoreApplication::translate("GUIClass", "GUI", nullptr));
		actionNowy->setText(QCoreApplication::translate("GUIClass", "New", nullptr));
		ParametersGroupBox->setTitle(QCoreApplication::translate("GUIClass", "Parameters", nullptr));
		RadiusLabel->setText(QCoreApplication::translate("GUIClass", "Radius", nullptr));
		TextureLabel->setText(QCoreApplication::translate("GUIClass", "Texture", nullptr));
		PerimeterLabel->setText(QCoreApplication::translate("GUIClass", "Perimeter", nullptr));
		AreaLabel->setText(QCoreApplication::translate("GUIClass", "Area", nullptr));
		SmoothnessLabel->setText(QCoreApplication::translate("GUIClass", "Smoothness", nullptr));
		CompactnessLabel->setText(QCoreApplication::translate("GUIClass", "Compactness", nullptr));
		ConcavityLabel->setText(QCoreApplication::translate("GUIClass", "Concavity", nullptr));
		ConcavePointsLabel->setText(QCoreApplication::translate("GUIClass", "Concave points", nullptr));
		SymmetryLabel->setText(QCoreApplication::translate("GUIClass", "Symmetry", nullptr));
		FractalDimensionLabel->setText(QCoreApplication::translate("GUIClass", "Fractal dimension", nullptr));
		RunProcessPushButton->setText(QCoreApplication::translate("GUIClass", "Run Process", nullptr));
		LogsLabel->setText(QCoreApplication::translate("GUIClass", "Logs", nullptr));
		menuPlik->setTitle(QCoreApplication::translate("GUIClass", "FIle", nullptr));
	} // retranslateUi

};

namespace Ui {
	class GUIClass : public Ui_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
