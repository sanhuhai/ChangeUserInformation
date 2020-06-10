#pragma once
#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif // WIN32

#include <QtWidgets/QDialog>
#include <QDebug>
#include<QLabel>
#include<QLineEdit>
#include<QLayout>
#include<QGridLayout>
#include<QTextEdit>
#include<QPushButton>
#include<QComboBox>
#include<QVBoxLayout>
//#include "ui_UserInformation.h"

class UserInformation : public QDialog
{
	Q_OBJECT

public:
	UserInformation(QWidget* parent = Q_NULLPTR);

private:
	//Ui::UserInformationClass ui;
	QLabel* userIDLabel, * userNameLabel, * userSexLabel, * userAgeLabel, * departmentNameLabel, * otherLabel;
	QLineEdit* userIDLineEdit, * userNameLineEdit, * userAgeLineEdit, * otherLineEdit;
	QTextEdit* departmentNameLineEdit;
	QComboBox* userSexComboBox;
	QPushButton* ok, * cancel;
	QLabel* HeadLabel, * HeadIconLabel;
	QPushButton* updateHeadpushButton;
	QLabel* introductionLabel;
	QTextEdit* introductionTextEdit;
	QVBoxLayout* rightLayout;
	QGridLayout* leftLayout, * mainGridLayout;
	QHBoxLayout* topRightLayout, * buttomLayout;

};
