#include "userInfomation.h"

UserInformation::UserInformation(QWidget* parent)
	: QDialog(parent)
{
	//ui.setupUi(this);
	setWindowTitle(tr("UserInformation"));
	/*���*/
	userIDLabel = new QLabel("�û���");
	userIDLineEdit = new QLineEdit;
	userNameLabel = new QLabel("����");
	userNameLineEdit = new QLineEdit;
	userSexLabel = new QLabel("�Ա�");
	userSexComboBox = new QComboBox;
	userSexComboBox->addItem("��");
	userSexComboBox->addItem("Ů");
	departmentNameLabel = new QLabel("����");
	departmentNameLineEdit = new QTextEdit;
	userAgeLabel = new QLabel("����");
	userAgeLineEdit = new QLineEdit;
	otherLabel = new QLabel("��ע");
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
	/*�Ҳ�*/
	HeadLabel = new QLabel("ͷ��");
	HeadIconLabel = new QLabel;
	QPixmap icon("yqz.png");
	HeadIconLabel->setPixmap(icon);
	HeadIconLabel->resize(icon.width(), icon.height());
	updateHeadpushButton = new QPushButton("����");
	/*���Ͻ�*/
	topRightLayout = new QHBoxLayout();
	topRightLayout->setSpacing(20);
	topRightLayout->addWidget(HeadLabel);
	topRightLayout->addWidget(HeadIconLabel);
	topRightLayout->addWidget(updateHeadpushButton);
	/*���½�*/
	introductionLabel = new QLabel("���˽���");
	introductionTextEdit = new QTextEdit;
	rightLayout = new QVBoxLayout;
	rightLayout->setMargin(10);
	rightLayout->addLayout(topRightLayout);
	rightLayout->addWidget(introductionLabel);
	rightLayout->addWidget(introductionTextEdit);
	/*�ײ�*/
	ok = new QPushButton("ȷ��");
	cancel = new QPushButton("ȡ��");
	buttomLayout = new QHBoxLayout;
	buttomLayout->addStretch();
	buttomLayout->addWidget(ok);
	buttomLayout->addWidget(cancel);
	/*����*/
	mainGridLayout = new QGridLayout(this);
	mainGridLayout->setMargin(5);
	mainGridLayout->setSpacing(10);
	mainGridLayout->addLayout(leftLayout, 0, 0);
	mainGridLayout->addLayout(rightLayout, 0, 1);
	mainGridLayout->addLayout(buttomLayout, 1, 0, 1, 2);
	mainGridLayout->setSizeConstraint(QLayout::SetFixedSize);
}
