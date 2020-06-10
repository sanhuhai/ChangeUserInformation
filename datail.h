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
	explicit Datail(QWidget* parent = 0);	//explicit �ؼ���ȡ������ʽת��;explicit �ؼ���ֻ����һ���������๹�캯����Ч,
											//����๹�캯���������ڻ��������ʱ, �ǲ��������ʽת����, ����explicit�ؼ���Ҳ����Ч��
	void display();
private:
	QLabel* NationalLabel, * provinceLabel, * cityLabel, * introduceLabel;
	QComboBox* NationComboBox, * provinceComboBox;
	QLineEdit* cityLineEdit;
	QTextEdit* introduceTextEdit;
	QGridLayout* mainLayout;
};
