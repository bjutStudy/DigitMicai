/**
 * @brief
 *  ������Ҫ�������������Բʵĳߴ�
 *  ��Ҫ����Ϊ���������Բʵĳߴ磬Ȼ�������Բʵĳߴ����źŵ���ʽ���͸�������(DigitMainWindow)
 * @author GaoYifan
 */
#ifndef SETSIZEDIALOG_H
#define SETSIZEDIALOG_H

#include <QDialog>

namespace Ui {
class setSizeDialog;
}

class setSizeDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit setSizeDialog(QWidget *parent = 0);
    ~setSizeDialog();
    
private slots:
    //ȡ����ť����¼�
    void on_pushButton_2_clicked();
    //ȷ�ϰ�ť����¼�
    void on_pushButton_clicked();
signals:
    //���ڷ��͸������ڵ��źţ����ߴ紫�ݸ�������
    void sendSize(int,int,int);
private:
    Ui::setSizeDialog *ui;
};

#endif // SETSIZEDIALOG_H
