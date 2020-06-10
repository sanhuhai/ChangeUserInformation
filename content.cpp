#include "content.h"

Content::Content(QWidget* parent):QFrame(parent) {
	display();
}

void Content::display() {
	qStack = new QStackedWidget(this);
	qStack->setFrameStyle(QFrame::Panel | QFrame::Raised);
	usetinformation = new UserInformation();
	contack = new Contact();
	datail = new Datail();
	qStack->addWidget(usetinformation);
	qStack->addWidget(contack);
	qStack->addWidget(datail);
	ok_pushButton = new QPushButton("ÐÞ¸Ä");
	cancel_pushButton = new QPushButton("È¡Ïû");
	buttonLayout = new QHBoxLayout;
	buttonLayout->addStretch(1);
	buttonLayout->addWidget(ok_pushButton);
	buttonLayout->addWidget(cancel_pushButton);
	rigthLayout = new QHBoxLayout;
	rigthLayout->setSpacing(6);
	rigthLayout->setMargin(10);
	rigthLayout->addWidget(qStack);
	rigthLayout->addLayout(buttonLayout);
}

QWidget* Content::getQStack() {
	return qStack;
}