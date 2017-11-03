/**
 * @brief
 *  ������ɫ�ĶԻ��������Բ�ʱ���û������Բʵ���ɫ������
 *  ��ͨ����������ѡ����ɫ��Ҳ��ͨ��ͼ��ʶ�������ɫ
 * @author GaoYifan
 */
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "coloritem.h"
#include<iostream>
#include <QFileDialog>
#include"colorHandle/colorhandle.h"
using namespace std;


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    //���һ����ɫ
    void addItem(int r,QColor color);
    void deleteItem(int i);
    ~Dialog();
signals:
    //����ɫ�б��ͻظ�����
    void sendColor(vector<QColor>,vector<int>);
private slots:
    //�����ɫ��ť����¼�
    void on_pushButton_clicked();
    //ȷ�ϰ�ť����¼�
    void on_pushButton_3_clicked();
    //�رհ�ť����¼�
    void on_pushButton_2_clicked();

    //--------------�������ⱻѡ���¼�------------
    void on_radioButton_2_released();

    void on_radioButton_3_released();


    void on_radioButton_released();

    void on_radioButton_4_released();

    void on_radioButton_5_released();
    //--------------------------------------

    //��ͼƬ���������Բʰ�ť���
    void on_pushButton_4_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
