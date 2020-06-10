#include <QWidget>
#include <QDialog>
#include<QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QCheckBox>
#include <QComboBox>
#include <QGridLayout>
#pragma once
#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif // WIN32

class Datail:public QWidget
{
	Q_OBJECT
public:
	explicit Datail(QWidget* parent = 0);	//explicit 关键字取消了隐式转换;explicit 关键字只对有一个参数的类构造函数有效,
											//如果类构造函数参数大于或等于两个时, 是不会产生隐式转换的, 所以explicit关键字也就无效了
	void display();
private:
	QLabel* NationalLabel, * provinceLabel, * cityLabel, * introduceLabel;
	QComboBox* NationComboBox, * provinceComboBox;
	QLineEdit* cityLineEdit;
	QTextEdit* introduceTextEdit;
	QGridLayout* mainLayout;
};
