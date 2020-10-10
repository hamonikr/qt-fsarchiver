/********************************************************************************
** Form generated from reading UI file 'net.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NET_H
#define UI_NET_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Net
{
public:
    QLabel *label_2;
    QLabel *label_folder;
    QPushButton *pushButton_partition;
    QLabel *label_Partition;
    QGroupBox *groupBox;
    QRadioButton *rdBt_saveFsArchiv;
    QRadioButton *rdBt_restoreFsArchiv;
    QListWidget *listWidget;
    QPushButton *pushButton_folder_free;
    QLineEdit *lineEdit_DateiName;
    QPushButton *bt_net_art;
    QLineEdit *txt_rechner_net;
    QPushButton *pushButton_end;
    QPushButton *pushButton_restore;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *AnzahlsaveFile;
    QLabel *label_6;
    QLineEdit *AnzahlgesicherteFile;
    QLineEdit *MinuteElapsed;
    QLabel *label_8;
    QLineEdit *SekundeElapsed;
    QLabel *label_7;
    QLineEdit *MinuteRemaining;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *SekundeRemaining;
    QLabel *label_11;
    QProgressBar *progressBar;
    QLabel *label_folder_free;
    QListWidget *listWidget_free_folder;
    QLineEdit *restore_file_name_txt;
    QFrame *frame_2;
    QComboBox *cmb_zip;
    QLabel *label_12;
    QComboBox *cmb_kerne;
    QCheckBox *chk_Beschreibung;
    QLineEdit *lineKey;
    QCheckBox *chk_overwrite;
    QCheckBox *chk_split;
    QCheckBox *chk_key;
    QCheckBox *chk_pbr;
    QCheckBox *chk_path;
    QComboBox *cmb_zstd_net;
    QComboBox *cmb_Net;
    QLabel *label_13;
    QPushButton *bt_toParent;
    QPushButton *bt_treeWiget;
    QTreeWidget *treeWidget;
    QPushButton *pushButton_zstd_net;
    QPushButton *pushButton_partition_2;
    QPushButton *bt_treeWiget_2;
    QLabel *label;
    QLabel *label_4;
    QPushButton *pushButton_folder_free_2;
    QPushButton *pushButton_save;

    void setupUi(QDialog *Dialog_Net)
    {
        if (Dialog_Net->objectName().isEmpty())
            Dialog_Net->setObjectName(QString::fromUtf8("Dialog_Net"));
        Dialog_Net->resize(777, 671);
        label_2 = new QLabel(Dialog_Net);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(385, 450, 351, 21));
        label_folder = new QLabel(Dialog_Net);
        label_folder->setObjectName(QString::fromUtf8("label_folder"));
        label_folder->setGeometry(QRect(385, 405, 371, 18));
        pushButton_partition = new QPushButton(Dialog_Net);
        pushButton_partition->setObjectName(QString::fromUtf8("pushButton_partition"));
        pushButton_partition->setGeometry(QRect(150, 420, 20, 20));
        pushButton_partition->setMinimumSize(QSize(20, 0));
        label_Partition = new QLabel(Dialog_Net);
        label_Partition->setObjectName(QString::fromUtf8("label_Partition"));
        label_Partition->setGeometry(QRect(390, 40, 361, 18));
        groupBox = new QGroupBox(Dialog_Net);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 360, 71));
        groupBox->setSizeIncrement(QSize(10, 10));
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        rdBt_saveFsArchiv = new QRadioButton(groupBox);
        rdBt_saveFsArchiv->setObjectName(QString::fromUtf8("rdBt_saveFsArchiv"));
        rdBt_saveFsArchiv->setGeometry(QRect(0, 20, 161, 40));
        rdBt_restoreFsArchiv = new QRadioButton(groupBox);
        rdBt_restoreFsArchiv->setObjectName(QString::fromUtf8("rdBt_restoreFsArchiv"));
        rdBt_restoreFsArchiv->setGeometry(QRect(170, 20, 181, 40));
        rdBt_restoreFsArchiv->raise();
        rdBt_saveFsArchiv->raise();
        listWidget = new QListWidget(Dialog_Net);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(390, 80, 371, 151));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier 10 Pitch"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        listWidget->setFont(font);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_folder_free = new QPushButton(Dialog_Net);
        pushButton_folder_free->setObjectName(QString::fromUtf8("pushButton_folder_free"));
        pushButton_folder_free->setGeometry(QRect(230, 420, 21, 21));
        lineEdit_DateiName = new QLineEdit(Dialog_Net);
        lineEdit_DateiName->setObjectName(QString::fromUtf8("lineEdit_DateiName"));
        lineEdit_DateiName->setGeometry(QRect(20, 340, 351, 26));
        bt_net_art = new QPushButton(Dialog_Net);
        bt_net_art->setObjectName(QString::fromUtf8("bt_net_art"));
        bt_net_art->setGeometry(QRect(190, 420, 21, 20));
        txt_rechner_net = new QLineEdit(Dialog_Net);
        txt_rechner_net->setObjectName(QString::fromUtf8("txt_rechner_net"));
        txt_rechner_net->setGeometry(QRect(385, 470, 371, 27));
        pushButton_end = new QPushButton(Dialog_Net);
        pushButton_end->setObjectName(QString::fromUtf8("pushButton_end"));
        pushButton_end->setGeometry(QRect(20, 459, 351, 41));
        pushButton_restore = new QPushButton(Dialog_Net);
        pushButton_restore->setObjectName(QString::fromUtf8("pushButton_restore"));
        pushButton_restore->setGeometry(QRect(20, 415, 351, 41));
        frame = new QFrame(Dialog_Net);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 500, 741, 153));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setLocale(QLocale(QLocale::German, QLocale::Germany));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        AnzahlsaveFile = new QLineEdit(frame);
        AnzahlsaveFile->setObjectName(QString::fromUtf8("AnzahlsaveFile"));
        AnzahlsaveFile->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(AnzahlsaveFile, 0, 1, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        AnzahlgesicherteFile = new QLineEdit(frame);
        AnzahlgesicherteFile->setObjectName(QString::fromUtf8("AnzahlgesicherteFile"));
        AnzahlgesicherteFile->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(AnzahlgesicherteFile, 1, 1, 1, 1);

        MinuteElapsed = new QLineEdit(frame);
        MinuteElapsed->setObjectName(QString::fromUtf8("MinuteElapsed"));
        MinuteElapsed->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(MinuteElapsed, 0, 3, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 6, 1, 1);

        SekundeElapsed = new QLineEdit(frame);
        SekundeElapsed->setObjectName(QString::fromUtf8("SekundeElapsed"));
        SekundeElapsed->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(SekundeElapsed, 0, 5, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 4, 1, 1);

        MinuteRemaining = new QLineEdit(frame);
        MinuteRemaining->setObjectName(QString::fromUtf8("MinuteRemaining"));
        MinuteRemaining->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(MinuteRemaining, 1, 3, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 2, 1, 1);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 1, 4, 1, 1);

        SekundeRemaining = new QLineEdit(frame);
        SekundeRemaining->setObjectName(QString::fromUtf8("SekundeRemaining"));
        SekundeRemaining->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(SekundeRemaining, 1, 5, 1, 1);

        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 1, 6, 1, 1);

        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(100);
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 3, 0, 1, 7);

        label_folder_free = new QLabel(Dialog_Net);
        label_folder_free->setObjectName(QString::fromUtf8("label_folder_free"));
        label_folder_free->setGeometry(QRect(390, 280, 261, 17));
        listWidget_free_folder = new QListWidget(Dialog_Net);
        listWidget_free_folder->setObjectName(QString::fromUtf8("listWidget_free_folder"));
        listWidget_free_folder->setGeometry(QRect(390, 300, 371, 101));
        restore_file_name_txt = new QLineEdit(Dialog_Net);
        restore_file_name_txt->setObjectName(QString::fromUtf8("restore_file_name_txt"));
        restore_file_name_txt->setGeometry(QRect(385, 425, 371, 27));
        frame_2 = new QFrame(Dialog_Net);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, 80, 351, 235));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        cmb_zip = new QComboBox(frame_2);
        cmb_zip->setObjectName(QString::fromUtf8("cmb_zip"));
        cmb_zip->setGeometry(QRect(102, 200, 161, 27));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 160, 271, 41));
        label_12->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        cmb_kerne = new QComboBox(frame_2);
        cmb_kerne->setObjectName(QString::fromUtf8("cmb_kerne"));
        cmb_kerne->setGeometry(QRect(290, 168, 51, 27));
        chk_Beschreibung = new QCheckBox(frame_2);
        chk_Beschreibung->setObjectName(QString::fromUtf8("chk_Beschreibung"));
        chk_Beschreibung->setGeometry(QRect(0, 0, 331, 23));
        lineKey = new QLineEdit(frame_2);
        lineKey->setObjectName(QString::fromUtf8("lineKey"));
        lineKey->setGeometry(QRect(220, 58, 121, 26));
        chk_overwrite = new QCheckBox(frame_2);
        chk_overwrite->setObjectName(QString::fromUtf8("chk_overwrite"));
        chk_overwrite->setGeometry(QRect(0, 28, 341, 23));
        chk_split = new QCheckBox(frame_2);
        chk_split->setObjectName(QString::fromUtf8("chk_split"));
        chk_split->setGeometry(QRect(0, 88, 251, 23));
        chk_key = new QCheckBox(frame_2);
        chk_key->setObjectName(QString::fromUtf8("chk_key"));
        chk_key->setGeometry(QRect(0, 48, 221, 41));
        chk_pbr = new QCheckBox(frame_2);
        chk_pbr->setObjectName(QString::fromUtf8("chk_pbr"));
        chk_pbr->setGeometry(QRect(0, 114, 261, 22));
        chk_path = new QCheckBox(frame_2);
        chk_path->setObjectName(QString::fromUtf8("chk_path"));
        chk_path->setGeometry(QRect(0, 140, 351, 22));
        cmb_zstd_net = new QComboBox(frame_2);
        cmb_zstd_net->setObjectName(QString::fromUtf8("cmb_zstd_net"));
        cmb_zstd_net->setGeometry(QRect(290, 200, 51, 27));
        cmb_Net = new QComboBox(Dialog_Net);
        cmb_Net->setObjectName(QString::fromUtf8("cmb_Net"));
        cmb_Net->setGeometry(QRect(560, 240, 201, 27));
        label_13 = new QLabel(Dialog_Net);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(390, 235, 151, 41));
        label_13->setWordWrap(true);
        bt_toParent = new QPushButton(Dialog_Net);
        bt_toParent->setObjectName(QString::fromUtf8("bt_toParent"));
        bt_toParent->setGeometry(QRect(730, 270, 31, 27));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/src/images/cdtoparent.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_toParent->setIcon(icon);
        bt_treeWiget = new QPushButton(Dialog_Net);
        bt_treeWiget->setObjectName(QString::fromUtf8("bt_treeWiget"));
        bt_treeWiget->setGeometry(QRect(40, 380, 16, 21));
        treeWidget = new QTreeWidget(Dialog_Net);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(390, 300, 371, 101));
        pushButton_zstd_net = new QPushButton(Dialog_Net);
        pushButton_zstd_net->setObjectName(QString::fromUtf8("pushButton_zstd_net"));
        pushButton_zstd_net->setGeometry(QRect(210, 460, 21, 27));
        pushButton_partition_2 = new QPushButton(Dialog_Net);
        pushButton_partition_2->setObjectName(QString::fromUtf8("pushButton_partition_2"));
        pushButton_partition_2->setGeometry(QRect(240, 465, 21, 27));
        bt_treeWiget_2 = new QPushButton(Dialog_Net);
        bt_treeWiget_2->setObjectName(QString::fromUtf8("bt_treeWiget_2"));
        bt_treeWiget_2->setGeometry(QRect(250, 380, 16, 21));
        label = new QLabel(Dialog_Net);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 273, 91, 41));
        label_4 = new QLabel(Dialog_Net);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 320, 291, 18));
        pushButton_folder_free_2 = new QPushButton(Dialog_Net);
        pushButton_folder_free_2->setObjectName(QString::fromUtf8("pushButton_folder_free_2"));
        pushButton_folder_free_2->setGeometry(QRect(100, 380, 16, 21));
        pushButton_save = new QPushButton(Dialog_Net);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(20, 370, 351, 41));
        pushButton_partition_2->raise();
        pushButton_zstd_net->raise();
        bt_treeWiget->raise();
        label_2->raise();
        label_folder->raise();
        pushButton_partition->raise();
        label_Partition->raise();
        groupBox->raise();
        listWidget->raise();
        pushButton_folder_free->raise();
        lineEdit_DateiName->raise();
        bt_net_art->raise();
        txt_rechner_net->raise();
        pushButton_end->raise();
        pushButton_restore->raise();
        frame->raise();
        label_folder_free->raise();
        listWidget_free_folder->raise();
        restore_file_name_txt->raise();
        frame_2->raise();
        cmb_Net->raise();
        label_13->raise();
        bt_toParent->raise();
        treeWidget->raise();
        bt_treeWiget_2->raise();
        label->raise();
        label_4->raise();
        pushButton_folder_free_2->raise();
        pushButton_save->raise();

        retranslateUi(Dialog_Net);
        QObject::connect(listWidget, SIGNAL(clicked(QModelIndex)), pushButton_partition, SLOT(click()));
        QObject::connect(listWidget_free_folder, SIGNAL(clicked(QModelIndex)), pushButton_folder_free, SLOT(click()));
        QObject::connect(cmb_Net, SIGNAL(activated(int)), bt_net_art, SLOT(click()));
        QObject::connect(treeWidget, SIGNAL(clicked(QModelIndex)), bt_treeWiget, SLOT(click()));
        QObject::connect(cmb_zip, SIGNAL(activated(QString)), pushButton_zstd_net, SLOT(click()));
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), pushButton_partition_2, SLOT(click()));
        QObject::connect(treeWidget, SIGNAL(currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)), bt_treeWiget_2, SLOT(click()));
        QObject::connect(listWidget_free_folder, SIGNAL(currentRowChanged(int)), pushButton_folder_free_2, SLOT(click()));

        QMetaObject::connectSlotsByName(Dialog_Net);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Net)
    {
        Dialog_Net->setWindowTitle(QApplication::translate("Dialog_Net", "Backup/restore partition over network", nullptr));
        label_2->setText(QApplication::translate("Dialog_Net", "Network computer  name:", nullptr));
        label_folder->setText(QApplication::translate("Dialog_Net", "Name of the backup file:", nullptr));
        pushButton_partition->setText(QApplication::translate("Dialog_Net", "S", nullptr));
#ifndef QT_NO_TOOLTIP
        label_Partition->setToolTip(QApplication::translate("Dialog_Net", "Select the partition to back up or write back to.", nullptr));
#endif // QT_NO_TOOLTIP
        label_Partition->setText(QApplication::translate("Dialog_Net", "Existing partitions/directories:", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog_Net", "Planned action:", nullptr));
        rdBt_saveFsArchiv->setText(QApplication::translate("Dialog_Net", "Save par&tition\n"
"with fs-archiver", nullptr));
        rdBt_restoreFsArchiv->setText(QApplication::translate("Dialog_Net", "Restore partition\n"
"with fs-archiver", nullptr));
        pushButton_folder_free->setText(QApplication::translate("Dialog_Net", "n", nullptr));
        bt_net_art->setText(QString());
        pushButton_end->setText(QApplication::translate("Dialog_Net", "Exit", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_restore->setToolTip(QApplication::translate("Dialog_Net", "Start restore a partition.", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_restore->setText(QApplication::translate("Dialog_Net", "Write back partition", nullptr));
        label_5->setText(QApplication::translate("Dialog_Net", "elapsed time:", nullptr));
        label_3->setText(QApplication::translate("Dialog_Net", "On the number saved\n"
"Files/directories:", nullptr));
        label_6->setText(QApplication::translate("Dialog_Net", "already saved \n"
"files/directories:", nullptr));
        label_8->setText(QApplication::translate("Dialog_Net", "seconds", nullptr));
        label_7->setText(QApplication::translate("Dialog_Net", "minutes", nullptr));
        label_9->setText(QApplication::translate("Dialog_Net", "remaining time", nullptr));
        label_10->setText(QApplication::translate("Dialog_Net", "minutes", nullptr));
        label_11->setText(QApplication::translate("Dialog_Net", "seconds", nullptr));
#ifndef QT_NO_TOOLTIP
        label_folder_free->setToolTip(QApplication::translate("Dialog_Net", "Directory in which the partition is backed up or from which the recovery file is selected.", nullptr));
#endif // QT_NO_TOOLTIP
        label_folder_free->setText(QApplication::translate("Dialog_Net", "Please select the folder.", nullptr));
        label_12->setText(QApplication::translate("Dialog_Net", "Number of processors\n"
"cores for to be used fsarchiver:", nullptr));
#ifndef QT_NO_TOOLTIP
        chk_Beschreibung->setToolTip(QApplication::translate("Dialog_Net", "Notes to the backup is written to a file.", nullptr));
#endif // QT_NO_TOOLTIP
        chk_Beschreibung->setText(QApplication::translate("Dialog_Net", "Notes on the backup", nullptr));
#ifndef QT_NO_TOOLTIP
        chk_overwrite->setToolTip(QApplication::translate("Dialog_Net", "Identical backup files are overwritten without prior consultation.", nullptr));
#endif // QT_NO_TOOLTIP
        chk_overwrite->setText(QApplication::translate("Dialog_Net", "overwrite existing backup.", nullptr));
        chk_split->setText(QApplication::translate("Dialog_Net", "Split archive , specified size:", nullptr));
        chk_key->setText(QApplication::translate("Dialog_Net", "Encrypt \n"
"backup key", nullptr));
#ifndef QT_NO_TOOLTIP
        chk_pbr->setToolTip(QApplication::translate("Dialog_Net", "PBR is first block of any bootable partition.", nullptr));
#endif // QT_NO_TOOLTIP
        chk_pbr->setText(QApplication::translate("Dialog_Net", "Save PBR", nullptr));
        chk_path->setText(QApplication::translate("Dialog_Net", "Writing a backup back to the original path.", nullptr));
        label_13->setText(QApplication::translate("Dialog_Net", "Protocoll for network\n"
"transmission:", nullptr));
        bt_toParent->setText(QString());
        bt_treeWiget->setText(QString());
        pushButton_zstd_net->setText(QApplication::translate("Dialog_Net", "z", nullptr));
        pushButton_partition_2->setText(QApplication::translate("Dialog_Net", "2", nullptr));
        bt_treeWiget_2->setText(QString());
        label->setText(QApplication::translate("Dialog_Net", "Compression\n"
"setting:", nullptr));
        label_4->setText(QApplication::translate("Dialog_Net", "File name of the backup:", nullptr));
        pushButton_folder_free_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_save->setToolTip(QApplication::translate("Dialog_Net", "Start the backup of a partition.", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_save->setText(QApplication::translate("Dialog_Net", "Save partition", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Net: public Ui_Dialog_Net {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NET_H
