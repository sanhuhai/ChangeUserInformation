#pragma once
#include <QStackedWidget>
#include <QListWidget>
#include <QSplitter>
#include <QHBoxLayout>
#include <QPushButton>
#include <QFrame>
#include "contact.h"
#include "datail.h"
#include "userInfomation.h"

#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif // WIN32


class Content :public QFrame {
	Q_OBJECT
public:
	Content(QWidget* parent = Q_NULLPTR);
	void display();
	QWidget* getQStack();
private:
	QStackedWidget* qStack;
	QListWidget* qList;
	QSplitter* qSplitter;
	QPushButton* ok_pushButton, * cancel_pushButton;
	UserInformation *usetinformation;
	Contact* contack;
	Datail* datail;
	QHBoxLayout* buttonLayout, * rigthLayout;
};