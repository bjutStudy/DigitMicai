/**
 * @brief
 *  ���ڱ༭�����Բ�
 *  �������Բʻ�������ͨ����������༭�����Բ�
 * @author GaoYifan
 */
#ifndef EDITDIGITDIALOG_H
#define EDITDIGITDIALOG_H

#include <QDialog>
#include"digit.h"
#include<QPainter>
#include<QMouseEvent>
#include<iostream>
using namespace std;

namespace Ui {
class EditDigitDialog;
}

class EditDigitDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit EditDigitDialog(QWidget *parent = 0);
    //����Ҫ�༭�������Բ�
    void setDigit(Digit d,int n);
    //��������ߴ�
    void initGridSize(int l,int w);
    //��һ��С����Ϳɫ
    void drawOneGrid(int,int,QColor );
    ~EditDigitDialog();
signals:
    //���Ѿ��༭�õ������Բʷ��ͻظ�����
    void sendDigit(Digit,int);
protected:
    //����ͼ�¼�
    void paintEvent(QPaintEvent *event);
    //���������
    void mousePressEvent(QMouseEvent *event);
private slots:
    //ȷ�ϰ�ť����¼�
    void on_buttonBox_accepted();

private:
    //Ҫ�༭�������Բ�
    Digit d;
    //�����Բ������������Բ��б���digitManager���е�λ��
    int n;
    //ת��Ϊ��������
    int toRX(int x);
    int toRY(int y);
    //����ߴ�
    int gridsize;
    Ui::EditDigitDialog *ui;
};

#endif // EDITDIGITDIALOG_H
