#ifndef WELCOMEDIALOG_H
#define WELCOMEDIALOG_H

#include <QDialog>

namespace Ui {

class WelcomeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomeDialog(QWidget *parent = 0);
    ~WelcomeDialog();

private slots:
    void on_themeComboBox_currentIndexChanged(int index);
    void onLanguageComboBox_currentIndexChanged(int index);
    void on_checkUpdateButton_clicked();
    void on_continueButton_clicked();

private:
    Ui::WelcomeDialog *ui;
};

#endif // WELCOMEDIALOG_H
