#include "contact.h"

Contact::Contact(QWidget* parent) :QDialog(parent) {
	display();
}

void Contact::display() {
	emailLabel = new QLabel("�����ʼ�");
	emailLineEdit = new QLineEdit;
	addressLabel = new QLabel("��ϵ��ַ");
	addressLineEdit = new QLineEdit;
	postalCodeLabel = new QLabel("��������");
	postalCodeLineEdit = new QLineEdit;
	mobilelPhoneLabel = new QLabel("�ƶ��绰");
	mobilePhoneLineEdit = new QLineEdit;
	officePhoneLabel = new QLabel("�칫�ҵ绰");
	officePhoneLineEdit = new QLineEdit;
	checkBox = new QCheckBox("��������");
	topLayout = new QGridLayout(this);
	topLayout->setSpacing(20);
	topLayout->addWidget(emailLabel, 0, 0);
	topLayout->addWidget(emailLineEdit, 0, 1);
	topLayout->addWidget(addressLabel, 1, 0);
	topLayout->addWidget(addressLineEdit, 1, 1);
	topLayout->addWidget(postalCodeLabel, 2, 0);
	topLayout->addWidget(postalCodeLineEdit, 2, 1);
	topLayout->addWidget(mobilelPhoneLabel, 3, 0);
	topLayout->addWidget(mobilePhoneLineEdit, 3, 1);
	topLayout->addWidget(checkBox,3,2);
	topLayout->addWidget(officePhoneLabel, 4, 0);
	topLayout->addWidget(officePhoneLineEdit, 4, 1);
	topLayout->setSizeConstraint(QLayout::SetFixedSize);
}