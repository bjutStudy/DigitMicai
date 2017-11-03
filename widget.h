/**
 * @brief
 *  ������Ҫ���ڽ�����digitManger���������Բʣ�Ȼ�������Բ���ʾ����
 * @author GaoYifan
 */
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPainter>
#include<QPoint>
#include<cstdio>
#include"editdigitdialog.h"
#include<QMouseEvent>
#include"digitmananger.h"
#include<QMessageBox>



namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    //���嵱ǰ����
    const static int NORMAL = 0;
    const static int EDITDIGIT   = 1;
    const static int  MOVEDIGIT = 2;
    int handleState;


    explicit Widget(QWidget *parent = 0);
    ~Widget();
    EditDigitDialog *edg;
    bool f;
    //���������
    void drawGrid();
    //��ʼ������񳤶�
    void initGridSize();
    //��һ������Ϊx,y�ķ���
    void drawOneGrid(int x,int y,QColor color);
    //��һ�����������ϻ���ͼ����ɫ
    void drawAllGrid(int xs, int ys,int xe,int ye, QColor color);
    //������һ���������������С��
    void drawDigitRect();
    //����С�������
    DigitMananger dm;
    //�������������Բʵĳ����
    void setSize(int l,int w,int h);
    //������ɫ���������
    void setColors(vector<QColor>cls,vector<int>rs);
    //���ô���Ҫ���еĲ���
    void setHandleState(int handleState);
    //�����Ѿ����õ��������������Բ�
    void createDigitMap();
public slots:
    void getDigit(Digit,int);
protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void wheelEvent(QWheelEvent *event);


private:
    Ui::Widget *ui;
    //��ɫ����
    vector<QColor>cls;
    //��ɫ��������
    vector<int>rls;
    //�ɾ����������������
    int toRX(int x);
    int toRY(int y);

    int dx;
    int dy;

    int gridsize;
    //ͼ�εĳ����
    int h;
    int l;
    int w;

    //�ƶ����������ڲ�����С����
    int moveNum;
};

#endif // WIDGET_H
