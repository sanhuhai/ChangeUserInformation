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
    qList->insertItem(0, "基本信息");
    qList->insertItem(1, "联系方式");
    qList->insertItem(2, "详细资料");
    content = new Content(mainSplitter);
    connect(qList, SIGNAL(currentRowChanged(int)), content->getQStack(), SLOT(setCurrentIndex(int)));
    mainSplitter->setWindowTitle("修改用户信息");
    mainSplitter->setMinimumSize(mainSplitter->minimumSize());
    mainSplitter->setMaximumSize(mainSplitter->maximumSize());
    mainSplitter->show();
};