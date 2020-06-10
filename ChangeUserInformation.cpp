#include "ChangeUserInformation.h"

ChangeUserInformation::ChangeUserInformation(QWidget *parent)
    : QDialog(parent)
{
   // ui.setupUi(this);
    display();
}

void ChangeUserInformation::display() {
    mainSplitter = new QSplitter(Qt::Horizontal, 0);
    mainSplitter->setOpaqueResize(true);
    qList = new QListWidget(mainSplitter);
    qList->insertItem(0, "������Ϣ");
    qList->insertItem(1, "��ϵ��ʽ");
    qList->insertItem(2, "��ϸ����");
    content = new Content(mainSplitter);
    connect(qList, SIGNAL(currentRowChanged(int)), content->getQStack(), SLOT(setCurrentIndex(int)));
    mainSplitter->setWindowTitle("�޸��û���Ϣ");
    mainSplitter->setMinimumSize(mainSplitter->minimumSize());
    mainSplitter->setMaximumSize(mainSplitter->maximumSize());
    mainSplitter->show();
};