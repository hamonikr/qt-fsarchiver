/********************************************************************************
** Form generated from reading UI file 'fsarchiverMain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FSARCHIVERMAIN_H
#define UI_FSARCHIVERMAIN_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPfad_fuer_die_Sicherung_festlegen;
    QAction *action_partition_save;
    QAction *action_partition_restore;
    QAction *action_Einstellungen;
    QAction *action_Information;
    QAction *action_mbr_save;
    QAction *action_mbr_restore;
    QAction *action_dir_restore;
    QAction *action_dir_save;
    QAction *action_Beenden;
    QAction *action_partition_save_net;
    QAction *action_partition_restore_net;
    QAction *breakProcess;
    QAction *action_CloneDrive;
    QAction *action_CloneDrive_net;
    QAction *actionClone_HD;
    QAction *action_Save_directories_on_network;
    QAction *action_Restore_directories_from_network;
    QWidget *centralwidget;
    QLabel *label_Partition;
    QLabel *label_folder;
    QPushButton *pushButton_save;
    QListWidget *listWidget;
    QTreeView *treeView;
    QPushButton *pushButton_partition;
    QPushButton *pushButton_folder;
    QLineEdit *lineEdit_DateiName;
    QPushButton *pushButton_restore;
    QLabel *label_4;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_8;
    QLineEdit *SekundeElapsed;
    QLineEdit *MinuteRemaining;
    QLineEdit *SekundeRemaining;
    QLabel *label_6;
    QLabel *label_9;
    QLineEdit *AnzahlsaveFile;
    QLineEdit *AnzahlgesicherteFile;
    QLineEdit *MinuteElapsed;
    QProgressBar *progressBar;
    QFrame *frame_2;
    QComboBox *cmb_zip;
    QLabel *label_11;
    QComboBox *cmb_kerne;
    QLabel *label;
    QCheckBox *chk_Beschreibung;
    QLineEdit *lineKey;
    QCheckBox *chk_overwrite;
    QCheckBox *chk_split;
    QCheckBox *chk_key;
    QCheckBox *chk_pbr;
    QComboBox *cmb_GB;
    QLabel *label_12;
    QComboBox *cmb_zstd;
    QGroupBox *groupBox;
    QRadioButton *rdBt_saveFsArchiv;
    QRadioButton *rdBt_restoreFsArchiv;
    QCheckBox *chk_hidden;
    QPushButton *pushButton_zstd;
    QPushButton *pushButton_partition_2;
    QPushButton *pushButton_folder_2;
    QPushButton *pushButton_end;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QMenuBar *menuBar;
    QMenu *menuAktionen;
    QMenu *menu_Einstellungen;
    QMenu *menuInformation;
    QMenu *menu_Beenden;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(770, 710);
        actionPfad_fuer_die_Sicherung_festlegen = new QAction(MainWindow);
        actionPfad_fuer_die_Sicherung_festlegen->setObjectName(QString::fromUtf8("actionPfad_fuer_die_Sicherung_festlegen"));
        action_partition_save = new QAction(MainWindow);
        action_partition_save->setObjectName(QString::fromUtf8("action_partition_save"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/src/images/disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_partition_save->setIcon(icon);
        action_partition_restore = new QAction(MainWindow);
        action_partition_restore->setObjectName(QString::fromUtf8("action_partition_restore"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/src/images/book_previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_partition_restore->setIcon(icon1);
        action_Einstellungen = new QAction(MainWindow);
        action_Einstellungen->setObjectName(QString::fromUtf8("action_Einstellungen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/src/images/einstellung.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Einstellungen->setIcon(icon2);
        action_Information = new QAction(MainWindow);
        action_Information->setObjectName(QString::fromUtf8("action_Information"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/src/images/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Information->setIcon(icon3);
        action_mbr_save = new QAction(MainWindow);
        action_mbr_save->setObjectName(QString::fromUtf8("action_mbr_save"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/src/images/mbr_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_mbr_save->setIcon(icon4);
        action_mbr_restore = new QAction(MainWindow);
        action_mbr_restore->setObjectName(QString::fromUtf8("action_mbr_restore"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/src/images/mbr_restore.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_mbr_restore->setIcon(icon5);
        action_dir_restore = new QAction(MainWindow);
        action_dir_restore->setObjectName(QString::fromUtf8("action_dir_restore"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/src/images/folder_back.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_dir_restore->setIcon(icon6);
        action_dir_save = new QAction(MainWindow);
        action_dir_save->setObjectName(QString::fromUtf8("action_dir_save"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/src/images/folder_go.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_dir_save->setIcon(icon7);
        action_Beenden = new QAction(MainWindow);
        action_Beenden->setObjectName(QString::fromUtf8("action_Beenden"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/src/images/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Beenden->setIcon(icon8);
        action_partition_save_net = new QAction(MainWindow);
        action_partition_save_net->setObjectName(QString::fromUtf8("action_partition_save_net"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/src/images/applications-internet.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_partition_save_net->setIcon(icon9);
        action_partition_restore_net = new QAction(MainWindow);
        action_partition_restore_net->setObjectName(QString::fromUtf8("action_partition_restore_net"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/src/images/applications-internet-ein.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_partition_restore_net->setIcon(icon10);
        breakProcess = new QAction(MainWindow);
        breakProcess->setObjectName(QString::fromUtf8("breakProcess"));
        breakProcess->setIcon(icon8);
        action_CloneDrive = new QAction(MainWindow);
        action_CloneDrive->setObjectName(QString::fromUtf8("action_CloneDrive"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/src/images/clone1.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_CloneDrive->setIcon(icon11);
        action_CloneDrive_net = new QAction(MainWindow);
        action_CloneDrive_net->setObjectName(QString::fromUtf8("action_CloneDrive_net"));
        actionClone_HD = new QAction(MainWindow);
        actionClone_HD->setObjectName(QString::fromUtf8("actionClone_HD"));
        actionClone_HD->setIcon(icon11);
        action_Save_directories_on_network = new QAction(MainWindow);
        action_Save_directories_on_network->setObjectName(QString::fromUtf8("action_Save_directories_on_network"));
        action_Restore_directories_from_network = new QAction(MainWindow);
        action_Restore_directories_from_network->setObjectName(QString::fromUtf8("action_Restore_directories_from_network"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_Partition = new QLabel(centralwidget);
        label_Partition->setObjectName(QString::fromUtf8("label_Partition"));
        label_Partition->setGeometry(QRect(370, 10, 371, 18));
        label_Partition->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_folder = new QLabel(centralwidget);
        label_folder->setObjectName(QString::fromUtf8("label_folder"));
        label_folder->setGeometry(QRect(370, 165, 371, 18));
        label_folder->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(10, 329, 351, 41));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(370, 30, 380, 131));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier 10 Pitch"));
        listWidget->setFont(font);
        listWidget->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeView = new QTreeView(centralwidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(370, 185, 380, 240));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        treeView->setFont(font1);
        treeView->header()->setDefaultSectionSize(400);
        pushButton_partition = new QPushButton(centralwidget);
        pushButton_partition->setObjectName(QString::fromUtf8("pushButton_partition"));
        pushButton_partition->setGeometry(QRect(120, 430, 20, 20));
        pushButton_partition->setMinimumSize(QSize(20, 0));
        pushButton_folder = new QPushButton(centralwidget);
        pushButton_folder->setObjectName(QString::fromUtf8("pushButton_folder"));
        pushButton_folder->setGeometry(QRect(190, 430, 20, 20));
        lineEdit_DateiName = new QLineEdit(centralwidget);
        lineEdit_DateiName->setObjectName(QString::fromUtf8("lineEdit_DateiName"));
        lineEdit_DateiName->setGeometry(QRect(10, 303, 351, 26));
        pushButton_restore = new QPushButton(centralwidget);
        pushButton_restore->setObjectName(QString::fromUtf8("pushButton_restore"));
        pushButton_restore->setGeometry(QRect(10, 370, 351, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 283, 291, 18));
        label_4->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 460, 741, 153));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 2, 6, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 4, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLocale(QLocale(QLocale::German, QLocale::Germany));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 6, 1, 1);

        SekundeElapsed = new QLineEdit(frame);
        SekundeElapsed->setObjectName(QString::fromUtf8("SekundeElapsed"));
        SekundeElapsed->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(SekundeElapsed, 0, 5, 1, 1);

        MinuteRemaining = new QLineEdit(frame);
        MinuteRemaining->setObjectName(QString::fromUtf8("MinuteRemaining"));
        MinuteRemaining->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(MinuteRemaining, 2, 3, 1, 1);

        SekundeRemaining = new QLineEdit(frame);
        SekundeRemaining->setObjectName(QString::fromUtf8("SekundeRemaining"));
        SekundeRemaining->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(SekundeRemaining, 2, 5, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 2, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 4, 1, 1);

        AnzahlsaveFile = new QLineEdit(frame);
        AnzahlsaveFile->setObjectName(QString::fromUtf8("AnzahlsaveFile"));
        AnzahlsaveFile->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(AnzahlsaveFile, 0, 1, 1, 1);

        AnzahlgesicherteFile = new QLineEdit(frame);
        AnzahlgesicherteFile->setObjectName(QString::fromUtf8("AnzahlgesicherteFile"));
        AnzahlgesicherteFile->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(AnzahlgesicherteFile, 2, 1, 1, 1);

        MinuteElapsed = new QLineEdit(frame);
        MinuteElapsed->setObjectName(QString::fromUtf8("MinuteElapsed"));
        MinuteElapsed->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(MinuteElapsed, 0, 3, 1, 1);

        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(100);
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 4, 0, 1, 7);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 60, 351, 220));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        cmb_zip = new QComboBox(frame_2);
        cmb_zip->setObjectName(QString::fromUtf8("cmb_zip"));
        cmb_zip->setGeometry(QRect(110, 185, 161, 27));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 137, 290, 41));
        label_11->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        cmb_kerne = new QComboBox(frame_2);
        cmb_kerne->setObjectName(QString::fromUtf8("cmb_kerne"));
        cmb_kerne->setGeometry(QRect(300, 145, 45, 27));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 175, 161, 41));
        chk_Beschreibung = new QCheckBox(frame_2);
        chk_Beschreibung->setObjectName(QString::fromUtf8("chk_Beschreibung"));
        chk_Beschreibung->setGeometry(QRect(0, 0, 331, 23));
        lineKey = new QLineEdit(frame_2);
        lineKey->setObjectName(QString::fromUtf8("lineKey"));
        lineKey->setGeometry(QRect(225, 58, 121, 26));
        chk_overwrite = new QCheckBox(frame_2);
        chk_overwrite->setObjectName(QString::fromUtf8("chk_overwrite"));
        chk_overwrite->setGeometry(QRect(0, 28, 341, 23));
        chk_split = new QCheckBox(frame_2);
        chk_split->setObjectName(QString::fromUtf8("chk_split"));
        chk_split->setGeometry(QRect(0, 88, 251, 23));
        chk_key = new QCheckBox(frame_2);
        chk_key->setObjectName(QString::fromUtf8("chk_key"));
        chk_key->setGeometry(QRect(0, 51, 221, 35));
        chk_pbr = new QCheckBox(frame_2);
        chk_pbr->setObjectName(QString::fromUtf8("chk_pbr"));
        chk_pbr->setGeometry(QRect(0, 114, 261, 22));
        cmb_GB = new QComboBox(frame_2);
        cmb_GB->setObjectName(QString::fromUtf8("cmb_GB"));
        cmb_GB->setGeometry(QRect(260, 90, 51, 27));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(318, 95, 21, 17));
        cmb_zstd = new QComboBox(frame_2);
        cmb_zstd->setObjectName(QString::fromUtf8("cmb_zstd"));
        cmb_zstd->setGeometry(QRect(300, 185, 45, 27));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 362, 71));
        groupBox->setSizeIncrement(QSize(10, 10));
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        rdBt_saveFsArchiv = new QRadioButton(groupBox);
        rdBt_saveFsArchiv->setObjectName(QString::fromUtf8("rdBt_saveFsArchiv"));
        rdBt_saveFsArchiv->setGeometry(QRect(0, 20, 165, 40));
        rdBt_restoreFsArchiv = new QRadioButton(groupBox);
        rdBt_restoreFsArchiv->setObjectName(QString::fromUtf8("rdBt_restoreFsArchiv"));
        rdBt_restoreFsArchiv->setGeometry(QRect(165, 20, 195, 40));
        chk_hidden = new QCheckBox(centralwidget);
        chk_hidden->setObjectName(QString::fromUtf8("chk_hidden"));
        chk_hidden->setGeometry(QRect(370, 430, 361, 22));
        pushButton_zstd = new QPushButton(centralwidget);
        pushButton_zstd->setObjectName(QString::fromUtf8("pushButton_zstd"));
        pushButton_zstd->setGeometry(QRect(230, 430, 21, 20));
        pushButton_partition_2 = new QPushButton(centralwidget);
        pushButton_partition_2->setObjectName(QString::fromUtf8("pushButton_partition_2"));
        pushButton_partition_2->setGeometry(QRect(260, 430, 20, 20));
        pushButton_folder_2 = new QPushButton(centralwidget);
        pushButton_folder_2->setObjectName(QString::fromUtf8("pushButton_folder_2"));
        pushButton_folder_2->setGeometry(QRect(40, 430, 20, 20));
        pushButton_end = new QPushButton(centralwidget);
        pushButton_end->setObjectName(QString::fromUtf8("pushButton_end"));
        pushButton_end->setGeometry(QRect(10, 412, 351, 41));
        MainWindow->setCentralWidget(centralwidget);
        pushButton_partition_2->raise();
        pushButton_zstd->raise();
        pushButton_partition->raise();
        pushButton_folder->raise();
        label_Partition->raise();
        label_folder->raise();
        pushButton_save->raise();
        listWidget->raise();
        treeView->raise();
        lineEdit_DateiName->raise();
        pushButton_restore->raise();
        label_4->raise();
        frame->raise();
        frame_2->raise();
        groupBox->raise();
        chk_hidden->raise();
        pushButton_folder_2->raise();
        pushButton_end->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setOrientation(Qt::Horizontal);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 770, 22));
        menuAktionen = new QMenu(menuBar);
        menuAktionen->setObjectName(QString::fromUtf8("menuAktionen"));
        menu_Einstellungen = new QMenu(menuBar);
        menu_Einstellungen->setObjectName(QString::fromUtf8("menu_Einstellungen"));
        menuInformation = new QMenu(menuBar);
        menuInformation->setObjectName(QString::fromUtf8("menuInformation"));
        menu_Beenden = new QMenu(menuBar);
        menu_Beenden->setObjectName(QString::fromUtf8("menu_Beenden"));
        MainWindow->setMenuBar(menuBar);

        toolBar->addAction(action_partition_save);
        toolBar->addAction(action_partition_restore);
        toolBar->addAction(action_mbr_save);
        toolBar->addAction(action_mbr_restore);
        toolBar->addAction(action_dir_save);
        toolBar->addAction(action_dir_restore);
        toolBar->addAction(action_partition_save_net);
        toolBar->addAction(action_partition_restore_net);
        toolBar->addAction(action_CloneDrive);
        menuBar->addAction(menuAktionen->menuAction());
        menuBar->addAction(menu_Einstellungen->menuAction());
        menuBar->addAction(menuInformation->menuAction());
        menuBar->addAction(menu_Beenden->menuAction());
        menuAktionen->addSeparator();
        menuAktionen->addAction(action_partition_save);
        menuAktionen->addAction(action_partition_restore);
        menuAktionen->addSeparator();
        menuAktionen->addAction(action_partition_save_net);
        menuAktionen->addAction(action_partition_restore_net);
        menuAktionen->addAction(action_mbr_save);
        menuAktionen->addAction(action_mbr_restore);
        menuAktionen->addSeparator();
        menuAktionen->addAction(action_dir_save);
        menuAktionen->addAction(action_dir_restore);
        menuAktionen->addSeparator();
        menuAktionen->addAction(actionClone_HD);
        menu_Einstellungen->addAction(action_Einstellungen);
        menuInformation->addAction(action_Information);
        menu_Beenden->addAction(action_Beenden);

        retranslateUi(MainWindow);
        QObject::connect(listWidget, SIGNAL(clicked(QModelIndex)), pushButton_partition, SLOT(click()));
        QObject::connect(treeView, SIGNAL(clicked(QModelIndex)), pushButton_folder, SLOT(click()));
        QObject::connect(cmb_zip, SIGNAL(activated(QString)), pushButton_zstd, SLOT(click()));
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), pushButton_partition_2, SLOT(click()));
        QObject::connect(treeView, SIGNAL(activated(QModelIndex)), pushButton_folder_2, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Save/restore partition ", nullptr));
        actionPfad_fuer_die_Sicherung_festlegen->setText(QApplication::translate("MainWindow", "Basic Settings", nullptr));
        action_partition_save->setText(QApplication::translate("MainWindow", "&Backup partition", nullptr));
        action_partition_restore->setText(QApplication::translate("MainWindow", "&Restore partition", nullptr));
        action_Einstellungen->setText(QApplication::translate("MainWindow", "&Basic Settings", nullptr));
        action_Information->setText(QApplication::translate("MainWindow", "&Information qt-fsarchiver", nullptr));
        action_mbr_save->setText(QApplication::translate("MainWindow", "Save &MBR/GPT", nullptr));
        action_mbr_restore->setText(QApplication::translate("MainWindow", "R&estore MBR/GPT", nullptr));
        action_dir_restore->setText(QApplication::translate("MainWindow", "Rest&ore directory ", nullptr));
        action_dir_save->setText(QApplication::translate("MainWindow", "Save &directory ", nullptr));
        action_Beenden->setText(QApplication::translate("MainWindow", "&Exit program", nullptr));
        action_partition_save_net->setText(QApplication::translate("MainWindow", "&Save a partition on network", nullptr));
        action_partition_restore_net->setText(QApplication::translate("MainWindow", "Restore &a partition on network", nullptr));
        breakProcess->setText(QApplication::translate("MainWindow", "breakprocess", nullptr));
        action_CloneDrive->setText(QApplication::translate("MainWindow", "Clone Drive HD-Image save/restore ", nullptr));
        action_CloneDrive_net->setText(QApplication::translate("MainWindow", "HD-Image save/restore on network", nullptr));
        actionClone_HD->setText(QApplication::translate("MainWindow", "&Clone HD, HD-Image built and restore", nullptr));
        action_Save_directories_on_network->setText(QApplication::translate("MainWindow", "Save directories on network", nullptr));
        action_Restore_directories_from_network->setText(QApplication::translate("MainWindow", "Restoring directories over a network.", nullptr));
#ifndef QT_NO_TOOLTIP
        label_Partition->setToolTip(QApplication::translate("MainWindow", "Select the partition to be backed up or written back.", nullptr));
#endif // QT_NO_TOOLTIP
        label_Partition->setText(QApplication::translate("MainWindow", "Existing partitions:", nullptr));
#ifndef QT_NO_TOOLTIP
        label_folder->setToolTip(QApplication::translate("MainWindow", "Directory where the backup file is written or directory where the recovery file is stored.", nullptr));
#endif // QT_NO_TOOLTIP
        label_folder->setText(QApplication::translate("MainWindow", "Backup directory:", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_save->setToolTip(QApplication::translate("MainWindow", "Start the backup of a partition.", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_save->setText(QApplication::translate("MainWindow", "Save partition", nullptr));
        pushButton_partition->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_folder->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_restore->setToolTip(QApplication::translate("MainWindow", "Start restore a partition.", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_restore->setText(QApplication::translate("MainWindow", "Partition restore", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Name the backup file:", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "seconds", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "minutes", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "elapsed time:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "On the number saved\n"
"Files/directories:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "already saved \n"
"files/directories:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "seconds", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "remaining time:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "minutes", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Number of processors\n"
"cores for to be used fsarchiver:", nullptr));
        label->setText(QApplication::translate("MainWindow", "Compression\n"
"setting:", nullptr));
#ifndef QT_NO_TOOLTIP
        chk_Beschreibung->setToolTip(QApplication::translate("MainWindow", "Notes about the backup are written to a file.", nullptr));
#endif // QT_NO_TOOLTIP
        chk_Beschreibung->setText(QApplication::translate("MainWindow", "Notes on the backup", nullptr));
#ifndef QT_NO_TOOLTIP
        chk_overwrite->setToolTip(QApplication::translate("MainWindow", "An existing backup file with the same name is overwritten without confirmation.", nullptr));
#endif // QT_NO_TOOLTIP
        chk_overwrite->setText(QApplication::translate("MainWindow", "overwrite existing backup.", nullptr));
        chk_split->setText(QApplication::translate("MainWindow", "Split archive , specified size:", nullptr));
#ifndef QT_NO_TOOLTIP
        chk_key->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        chk_key->setText(QApplication::translate("MainWindow", "Encrypt \n"
"backup key", nullptr));
#ifndef QT_NO_TOOLTIP
        chk_pbr->setToolTip(QApplication::translate("MainWindow", "PBR is the first block of a bootable partition.", nullptr));
#endif // QT_NO_TOOLTIP
        chk_pbr->setText(QApplication::translate("MainWindow", "Save PBR", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "GB", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Planned action:", nullptr));
        rdBt_saveFsArchiv->setText(QApplication::translate("MainWindow", "&Partition save \n"
"with fsarchiver", nullptr));
#ifndef QT_NO_TOOLTIP
        rdBt_restoreFsArchiv->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        rdBt_restoreFsArchiv->setText(QApplication::translate("MainWindow", "Restore partition\n"
"with fsarchi&ver", nullptr));
        chk_hidden->setText(QApplication::translate("MainWindow", "Show hidden directories and files", nullptr));
        pushButton_zstd->setText(QApplication::translate("MainWindow", "z", nullptr));
        pushButton_partition_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_folder_2->setText(QString());
        pushButton_end->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_TOOLTIP
        toolBar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        menuAktionen->setTitle(QApplication::translate("MainWindow", "&Actions", nullptr));
        menu_Einstellungen->setTitle(QApplication::translate("MainWindow", "Se&ttings", nullptr));
        menuInformation->setTitle(QApplication::translate("MainWindow", "&Information", nullptr));
        menu_Beenden->setTitle(QApplication::translate("MainWindow", "&Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FSARCHIVERMAIN_H
