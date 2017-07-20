#ifndef PROPERTIESDIALOG_H
#define PROPERTIESDIALOG_H

#include "ui_propertiesdialog.h"

class Node;
class NewNode;

/*******************************************************************
 * Class name: PropertiesDialog
 * Base class: QDialog, Ui::PropertiesDialog
 * Description: This is the declaration of class PropertiesDialog.
 *       PropertiesDialog is the dialog opened after double click on
 *       widgets. (Double Clicking is currently disabled)
 ******************************************************************/
class PropertiesDialog : public QDialog, private Ui::PropertiesDialog
{
    Q_OBJECT

public:
    PropertiesDialog(Node *node, QWidget *parent = 0);
    PropertiesDialog(NewNode *newnode, QWidget *parent = 0);

private slots:
    void on_buttonBox_accepted();
    void on_textColorButton_clicked();
    void on_outlineColorButton_clicked();
    void on_backgroundColorButton_clicked();

private:
    void updateColorLabel(QLabel *label, const QColor &color);
    void chooseColor(QLabel *label, QColor *color);

    Node *node;
    NewNode *newnode;
    QColor textColor;
    QColor outlineColor;
    QColor backgroundColor;
};

#endif
