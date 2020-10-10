/********************************************************************************
** Form generated from reading UI file 'dir_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIR_DIALOG_H
#define UI_DIR_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dir_dialog
{
public:
    QPushButton *bt_end;
    QPushButton *bt_save;
    QTreeView *treeView_dir;
    QLabel *label;
    QTreeView *treeView_path;
    QLabel *label_2;
    QFrame *frame;
    QLabel *label_4;
    QLineEdit *AnzahlsaveFile;
    QLabel *label_5;
    QLineEdit *AnzahlgesicherteFile;
    QProgressBar *progressBar;
    QLabel *label_6;
    QLineEdit *MinuteElapsed;
    QLabel *label_7;
    QLineEdit *SekundeElapsed;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *MinuteRemaining;
    QLineEdit *SekundeRemaining;
    QLabel *label_10;
    QLabel *label_11;
    QComboBox *cmb_kerne;
    QLabel *label_12;
    QFrame *frame_2;
    QLabel *label_3;
    QComboBox *cmb_zip;
    QCheckBox *chk_key;
    QLineEdit *lineKey;
    QCheckBox *chk_overwrite;
    QCheckBox *chk_path;
    QComboBox *cmb_zstd_dir;
    QCheckBox *chk_hidden;
    QPushButton *pushButton_zstd_dir;
    QPushButton *bt_path;
    QPushButton *bt_dir;

    void setupUi(QWidget *dir_dialog)
    {
        if (dir_dialog->objectName().isEmpty())
            dir_dialog->setObjectName(QString::fromUtf8("dir_dialog"));
        dir_dialog->resize(714, 654);
        bt_end = new QPushButton(dir_dialog);
        bt_end->setObjectName(QString::fromUtf8("bt_end"));
        bt_end->setGeometry(QRect(375, 457, 321, 41));
        bt_save = new QPushButton(dir_dialog);
        bt_save->setObjectName(QString::fromUtf8("bt_save"));
        bt_save->setGeometry(QRect(375, 415, 321, 41));
        treeView_dir = new QTreeView(dir_dialog);
        treeView_dir->setObjectName(QString::fromUtf8("treeView_dir"));
        treeView_dir->setGeometry(QRect(370, 50, 321, 301));
        treeView_dir->header()->setDefaultSectionSize(400);
        label = new QLabel(dir_dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 25, 311, 18));
        treeView_path = new QTreeView(dir_dialog);
        treeView_path->setObjectName(QString::fromUtf8("treeView_path"));
        treeView_path->setGeometry(QRect(20, 50, 325, 301));
        treeView_path->header()->setDefaultSectionSize(400);
        label_2 = new QLabel(dir_dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 25, 291, 18));
        frame = new QFrame(dir_dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 500, 711, 131));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(5, 6, 191, 41));
        AnzahlsaveFile = new QLineEdit(frame);
        AnzahlsaveFile->setObjectName(QString::fromUtf8("AnzahlsaveFile"));
        AnzahlsaveFile->setGeometry(QRect(220, 20, 71, 24));
        AnzahlsaveFile->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(5, 50, 171, 41));
        AnzahlgesicherteFile = new QLineEdit(frame);
        AnzahlgesicherteFile->setObjectName(QString::fromUtf8("AnzahlgesicherteFile"));
        AnzahlgesicherteFile->setGeometry(QRect(220, 60, 71, 25));
        AnzahlgesicherteFile->setAlignment(Qt::AlignCenter);
        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 100, 671, 23));
        progressBar->setMaximum(100);
        progressBar->setValue(0);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(300, 20, 131, 18));
        MinuteElapsed = new QLineEdit(frame);
        MinuteElapsed->setObjectName(QString::fromUtf8("MinuteElapsed"));
        MinuteElapsed->setGeometry(QRect(440, 20, 41, 26));
        MinuteElapsed->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(490, 25, 71, 18));
        SekundeElapsed = new QLineEdit(frame);
        SekundeElapsed->setObjectName(QString::fromUtf8("SekundeElapsed"));
        SekundeElapsed->setGeometry(QRect(560, 20, 41, 26));
        SekundeElapsed->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(610, 25, 71, 18));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(300, 52, 141, 41));
        MinuteRemaining = new QLineEdit(frame);
        MinuteRemaining->setObjectName(QString::fromUtf8("MinuteRemaining"));
        MinuteRemaining->setGeometry(QRect(440, 60, 41, 26));
        MinuteRemaining->setAlignment(Qt::AlignCenter);
        SekundeRemaining = new QLineEdit(frame);
        SekundeRemaining->setObjectName(QString::fromUtf8("SekundeRemaining"));
        SekundeRemaining->setGeometry(QRect(560, 60, 41, 26));
        SekundeRemaining->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(490, 65, 71, 18));
        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(610, 65, 71, 18));
        cmb_kerne = new QComboBox(dir_dialog);
        cmb_kerne->setObjectName(QString::fromUtf8("cmb_kerne"));
        cmb_kerne->setGeometry(QRect(634, 355, 61, 27));
        label_12 = new QLabel(dir_dialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(370, 350, 251, 41));
        frame_2 = new QFrame(dir_dialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, 360, 331, 141));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 191, 31));
        cmb_zip = new QComboBox(frame_2);
        cmb_zip->setObjectName(QString::fromUtf8("cmb_zip"));
        cmb_zip->setGeometry(QRect(150, 0, 131, 27));
        chk_key = new QCheckBox(frame_2);
        chk_key->setObjectName(QString::fromUtf8("chk_key"));
        chk_key->setGeometry(QRect(0, 30, 200, 41));
        lineKey = new QLineEdit(frame_2);
        lineKey->setObjectName(QString::fromUtf8("lineKey"));
        lineKey->setGeometry(QRect(200, 40, 131, 26));
        chk_overwrite = new QCheckBox(frame_2);
        chk_overwrite->setObjectName(QString::fromUtf8("chk_overwrite"));
        chk_overwrite->setGeometry(QRect(0, 75, 330, 23));
        chk_path = new QCheckBox(frame_2);
        chk_path->setObjectName(QString::fromUtf8("chk_path"));
        chk_path->setGeometry(QRect(0, 105, 321, 31));
        cmb_zstd_dir = new QComboBox(frame_2);
        cmb_zstd_dir->setObjectName(QString::fromUtf8("cmb_zstd_dir"));
        cmb_zstd_dir->setGeometry(QRect(294, 0, 35, 27));
        chk_hidden = new QCheckBox(dir_dialog);
        chk_hidden->setObjectName(QString::fromUtf8("chk_hidden"));
        chk_hidden->setGeometry(QRect(370, 390, 321, 22));
        pushButton_zstd_dir = new QPushButton(dir_dialog);
        pushButton_zstd_dir->setObjectName(QString::fromUtf8("pushButton_zstd_dir"));
        pushButton_zstd_dir->setGeometry(QRect(510, 462, 21, 27));
        bt_path = new QPushButton(dir_dialog);
        bt_path->setObjectName(QString::fromUtf8("bt_path"));
        bt_path->setGeometry(QRect(480, 470, 15, 15));
        bt_dir = new QPushButton(dir_dialog);
        bt_dir->setObjectName(QString::fromUtf8("bt_dir"));
        bt_dir->setGeometry(QRect(460, 470, 15, 15));
        bt_path->raise();
        bt_dir->raise();
        pushButton_zstd_dir->raise();
        bt_end->raise();
        bt_save->raise();
        treeView_dir->raise();
        label->raise();
        treeView_path->raise();
        label_2->raise();
        frame->raise();
        cmb_kerne->raise();
        label_12->raise();
        frame_2->raise();
        chk_hidden->raise();

        retranslateUi(dir_dialog);
        QObject::connect(cmb_zip, SIGNAL(activated(QString)), pushButton_zstd_dir, SLOT(click()));
        QObject::connect(treeView_dir, SIGNAL(activated(QModelIndex)), bt_dir, SLOT(click()));
        QObject::connect(treeView_path, SIGNAL(activated(QModelIndex)), bt_path, SLOT(click()));

        QMetaObject::connectSlotsByName(dir_dialog);
    } // setupUi

    void retranslateUi(QWidget *dir_dialog)
    {
        dir_dialog->setWindowTitle(QApplication::translate("dir_dialog", "Save/restore directory", nullptr));
        bt_end->setText(QApplication::translate("dir_dialog", "Exit", nullptr));
#ifndef QT_NO_TOOLTIP
        bt_save->setToolTip(QApplication::translate("dir_dialog", "Starting a Backup or Restoring a Directory. ", nullptr));
#endif // QT_NO_TOOLTIP
        bt_save->setText(QApplication::translate("dir_dialog", "Save/restore directory", nullptr));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("dir_dialog", "Select the directory that is to be backed up or written back.", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("dir_dialog", "Saved directory", nullptr));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("dir_dialog", "Directory to which the directory backup is written or from which the recovery file is read.", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("dir_dialog", "Location (path) of backup:", nullptr));
        label_4->setText(QApplication::translate("dir_dialog", "Number of files/directories\n"
"to be backed up", nullptr));
        label_5->setText(QApplication::translate("dir_dialog", "Already backed\n"
"Files/directories:", nullptr));
        label_6->setText(QApplication::translate("dir_dialog", "elapsed time:", nullptr));
        label_7->setText(QApplication::translate("dir_dialog", "minutes", nullptr));
        label_8->setText(QApplication::translate("dir_dialog", "seconds", nullptr));
        label_9->setText(QApplication::translate("dir_dialog", "remaining  time:", nullptr));
        label_10->setText(QApplication::translate("dir_dialog", "minutes", nullptr));
        label_11->setText(QApplication::translate("dir_dialog", "seconds", nullptr));
        label_12->setText(QApplication::translate("dir_dialog", "Number of processor cores\n"
"for to be used fsarchiver:", nullptr));
        label_3->setText(QApplication::translate("dir_dialog", "Compression setting:", nullptr));
        chk_key->setText(QApplication::translate("dir_dialog", "Encrypt\n"
"backup key", nullptr));
#ifndef QT_NO_TOOLTIP
        chk_overwrite->setToolTip(QApplication::translate("dir_dialog", "Identical backup files are overwritten without prior consultation.", nullptr));
#endif // QT_NO_TOOLTIP
        chk_overwrite->setText(QApplication::translate("dir_dialog", "Overwrite existing backup", nullptr));
#ifndef QT_NO_TOOLTIP
        chk_path->setToolTip(QApplication::translate("dir_dialog", "The directory is written back to the path of origin.\n"
"", nullptr));
#endif // QT_NO_TOOLTIP
        chk_path->setText(QApplication::translate("dir_dialog", "Writing a backup back to the original path.", nullptr));
        chk_hidden->setText(QApplication::translate("dir_dialog", "show hidden directories/files", nullptr));
        pushButton_zstd_dir->setText(QApplication::translate("dir_dialog", "z", nullptr));
        bt_path->setText(QString());
        bt_dir->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dir_dialog: public Ui_dir_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIR_DIALOG_H
