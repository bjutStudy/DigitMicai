/**
 * @brief
 *  �����࣬��¼Ҫ���ڻ����ϵ�С�����������
 *  ������digitmanager�б�����
 * @author GaoYifan
 */
#ifndef DIGIT_H
#define DIGIT_H
#include<QColor>
#include<iostream>

class Digit
{
private:
    int l;//����С�����ĳ�
    int w;//����С�����Ŀ�
    int xp;//���Ͻǵ�һ��Ԫ�ص�x����
    int yp;//���Ͻǵ�һ��Ԫ�ص�y����
    QColor color;//С�����ɫ



public:
    bool mat[15][15];//����С�����
    int num;//С���з���Ԫ�صĸ���
    int getLength();
    int getWidth();
    int getNum();
    //��������С�����Ͻǵĵ������
    void setLocation(int x,int y);
    //��ȡ����
    int getLocationX();
    int getLocationY();
    //�������ȡ��ɫ
    QColor getColor();
    void setColor(QColor color);
    void print();
    //��ȡ����
//    void getMat(bool**mat);
    Digit(int l,int w,bool mat1[10][10],int num);

    Digit();
};

#endif // DIGIT_H
