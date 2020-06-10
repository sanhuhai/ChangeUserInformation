#include "datail.h"

Datail::Datail(QWidget* parent) {
	display();
}

void Datail::display() {
	NationalLabel = new QLabel("����/����");
	NationComboBox = new QComboBox;
	NationComboBox->insertItem(0,"�й�");
	NationComboBox->insertItem(1,"����");
	NationComboBox->insertItem(2,"Ӣ��");
	provinceLabel = new QLabel("ʡ��");
	provinceComboBox = new QComboBox;
	provinceComboBox->insertItem(0, "�㽭ʡ");
	provinceComboBox->insertItem(1, "����ʡ");
	provinceComboBox->insertItem(2, "����ʡ");
	cityLabel = new QLabel("����");
	cityLineEdit = new QLineEdit;
	introduceLabel = new QLabel("���˽���");
	introduceTextEdit = new QTextEdit;
	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(NationalLabel, 0, 0);
	mainLayout->addWidget(NationComboBox, 0, 1);
	mainLayout->addWidget(provinceLabel, 1, 0);
	mainLayout->addWidget(provinceComboBox, 1, 1);
	mainLayout->addWidget(cityLabel, 2, 0);
	mainLayout->addWidget(cityLineEdit, 2, 1);
	mainLayout->addWidget(introduceLabel, 3, 0);
	mainLayout->addWidget(introduceTextEdit, 3, 1);
	mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}