#include "datail.h"

Datail::Datail(QWidget* parent) {
	display();
}

void Datail::display() {
	NationalLabel = new QLabel("国家/地区");
	NationComboBox = new QComboBox;
	NationComboBox->insertItem(0,"中国");
	NationComboBox->insertItem(1,"美国");
	NationComboBox->insertItem(2,"英国");
	provinceLabel = new QLabel("省份");
	provinceComboBox = new QComboBox;
	provinceComboBox->insertItem(0, "浙江省");
	provinceComboBox->insertItem(1, "云南省");
	provinceComboBox->insertItem(2, "辽宁省");
	cityLabel = new QLabel("城市");
	cityLineEdit = new QLineEdit;
	introduceLabel = new QLabel("个人介绍");
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