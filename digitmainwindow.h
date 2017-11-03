/**
 * @brief
 *  �����Բʵ������ڣ���Ҫ���������ͻ��Ľ���
 *  ���а���������ʾ�����Բʵ��Ӵ���widget��
 *  ͨ������widget����ز���������ʾ�����Բ�
 * @author GaoYifan
 */
#ifndef DIGITMAINWINDOW_H
#define DIGITMAINWINDOW_H

#include <QMainWindow>
#include<QFileDialog>
#include "widget.h"
#include "setsizedialog.h"
#include "colorDialog/dialog.h"
#include "fileHandle/filehandle.h"
#include <string>

namespace Ui {
class DigitMainWindow;
}

class DigitMainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit DigitMainWindow(QWidget *parent = 0);
    ~DigitMainWindow();
    //�Ӵ��ڣ��ô���Ϊ�Բ���ʾ����
    Widget *childWidget;
    //�½��Բ�ʱ�����Բʳߴ�Ի���
    setSizeDialog *sizedg;
    //�����Բ���ɫ�Ի���
    Dialog *colordg;
    //���óߴ�
    void updateSizeShow();

public slots:
    //���ڽ��մ�setSizeDialog���ͻ������Բʳߴ�����
    void setSize(int l,int w,int h);
    //���ڽ��մ�colordg���ͻ������Բ���ɫ����
    void setColors(vector<QColor>cls,vector<int>rls);
protected:
    //�����ͼ�¼�
    void paintEvent(QPaintEvent *event);
private slots:
    //�½��ļ�
    void on_actionNew_triggered();
    //�༭�Բ�С��
    void on_radioButton_released();
    //�ƶ������Բ�С��
    void on_radioButton_2_released();
    //���������Բ�
    void on_actionSave_triggered();
    //�������Բ�
    void on_actionOpen_triggered();


private:
    Ui::DigitMainWindow *ui;
    int h,l,w;
    //�û������ļ��Ĵ򿪣�����ȹ���
    FileHandle *fileHandle;
    //��ɫ������
    vector<QColor> cls;
    vector<int> rls;
};

#endif // DIGITMAINWINDOW_H
