#pragma once

#include <QtWidgets/QDialog>
#include "content.h"
#include "ui_ChangeUserInformation.h"

class ChangeUserInformation : public QDialog
{
    Q_OBJECT

public:
    ChangeUserInformation(QWidget *parent = Q_NULLPTR);
    void display();
    Content* getContent();

private:
    //Ui::ChangeUserInformationClass ui;
    QSplitter* mainSplitter;
    QListWidget* qList;
    Content* content;
};