/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *btn_injection;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btn_setting;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btn_login;
    QPushButton *btn_message;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_7;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_9;
    QGridLayout *gridLayout_6;
    QLabel *lbl_show;
    QWidget *widget_8;
    QGridLayout *gridLayout_5;
    QPushButton *btn_input;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_6;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *lE_id;
    QLineEdit *lE_name;
    QDateEdit *dE_deadline;
    QSpacerItem *verticalSpacer_8;
    QLabel *lbl_image;
    QToolButton *btn_choose;
    QLabel *lbl_filename;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_10;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_7;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lE_select_id;
    QLineEdit *lE_select_name;
    QComboBox *cB_select_status;
    QToolButton *btn_select1;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QDateEdit *dE_select_deadline;
    QToolButton *btn_select2;
    QTableView *tV_select;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget_15;
    QGridLayout *gridLayout_8;
    QTableView *tV_modify;
    QWidget *widget_14;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLineEdit *lE_modify_name;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btn_select;
    QPushButton *btn_showAll;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_5;
    QPushButton *btn_submit;
    QPushButton *btn_revert;
    QPushButton *btn_delete;
    QPushButton *btn_ascend;
    QPushButton *btn_descend;
    QWidget *page_2;
    QGridLayout *gridLayout_9;
    QWidget *widget_18;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QLineEdit *lE_login_id;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QLineEdit *lE_login_pwd;
    QWidget *widget_19;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *btn_login_login;
    QPushButton *btn_login_register;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_11;
    QWidget *page_3;
    QWidget *widget_20;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
    QComboBox *cB_camera;
    QLabel *lbl_video_show;
    QLabel *lbl_display;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *btn_open_camera;
    QPushButton *btn_close_camera;
    QPushButton *btn_capture;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget_21;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *btn_setSavedPath;
    QLabel *label_3;
    QLabel *lbl_savedPath;
    QWidget *page_4;
    QLabel *label_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1300, 720);
        Widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(Widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_injection = new QPushButton(frame);
        btn_injection->setObjectName(QString::fromUtf8("btn_injection"));
        btn_injection->setMinimumSize(QSize(80, 80));
        btn_injection->setCheckable(true);
        btn_injection->setAutoExclusive(true);

        gridLayout->addWidget(btn_injection, 2, 0, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 87, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_12, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 1);

        btn_setting = new QPushButton(frame);
        btn_setting->setObjectName(QString::fromUtf8("btn_setting"));
        btn_setting->setMinimumSize(QSize(80, 80));
        btn_setting->setCheckable(true);
        btn_setting->setAutoExclusive(true);

        gridLayout->addWidget(btn_setting, 7, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 8, 0, 1, 1);

        btn_login = new QPushButton(frame);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setMinimumSize(QSize(80, 80));
        btn_login->setFocusPolicy(Qt::NoFocus);
        btn_login->setCheckable(true);
        btn_login->setAutoExclusive(true);

        gridLayout->addWidget(btn_login, 0, 0, 1, 1);

        btn_message = new QPushButton(frame);
        btn_message->setObjectName(QString::fromUtf8("btn_message"));
        btn_message->setMinimumSize(QSize(80, 80));
        btn_message->setFocusPolicy(Qt::NoFocus);
        btn_message->setCheckable(true);
        btn_message->setAutoExclusive(true);

        gridLayout->addWidget(btn_message, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 59, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidget->setFrameShadow(QFrame::Plain);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(25, 25));
        tabWidget->setTabsClosable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_7 = new QGridLayout(tab);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        widget_10 = new QWidget(tab);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_6 = new QHBoxLayout(widget_10);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        widget_9 = new QWidget(widget_10);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        gridLayout_6 = new QGridLayout(widget_9);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        lbl_show = new QLabel(widget_9);
        lbl_show->setObjectName(QString::fromUtf8("lbl_show"));
        lbl_show->setMinimumSize(QSize(350, 400));
        lbl_show->setMaximumSize(QSize(350, 420));
        lbl_show->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/icon_show.gif);"));

        gridLayout_6->addWidget(lbl_show, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(widget_9);

        widget_8 = new QWidget(widget_10);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        gridLayout_5 = new QGridLayout(widget_8);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        btn_input = new QPushButton(widget_8);
        btn_input->setObjectName(QString::fromUtf8("btn_input"));
        btn_input->setMinimumSize(QSize(60, 25));
        btn_input->setMaximumSize(QSize(60, 25));

        gridLayout_5->addWidget(btn_input, 3, 2, 1, 1);

        widget_7 = new QWidget(widget_8);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        widget_3 = new QWidget(widget_7);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        label_9 = new QLabel(widget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_3->addWidget(label_9);

        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

        label_10 = new QLabel(widget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_3->addWidget(label_10);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);


        horizontalLayout_5->addWidget(widget_3);

        widget_6 = new QWidget(widget_7);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        verticalLayout_4 = new QVBoxLayout(widget_6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        lE_id = new QLineEdit(widget_6);
        lE_id->setObjectName(QString::fromUtf8("lE_id"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lE_id->sizePolicy().hasHeightForWidth());
        lE_id->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(lE_id);

        lE_name = new QLineEdit(widget_6);
        lE_name->setObjectName(QString::fromUtf8("lE_name"));
        sizePolicy.setHeightForWidth(lE_name->sizePolicy().hasHeightForWidth());
        lE_name->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(lE_name);

        dE_deadline = new QDateEdit(widget_6);
        dE_deadline->setObjectName(QString::fromUtf8("dE_deadline"));
        sizePolicy.setHeightForWidth(dE_deadline->sizePolicy().hasHeightForWidth());
        dE_deadline->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(dE_deadline);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);


        horizontalLayout_5->addWidget(widget_6);


        gridLayout_5->addWidget(widget_7, 0, 0, 1, 3);

        lbl_image = new QLabel(widget_8);
        lbl_image->setObjectName(QString::fromUtf8("lbl_image"));
        lbl_image->setMinimumSize(QSize(150, 200));
        lbl_image->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/icon_add.png);"));

        gridLayout_5->addWidget(lbl_image, 2, 0, 1, 3);

        btn_choose = new QToolButton(widget_8);
        btn_choose->setObjectName(QString::fromUtf8("btn_choose"));

        gridLayout_5->addWidget(btn_choose, 1, 0, 1, 1);

        lbl_filename = new QLabel(widget_8);
        lbl_filename->setObjectName(QString::fromUtf8("lbl_filename"));
        lbl_filename->setMaximumSize(QSize(190, 16777215));

        gridLayout_5->addWidget(lbl_filename, 1, 1, 1, 1);


        horizontalLayout_6->addWidget(widget_8);


        gridLayout_7->addWidget(widget_10, 1, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_9, 0, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_10, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        widget = new QWidget(tab_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMaximumSize(QSize(16777215, 160));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 100));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);


        horizontalLayout->addWidget(widget_2);

        widget_5 = new QWidget(groupBox);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lE_select_id = new QLineEdit(widget_5);
        lE_select_id->setObjectName(QString::fromUtf8("lE_select_id"));
        sizePolicy.setHeightForWidth(lE_select_id->sizePolicy().hasHeightForWidth());
        lE_select_id->setSizePolicy(sizePolicy);
        lE_select_id->setMinimumSize(QSize(0, 20));
        lE_select_id->setMaximumSize(QSize(16777215, 40));

        verticalLayout_2->addWidget(lE_select_id);

        lE_select_name = new QLineEdit(widget_5);
        lE_select_name->setObjectName(QString::fromUtf8("lE_select_name"));
        sizePolicy.setHeightForWidth(lE_select_name->sizePolicy().hasHeightForWidth());
        lE_select_name->setSizePolicy(sizePolicy);
        lE_select_name->setMinimumSize(QSize(0, 20));
        lE_select_name->setMaximumSize(QSize(16777215, 40));

        verticalLayout_2->addWidget(lE_select_name);

        cB_select_status = new QComboBox(widget_5);
        cB_select_status->addItem(QString());
        cB_select_status->addItem(QString());
        cB_select_status->addItem(QString());
        cB_select_status->setObjectName(QString::fromUtf8("cB_select_status"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cB_select_status->sizePolicy().hasHeightForWidth());
        cB_select_status->setSizePolicy(sizePolicy2);
        cB_select_status->setMinimumSize(QSize(0, 20));
        cB_select_status->setMaximumSize(QSize(16777215, 40));

        verticalLayout_2->addWidget(cB_select_status);


        horizontalLayout->addWidget(widget_5);

        btn_select1 = new QToolButton(groupBox);
        btn_select1->setObjectName(QString::fromUtf8("btn_select1"));
        btn_select1->setMinimumSize(QSize(50, 40));

        horizontalLayout->addWidget(btn_select1);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget_4 = new QWidget(groupBox_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        sizePolicy1.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        dE_select_deadline = new QDateEdit(widget_4);
        dE_select_deadline->setObjectName(QString::fromUtf8("dE_select_deadline"));
        sizePolicy.setHeightForWidth(dE_select_deadline->sizePolicy().hasHeightForWidth());
        dE_select_deadline->setSizePolicy(sizePolicy);
        dE_select_deadline->setMaximumSize(QSize(223, 100));

        horizontalLayout_4->addWidget(dE_select_deadline);


        horizontalLayout_2->addWidget(widget_4);

        btn_select2 = new QToolButton(groupBox_2);
        btn_select2->setObjectName(QString::fromUtf8("btn_select2"));
        btn_select2->setMinimumSize(QSize(50, 40));

        horizontalLayout_2->addWidget(btn_select2);


        horizontalLayout_3->addWidget(groupBox_2);


        gridLayout_4->addWidget(widget, 0, 0, 1, 1);

        tV_select = new QTableView(tab_3);
        tV_select->setObjectName(QString::fromUtf8("tV_select"));

        gridLayout_4->addWidget(tV_select, 1, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_8 = new QHBoxLayout(tab_2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        widget_15 = new QWidget(tab_2);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        gridLayout_8 = new QGridLayout(widget_15);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        tV_modify = new QTableView(widget_15);
        tV_modify->setObjectName(QString::fromUtf8("tV_modify"));

        gridLayout_8->addWidget(tV_modify, 0, 0, 1, 1);

        widget_14 = new QWidget(widget_15);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setMinimumSize(QSize(321, 81));
        widget_12 = new QWidget(widget_14);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setGeometry(QRect(9, 9, 199, 38));
        horizontalLayout_7 = new QHBoxLayout(widget_12);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_11 = new QLabel(widget_12);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11);

        lE_modify_name = new QLineEdit(widget_12);
        lE_modify_name->setObjectName(QString::fromUtf8("lE_modify_name"));
        sizePolicy.setHeightForWidth(lE_modify_name->sizePolicy().hasHeightForWidth());
        lE_modify_name->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(lE_modify_name);

        widget_13 = new QWidget(widget_14);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setGeometry(QRect(214, 9, 93, 70));
        verticalLayout_6 = new QVBoxLayout(widget_13);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        btn_select = new QPushButton(widget_13);
        btn_select->setObjectName(QString::fromUtf8("btn_select"));

        verticalLayout_6->addWidget(btn_select);

        btn_showAll = new QPushButton(widget_13);
        btn_showAll->setObjectName(QString::fromUtf8("btn_showAll"));

        verticalLayout_6->addWidget(btn_showAll);


        gridLayout_8->addWidget(widget_14, 1, 0, 1, 1);


        horizontalLayout_8->addWidget(widget_15);

        widget_11 = new QWidget(tab_2);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        verticalLayout_5 = new QVBoxLayout(widget_11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        btn_submit = new QPushButton(widget_11);
        btn_submit->setObjectName(QString::fromUtf8("btn_submit"));

        verticalLayout_5->addWidget(btn_submit);

        btn_revert = new QPushButton(widget_11);
        btn_revert->setObjectName(QString::fromUtf8("btn_revert"));

        verticalLayout_5->addWidget(btn_revert);

        btn_delete = new QPushButton(widget_11);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));

        verticalLayout_5->addWidget(btn_delete);

        btn_ascend = new QPushButton(widget_11);
        btn_ascend->setObjectName(QString::fromUtf8("btn_ascend"));

        verticalLayout_5->addWidget(btn_ascend);

        btn_descend = new QPushButton(widget_11);
        btn_descend->setObjectName(QString::fromUtf8("btn_descend"));

        verticalLayout_5->addWidget(btn_descend);


        horizontalLayout_8->addWidget(widget_11);

        tabWidget->addTab(tab_2, QString());

        gridLayout_3->addWidget(tabWidget, 0, 1, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_9 = new QGridLayout(page_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        widget_18 = new QWidget(page_2);
        widget_18->setObjectName(QString::fromUtf8("widget_18"));
        widget_18->setMinimumSize(QSize(0, 300));
        verticalLayout_7 = new QVBoxLayout(widget_18);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_2 = new QLabel(widget_18);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 88, 138);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_2);

        widget_16 = new QWidget(widget_18);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        widget_16->setStyleSheet(QString::fromUtf8("    border: 1px solid #696969;\n"
"    border-radius: 5px;"));
        horizontalLayout_9 = new QHBoxLayout(widget_16);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_12 = new QLabel(widget_16);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(25, 25));
        label_12->setMaximumSize(QSize(25, 25));
        label_12->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/user_name.png);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none"));

        horizontalLayout_9->addWidget(label_12);

        lE_login_id = new QLineEdit(widget_16);
        lE_login_id->setObjectName(QString::fromUtf8("lE_login_id"));
        sizePolicy.setHeightForWidth(lE_login_id->sizePolicy().hasHeightForWidth());
        lE_login_id->setSizePolicy(sizePolicy);
        lE_login_id->setStyleSheet(QString::fromUtf8("border: none;\n"
"font: 12pt \"Agency FB\";\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_9->addWidget(lE_login_id);


        verticalLayout_7->addWidget(widget_16);

        widget_17 = new QWidget(widget_18);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        widget_17->setStyleSheet(QString::fromUtf8("    border: 1px solid #696969;\n"
"    border-radius: 5px;"));
        horizontalLayout_10 = new QHBoxLayout(widget_17);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_13 = new QLabel(widget_17);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(25, 25));
        label_13->setMaximumSize(QSize(25, 25));
        label_13->setStyleSheet(QString::fromUtf8("image: url(:/img/img/pwd.png);\n"
"background-color: rgb(255, 255, 255);\n"
"border: none;"));

        horizontalLayout_10->addWidget(label_13);

        lE_login_pwd = new QLineEdit(widget_17);
        lE_login_pwd->setObjectName(QString::fromUtf8("lE_login_pwd"));
        sizePolicy.setHeightForWidth(lE_login_pwd->sizePolicy().hasHeightForWidth());
        lE_login_pwd->setSizePolicy(sizePolicy);
        lE_login_pwd->setStyleSheet(QString::fromUtf8("border: none;\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lE_login_pwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_10->addWidget(lE_login_pwd);


        verticalLayout_7->addWidget(widget_17);

        widget_19 = new QWidget(widget_18);
        widget_19->setObjectName(QString::fromUtf8("widget_19"));
        widget_19->setMinimumSize(QSize(0, 80));
        horizontalLayout_11 = new QHBoxLayout(widget_19);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        btn_login_login = new QPushButton(widget_19);
        btn_login_login->setObjectName(QString::fromUtf8("btn_login_login"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btn_login_login->sizePolicy().hasHeightForWidth());
        btn_login_login->setSizePolicy(sizePolicy3);
        btn_login_login->setStyleSheet(QString::fromUtf8("/*\346\214\211\351\222\256-\347\231\273\345\275\225*/\n"
"QPushButton{\n"
"    color:#ffffff;\n"
"    border: none;\n"
"    background-color:#fd6c92;\n"
"    border-radius: 5px;\n"
"}\n"
"/*\346\214\211\351\222\256-\347\231\273\345\275\225-\351\274\240\346\240\207\346\202\254\345\201\234*/\n"
"QPushButton:hover{\n"
"    color:#ffffff;\n"
"    border: none;\n"
"    background-color:#fd4979;\n"
"    border-radius: 5px;\n"
"}\n"
"/*\346\214\211\351\222\256-\347\231\273\345\275\225-\351\274\240\346\240\207\346\214\211\344\270\213*/\n"
"QPushButton:pressed{\n"
"    color:#ffffff;\n"
"    border: none;\n"
"    background-color:#fd6c92;\n"
"    border-radius: 5px;\n"
"}"));

        horizontalLayout_11->addWidget(btn_login_login);

        btn_login_register = new QPushButton(widget_19);
        btn_login_register->setObjectName(QString::fromUtf8("btn_login_register"));
        sizePolicy3.setHeightForWidth(btn_login_register->sizePolicy().hasHeightForWidth());
        btn_login_register->setSizePolicy(sizePolicy3);
        btn_login_register->setStyleSheet(QString::fromUtf8("/*\346\214\211\351\222\256-\347\231\273\345\275\225*/\n"
"QPushButton{\n"
"    color:#ffffff;\n"
"    border: none;\n"
"    background-color:#fd6c92;\n"
"    border-radius: 5px;\n"
"}\n"
"/*\346\214\211\351\222\256-\347\231\273\345\275\225-\351\274\240\346\240\207\346\202\254\345\201\234*/\n"
"QPushButton:hover{\n"
"    color:#ffffff;\n"
"    border: none;\n"
"    background-color:#fd4979;\n"
"    border-radius: 5px;\n"
"}\n"
"/*\346\214\211\351\222\256-\347\231\273\345\275\225-\351\274\240\346\240\207\346\214\211\344\270\213*/\n"
"QPushButton:pressed{\n"
"    color:#ffffff;\n"
"    border: none;\n"
"    background-color:#fd6c92;\n"
"    border-radius: 5px;\n"
"}"));

        horizontalLayout_11->addWidget(btn_login_register);


        verticalLayout_7->addWidget(widget_19);


        gridLayout_9->addWidget(widget_18, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_11, 2, 1, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        widget_20 = new QWidget(page_3);
        widget_20->setObjectName(QString::fromUtf8("widget_20"));
        widget_20->setGeometry(QRect(20, 20, 341, 61));
        widget_20->setMinimumSize(QSize(341, 61));
        widget_20->setMaximumSize(QSize(341, 61));
        QFont font1;
        font1.setPointSize(16);
        widget_20->setFont(font1);
        horizontalLayout_12 = new QHBoxLayout(widget_20);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_14 = new QLabel(widget_20);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_12->addWidget(label_14);

        cB_camera = new QComboBox(widget_20);
        cB_camera->setObjectName(QString::fromUtf8("cB_camera"));
        sizePolicy.setHeightForWidth(cB_camera->sizePolicy().hasHeightForWidth());
        cB_camera->setSizePolicy(sizePolicy);

        horizontalLayout_12->addWidget(cB_camera);

        lbl_video_show = new QLabel(page_3);
        lbl_video_show->setObjectName(QString::fromUtf8("lbl_video_show"));
        lbl_video_show->setGeometry(QRect(10, 100, 671, 261));
        lbl_video_show->setFrameShape(QFrame::WinPanel);
        lbl_video_show->setFrameShadow(QFrame::Sunken);
        lbl_display = new QLabel(page_3);
        lbl_display->setObjectName(QString::fromUtf8("lbl_display"));
        lbl_display->setGeometry(QRect(10, 400, 431, 51));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 460, 262, 55));
        horizontalLayout_13 = new QHBoxLayout(groupBox_3);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        btn_open_camera = new QPushButton(groupBox_3);
        btn_open_camera->setObjectName(QString::fromUtf8("btn_open_camera"));

        horizontalLayout_13->addWidget(btn_open_camera);

        btn_close_camera = new QPushButton(groupBox_3);
        btn_close_camera->setObjectName(QString::fromUtf8("btn_close_camera"));

        horizontalLayout_13->addWidget(btn_close_camera);

        btn_capture = new QPushButton(groupBox_3);
        btn_capture->setObjectName(QString::fromUtf8("btn_capture"));

        horizontalLayout_13->addWidget(btn_capture);

        groupBox_4 = new QGroupBox(page_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(410, 14, 201, 71));
        horizontalLayout_14 = new QHBoxLayout(groupBox_4);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_14->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_14->addWidget(pushButton_2);

        widget_21 = new QWidget(page_3);
        widget_21->setObjectName(QString::fromUtf8("widget_21"));
        widget_21->setGeometry(QRect(10, 550, 1001, 61));
        horizontalLayout_15 = new QHBoxLayout(widget_21);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        btn_setSavedPath = new QPushButton(widget_21);
        btn_setSavedPath->setObjectName(QString::fromUtf8("btn_setSavedPath"));

        horizontalLayout_15->addWidget(btn_setSavedPath);

        label_3 = new QLabel(widget_21);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_15->addWidget(label_3);

        lbl_savedPath = new QLabel(widget_21);
        lbl_savedPath->setObjectName(QString::fromUtf8("lbl_savedPath"));
        sizePolicy.setHeightForWidth(lbl_savedPath->sizePolicy().hasHeightForWidth());
        lbl_savedPath->setSizePolicy(sizePolicy);

        horizontalLayout_15->addWidget(lbl_savedPath);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 240, 54, 12));
        stackedWidget->addWidget(page_4);

        gridLayout_2->addWidget(stackedWidget, 0, 1, 1, 1);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        btn_injection->setText(QApplication::translate("Widget", "\347\226\253\350\213\227\346\263\250\345\260\204", nullptr));
        btn_setting->setText(QApplication::translate("Widget", "\350\256\276\347\275\256", nullptr));
        btn_login->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        btn_message->setText(QApplication::translate("Widget", "\346\212\244\345\243\253\350\265\204\350\264\250", nullptr));
        lbl_show->setText(QString());
        btn_input->setText(QApplication::translate("Widget", "\345\275\225\345\205\245", nullptr));
        label_9->setText(QApplication::translate("Widget", " \345\267\245\345\217\267\357\274\232", nullptr));
        label_8->setText(QApplication::translate("Widget", " \345\247\223\345\220\215\357\274\232", nullptr));
        label_10->setText(QApplication::translate("Widget", " \350\265\204\350\264\250\346\234\211\346\225\210\346\234\237", nullptr));
        lbl_image->setText(QString());
        btn_choose->setText(QApplication::translate("Widget", "  \351\200\211\346\213\251\350\265\204\350\264\250\345\233\276\347\211\207", nullptr));
        lbl_filename->setText(QApplication::translate("Widget", "\346\234\252\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", " \345\275\225\345\205\245", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", " \346\237\245\350\257\242\346\235\241\344\273\2661", nullptr));
        label->setText(QApplication::translate("Widget", "\346\212\244\345\243\253\345\267\245\345\217\267\357\274\232", nullptr));
        label_5->setText(QApplication::translate("Widget", " \345\247\223\345\220\215\357\274\232", nullptr));
        label_7->setText(QApplication::translate("Widget", " \350\265\204\350\264\250\347\212\266\346\200\201\357\274\232", nullptr));
        cB_select_status->setItemText(0, QApplication::translate("Widget", "\344\273\273\346\204\217", nullptr));
        cB_select_status->setItemText(1, QApplication::translate("Widget", "\346\234\211\346\225\210\346\234\237\345\206\205", nullptr));
        cB_select_status->setItemText(2, QApplication::translate("Widget", "\345\267\262\345\244\261\346\225\210", nullptr));

        btn_select1->setText(QApplication::translate("Widget", " \346\237\245\350\257\242", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", " \346\237\245\350\257\242\346\235\241\344\273\2662", nullptr));
        label_6->setText(QApplication::translate("Widget", "\346\210\252\346\255\242\346\227\245\346\234\237\357\274\232", nullptr));
        btn_select2->setText(QApplication::translate("Widget", " \346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Widget", "\346\237\245\346\211\276", nullptr));
        label_11->setText(QApplication::translate("Widget", " \345\247\223\345\220\215\357\274\232", nullptr));
        btn_select->setText(QApplication::translate("Widget", " \346\237\245\350\257\242", nullptr));
        btn_showAll->setText(QApplication::translate("Widget", "\346\230\276\347\244\272\345\205\250\350\241\250", nullptr));
        btn_submit->setText(QApplication::translate("Widget", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        btn_revert->setText(QApplication::translate("Widget", "\346\222\244\351\224\200\344\277\256\346\224\271", nullptr));
        btn_delete->setText(QApplication::translate("Widget", " \345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", nullptr));
        btn_ascend->setText(QApplication::translate("Widget", "\346\214\211ID\345\215\207\345\272\217\346\216\222\345\210\227", nullptr));
        btn_descend->setText(QApplication::translate("Widget", "\346\214\211ID\351\231\215\345\272\217\346\216\222\345\210\227", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "\344\277\256\346\224\271", nullptr));
        label_2->setText(QApplication::translate("Widget", "login", nullptr));
        label_12->setText(QString());
        label_13->setText(QString());
        btn_login_login->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        btn_login_register->setText(QApplication::translate("Widget", "\346\263\250\345\206\214", nullptr));
        label_14->setText(QApplication::translate("Widget", " \347\233\270\346\234\272\357\274\232", nullptr));
        lbl_video_show->setText(QString());
        lbl_display->setText(QApplication::translate("Widget", "\345\275\225\345\210\266\346\227\266\351\227\264", nullptr));
        groupBox_3->setTitle(QApplication::translate("Widget", "QT\350\207\252\345\270\246", nullptr));
        btn_open_camera->setText(QApplication::translate("Widget", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", nullptr));
        btn_close_camera->setText(QApplication::translate("Widget", "  \345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", nullptr));
        btn_capture->setText(QApplication::translate("Widget", " \346\213\215\347\205\247", nullptr));
        groupBox_4->setTitle(QApplication::translate("Widget", "OpenCV", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\345\275\225\345\210\266", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "\347\273\223\346\235\237", nullptr));
        btn_setSavedPath->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\346\226\207\344\273\266\344\277\235\345\255\230\350\267\257\345\276\204", nullptr));
        label_3->setText(QApplication::translate("Widget", "\345\275\225\345\203\217\344\277\235\345\255\230\350\267\257\345\276\204:", nullptr));
        lbl_savedPath->setText(QApplication::translate("Widget", "null", nullptr));
        label_4->setText(QApplication::translate("Widget", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
