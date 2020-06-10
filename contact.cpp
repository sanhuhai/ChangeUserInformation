#include "contact.h"

Contact::Contact(QWidget* parent) :QDialog(parent) {
	display();
}

void Contact::display() {
	emailLabel = new QLabel("电子邮件");
	emailLineEdit = new QLineEdit;
	addressLabel = new QLabel("联系地址");
	addressLineEdit = new QLineEdit;
	postalCodeLabel = new QLabel("邮政编码");
	postalCodeLineEdit = new QLineEdit;
	mobilelPhoneLabel = new QLabel("移动电话");
	mobilePhoneLineEdit = new QLineEdit;
	officePhoneLabel = new QLabel("办公室电话");
	officePhoneLineEdit = new QLineEdit;
	checkBox = new QCheckBox("接收留言");
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