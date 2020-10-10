/********************************************************************************
** Form generated from reading UI file 'filedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEDIALOG_H
#define UI_FILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_FileDialog
{
public:
    QPushButton *cmd_cancel;
    QLabel *label;
    QPushButton *cmd_save;
    QTextEdit *textEdit;

    void setupUi(QDialog *FileDialog)
    {
        if (FileDialog->objectName().isEmpty())
            FileDialog->setObjectName(QString::fromUtf8("FileDialog"));
        FileDialog->resize(557, 441);
        cmd_cancel = new QPushButton(FileDialog);
        cmd_cancel->setObjectName(QString::fromUtf8("cmd_cancel"));
        cmd_cancel->setGeometry(QRect(50, 390, 191, 27));
        label = new QLabel(FileDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 251, 18));
        cmd_save = new QPushButton(FileDialog);
        cmd_save->setObjectName(QString::fromUtf8("cmd_save"));
        cmd_save->setGeometry(QRect(300, 390, 231, 28));
        textEdit = new QTextEdit(FileDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 40, 511, 321));
        textEdit->setLineWidth(1);
        textEdit->setAutoFormatting(QTextEdit::AutoNone);
        textEdit->setTabChangesFocus(true);
        textEdit->setLineWrapMode(QTextEdit::WidgetWidth);
        textEdit->setLineWrapColumnOrWidth(0);

        retranslateUi(FileDialog);

        QMetaObject::connectSlotsByName(FileDialog);
    } // setupUi

    void retranslateUi(QDialog *FileDialog)
    {
        FileDialog->setWindowTitle(QApplication::translate("FileDialog", "Description of the backup", nullptr));
        cmd_cancel->setText(QApplication::translate("FileDialog", "Cancel", nullptr));
        label->setText(QApplication::translate("FileDialog", "Description of the backup:", nullptr));
        cmd_save->setText(QApplication::translate("FileDialog", "Save partition", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileDialog: public Ui_FileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEDIALOG_H
