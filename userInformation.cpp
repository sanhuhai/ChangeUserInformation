#include "userInfomation.h"

UserInformation::UserInformation(QWidget* parent)
	: QDialog(parent)
{
	//ui.setupUi(this);
	setWindowTitle(tr("UserInformation"));
	/*左侧*/
	userIDLabel = new QLabel("用户名");
	userIDLineEdit = new QLineEdit;
	userNameLabel = new QLabel("姓名");
	userNameLineEdit = new QLineEdit;
	userSexLabel = new QLabel("性别");
	userSexComboBox = new QComboBox;
	userSexComboBox->addItem("男");
	userSexComboBox->addItem("女");
	departmentNameLabel = new QLabel("部门");
	departmentNameLineEdit = new QTextEdit;
	userAgeLabel = new QLabel("年龄");
	userAgeLineEdit = new QLineEdit;
	otherLabel = new QLabel("备注");
	otherLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
	otherLineEdit = new QLineEdit;
	leftLayout = new QGridLayout;
	leftLayout->addWidget(userIDLabel, 0, 0);
	leftLayout->addWidget(userIDLineEdit, 0, 1);
	leftLayout->addWidget(userNameLabel, 1, 0);
	leftLayout->addWidget(userNameLineEdit, 1, 1);
	leftLayout->addWidget(userSexLabel, 2, 0);
	leftLayout->addWidget(userSexComboBox, 2, 1);
	leftLayout->addWidget(departmentNameLabel, 3, 0);
	leftLayout->addWidget(departmentNameLineEdit, 3, 1);
	leftLayout->addWidget(userAgeLabel, 4, 0);
	leftLayout->addWidget(userAgeLineEdit, 4, 1);
	leftLayout->addWidget(otherLabel, 5, 0);
	leftLayout->addWidget(otherLineEdit, 5, 1);
	/*右侧*/
	HeadLabel = new QLabel("头像");
	HeadIconLabel = new QLabel;
	QPixmap icon("yqz.png");
	HeadIconLabel->setPixmap(icon);
	HeadIconLabel->resize(icon.width(), icon.height());
	updateHeadpushButton = new QPushButton("更新");
	/*右上角*/
	topRightLayout = new QHBoxLayout();
	topRightLayout->setSpacing(20);
	topRightLayout->addWidget(HeadLabel);
	topRightLayout->addWidget(HeadIconLabel);
	topRightLayout->addWidget(updateHeadpushButton);
	/*右下角*/
	introductionLabel = new QLabel("个人介绍");
	introductionTextEdit = new QTextEdit;
	rightLayout = new QVBoxLayout;
	rightLayout->setMargin(10);
	rightLayout->addLayout(topRightLayout);
	rightLayout->addWidget(introductionLabel);
	rightLayout->addWidget(introductionTextEdit);
	/*底部*/
	ok = new QPushButton("确定");
	cancel = new QPushButton("取消");
	buttomLayout = new QHBoxLayout;
	buttomLayout->addStretch();
	buttomLayout->addWidget(ok);
	buttomLayout->addWidget(cancel);
	/*整体*/
	mainGridLayout = new QGridLayout(this);
	mainGridLayout->setMargin(5);
	mainGridLayout->setSpacing(10);
	mainGridLayout->addLayout(leftLayout, 0, 0);
	mainGridLayout->addLayout(rightLayout, 0, 1);
	mainGridLayout->addLayout(buttomLayout, 1, 0, 1, 2);
	mainGridLayout->setSizeConstraint(QLayout::SetFixedSize);
}
