#ifndef UI_QTGUIAPPLICATION1_H
#define UI_QTGUIAPPLICATION1_H

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
	QAction* actionNew;
	QWidget* centralWidget;
	QGridLayout* gridLayout_4;
	QGroupBox* ParametersGroupBox;
	QGridLayout* gridLayout_2;
	QLineEdit* MarginalAdhesionLineEdit;
	QLabel* CellSizeLabel;
	QLineEdit* CellSizeLineEdit;
	QLabel* ClumpThicknessLabel;
	QLabel* MarginalAdhesionLabel;
	QLabel* CellShapeLabel;
	QLineEdit* CellShapeLineEdit;
	QLineEdit* BlandChromatinLineEdit;
	QLabel* MitosesLabel;
	QLineEdit* BareNucleiLineEdit;
	QLabel* NormalNucleoliLabel;
	QLineEdit* MitosesLineEdit;
	QLineEdit* EpithelialCellSizeLineEdit;
	QLabel* BlandChromatinLabel;
	QLineEdit* ClumpThicknessLineEdit;
	QLabel* BareNucleiLabel;
	QLineEdit* NormalNucleoliLineEdit;
	QLabel* EpithelialCellSizeLabel;
	QFrame* PushButtonsFrame;
	QGridLayout* gridLayout_3;
	QPushButton* RunProcessPushButton;
	QFrame* LogsFrame;
	QGridLayout* gridLayout;
	QLabel* LogsLabel;
	QPushButton* ClearLogsPushButton;
	QTextEdit* LogsTextEdit;
	QMenuBar* menuBar;
	QMenu* menuFile;
	QToolBar* mainToolBar;
	QStatusBar* statusBar;

	void setupUi(QMainWindow* GUIClass)
	{
		if (GUIClass->objectName().isEmpty())
			GUIClass->setObjectName(QString::fromUtf8("GUIClass"));
		GUIClass->resize(600, 900);
		actionNew = new QAction(GUIClass);
		actionNew->setObjectName(QString::fromUtf8("actionNew"));
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
		MarginalAdhesionLineEdit = new QLineEdit(ParametersGroupBox);
		MarginalAdhesionLineEdit->setObjectName(QString::fromUtf8("MarginalAdhesionLineEdit"));

		gridLayout_2->addWidget(MarginalAdhesionLineEdit, 3, 1, 1, 1);

		CellSizeLabel = new QLabel(ParametersGroupBox);
		CellSizeLabel->setObjectName(QString::fromUtf8("CellSizeLabel"));

		gridLayout_2->addWidget(CellSizeLabel, 1, 0, 1, 1);

		CellSizeLineEdit = new QLineEdit(ParametersGroupBox);
		CellSizeLineEdit->setObjectName(QString::fromUtf8("CellSizeLineEdit"));

		gridLayout_2->addWidget(CellSizeLineEdit, 1, 1, 1, 1);

		ClumpThicknessLabel = new QLabel(ParametersGroupBox);
		ClumpThicknessLabel->setObjectName(QString::fromUtf8("ClumpThicknessLabel"));

		gridLayout_2->addWidget(ClumpThicknessLabel, 0, 0, 1, 1);

		MarginalAdhesionLabel = new QLabel(ParametersGroupBox);
		MarginalAdhesionLabel->setObjectName(QString::fromUtf8("MarginalAdhesionLabel"));

		gridLayout_2->addWidget(MarginalAdhesionLabel, 3, 0, 1, 1);

		CellShapeLabel = new QLabel(ParametersGroupBox);
		CellShapeLabel->setObjectName(QString::fromUtf8("CellShapeLabel"));

		gridLayout_2->addWidget(CellShapeLabel, 2, 0, 1, 1);

		CellShapeLineEdit = new QLineEdit(ParametersGroupBox);
		CellShapeLineEdit->setObjectName(QString::fromUtf8("CellShapeLineEdit"));

		gridLayout_2->addWidget(CellShapeLineEdit, 2, 1, 1, 1);

		BlandChromatinLineEdit = new QLineEdit(ParametersGroupBox);
		BlandChromatinLineEdit->setObjectName(QString::fromUtf8("BlandChromatinLineEdit"));

		gridLayout_2->addWidget(BlandChromatinLineEdit, 6, 1, 1, 1);

		MitosesLabel = new QLabel(ParametersGroupBox);
		MitosesLabel->setObjectName(QString::fromUtf8("MitosesLabel"));

		gridLayout_2->addWidget(MitosesLabel, 8, 0, 1, 1);

		BareNucleiLineEdit = new QLineEdit(ParametersGroupBox);
		BareNucleiLineEdit->setObjectName(QString::fromUtf8("BareNucleiLineEdit"));

		gridLayout_2->addWidget(BareNucleiLineEdit, 5, 1, 1, 1);

		NormalNucleoliLabel = new QLabel(ParametersGroupBox);
		NormalNucleoliLabel->setObjectName(QString::fromUtf8("NormalNucleoliLabel"));

		gridLayout_2->addWidget(NormalNucleoliLabel, 7, 0, 1, 1);

		MitosesLineEdit = new QLineEdit(ParametersGroupBox);
		MitosesLineEdit->setObjectName(QString::fromUtf8("MitosesLineEdit"));

		gridLayout_2->addWidget(MitosesLineEdit, 8, 1, 1, 1);

		EpithelialCellSizeLineEdit = new QLineEdit(ParametersGroupBox);
		EpithelialCellSizeLineEdit->setObjectName(QString::fromUtf8("EpithelialCellSizeLineEdit"));

		gridLayout_2->addWidget(EpithelialCellSizeLineEdit, 4, 1, 1, 1);

		BlandChromatinLabel = new QLabel(ParametersGroupBox);
		BlandChromatinLabel->setObjectName(QString::fromUtf8("BlandChromatinLabel"));

		gridLayout_2->addWidget(BlandChromatinLabel, 6, 0, 1, 1);

		ClumpThicknessLineEdit = new QLineEdit(ParametersGroupBox);
		ClumpThicknessLineEdit->setObjectName(QString::fromUtf8("ClumpThicknessLineEdit"));

		gridLayout_2->addWidget(ClumpThicknessLineEdit, 0, 1, 1, 1);

		BareNucleiLabel = new QLabel(ParametersGroupBox);
		BareNucleiLabel->setObjectName(QString::fromUtf8("BareNucleiLabel"));

		gridLayout_2->addWidget(BareNucleiLabel, 5, 0, 1, 1);

		NormalNucleoliLineEdit = new QLineEdit(ParametersGroupBox);
		NormalNucleoliLineEdit->setObjectName(QString::fromUtf8("NormalNucleoliLineEdit"));

		gridLayout_2->addWidget(NormalNucleoliLineEdit, 7, 1, 1, 1);

		EpithelialCellSizeLabel = new QLabel(ParametersGroupBox);
		EpithelialCellSizeLabel->setObjectName(QString::fromUtf8("EpithelialCellSizeLabel"));

		gridLayout_2->addWidget(EpithelialCellSizeLabel, 4, 0, 1, 1);


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

		ClearLogsPushButton = new QPushButton(LogsFrame);
		ClearLogsPushButton->setObjectName(QString::fromUtf8("ClearLogsPushButton"));

		gridLayout->addWidget(ClearLogsPushButton, 0, 1, 1, 1);

		LogsTextEdit = new QTextEdit(LogsFrame);
		LogsTextEdit->setObjectName(QString::fromUtf8("LogsTextEdit"));
		LogsTextEdit->setEnabled(true);
		LogsTextEdit->setReadOnly(true);

		gridLayout->addWidget(LogsTextEdit, 1, 0, 1, 2);


		gridLayout_4->addWidget(LogsFrame, 1, 0, 1, 2);

		GUIClass->setCentralWidget(centralWidget);
		menuBar = new QMenuBar(GUIClass);
		menuBar->setObjectName(QString::fromUtf8("menuBar"));
		menuBar->setGeometry(QRect(0, 0, 600, 18));
		menuFile = new QMenu(menuBar);
		menuFile->setObjectName(QString::fromUtf8("menuFile"));
		GUIClass->setMenuBar(menuBar);
		mainToolBar = new QToolBar(GUIClass);
		mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
		GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
		statusBar = new QStatusBar(GUIClass);
		statusBar->setObjectName(QString::fromUtf8("statusBar"));
		GUIClass->setStatusBar(statusBar);
		QWidget::setTabOrder(ClumpThicknessLineEdit, CellSizeLineEdit);
		QWidget::setTabOrder(CellSizeLineEdit, CellShapeLineEdit);
		QWidget::setTabOrder(CellShapeLineEdit, MarginalAdhesionLineEdit);
		QWidget::setTabOrder(MarginalAdhesionLineEdit, EpithelialCellSizeLineEdit);
		QWidget::setTabOrder(EpithelialCellSizeLineEdit, BareNucleiLineEdit);
		QWidget::setTabOrder(BareNucleiLineEdit, BlandChromatinLineEdit);
		QWidget::setTabOrder(BlandChromatinLineEdit, NormalNucleoliLineEdit);
		QWidget::setTabOrder(NormalNucleoliLineEdit, MitosesLineEdit);
		QWidget::setTabOrder(MitosesLineEdit, RunProcessPushButton);
		QWidget::setTabOrder(RunProcessPushButton, LogsTextEdit);
		QWidget::setTabOrder(LogsTextEdit, ClearLogsPushButton);

		menuBar->addAction(menuFile->menuAction());
		menuFile->addAction(actionNew);

		retranslateUi(GUIClass);

		QMetaObject::connectSlotsByName(GUIClass);
	} // setupUi

	void retranslateUi(QMainWindow* GUIClass)
	{
		GUIClass->setWindowTitle(QCoreApplication::translate("GUIClass", "GUI", nullptr));
		actionNew->setText(QCoreApplication::translate("GUIClass", "New", nullptr));
		ParametersGroupBox->setTitle(QCoreApplication::translate("GUIClass", "Parameters", nullptr));
		CellSizeLabel->setText(QCoreApplication::translate("GUIClass", "Uniformity of Cell Size", nullptr));
		ClumpThicknessLabel->setText(QCoreApplication::translate("GUIClass", "Clump Thickness", nullptr));
		MarginalAdhesionLabel->setText(QCoreApplication::translate("GUIClass", "Marginal Adhesion", nullptr));
		CellShapeLabel->setText(QCoreApplication::translate("GUIClass", "Uniformity of Cell Shape", nullptr));
		MitosesLabel->setText(QCoreApplication::translate("GUIClass", "Mitoses", nullptr));
		NormalNucleoliLabel->setText(QCoreApplication::translate("GUIClass", "Normal Nucleoli", nullptr));
		BlandChromatinLabel->setText(QCoreApplication::translate("GUIClass", "Bland Chromatin", nullptr));
		BareNucleiLabel->setText(QCoreApplication::translate("GUIClass", "Bare Nuclei", nullptr));
		EpithelialCellSizeLabel->setText(QCoreApplication::translate("GUIClass", "Single Epithelial Cell Size", nullptr));
		RunProcessPushButton->setText(QCoreApplication::translate("GUIClass", "Run Process", nullptr));
		LogsLabel->setText(QCoreApplication::translate("GUIClass", "Logs", nullptr));
		ClearLogsPushButton->setText(QCoreApplication::translate("GUIClass", "Clear Logs", nullptr));
		menuFile->setTitle(QCoreApplication::translate("GUIClass", "File", nullptr));
	} // retranslateUi

};

namespace Ui {
	class GUIClass : public Ui_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
