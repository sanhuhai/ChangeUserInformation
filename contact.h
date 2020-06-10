#pragma once
#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif // WIN32

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QWidget>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>

class Contact :public QDialog {
	Q_OBJECT
public:
	Contact(QWidget* parent = Q_NULLPTR);
	~Contact() {};
	void display();
private:
	QLabel* emailLabel, * addressLabel, * postalCodeLabel, * mobilelPhoneLabel, * officePhoneLabel;
	QLineEdit* emailLineEdit, * addressLineEdit, * postalCodeLineEdit, * mobilePhoneLineEdit, * officePhoneLineEdit;
	QPushButton* OK_pushButton, * Cancel_pushButton;
	QCheckBox* checkBox;
	QGridLayout* topLayout, * contactLayout, * buttonLayout;
	QVBoxLayout* buttomLayout;
};