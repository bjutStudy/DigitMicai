/**
 * @brief
 * ����ʵ�������Բʵ������㷨����װ��������ɫ�������Բʵ���������
 *���������Բʣ�������ͨ�������Բ�С����λ�ò�ѯ�����ɵ������Բʡ�
 * @author GaoYifan
 */

#ifndef DIGITMANANGER_H
#define DIGITMANANGER_H
#include<vector>
#include"digit.h"
#include<fstream>
#include<sstream>
#include<cstdlib>
#include<ctime>
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
class DigitMananger
{
private:
    //mould ��������������ļ��ж�����digit
    vector<Digit>mould;

    //��Ҫͼ����ɫ
    vector<QColor>colorList;
    //����ɫ��ռ�ı���
    vector<int> ratio;
    //�м��������¼��ǰÿ����ɫ�����
    vector<int> areas;

    //��mould�л�ȡһ�������digit
    Digit getRandomDigit();
    //��digitList�е�Ԫ�ؽ����������
    void randomSort();
    //�ھ�������ж�digitList��������
    void adjustDigit(Digit &d,int xs,int ys,int xe,int ye);

    //�þ���������¼ͼ��ÿ�����ӦС������λ�ã��жϾ������ɵ�С������Ƿ�����غϣ��þ���ʹ����Ļ֧�ֵ����ֱ���Ϊ600*600
    //���ɴ��ڵ��е�(0,0)���������е�(300,300)����
    int check[610][610];
    //����ͼ�����
    int allArea;
    //������ȱ�ٵ���ɫ
    int getNeedColor();
    //�Ե�ǰ��Ϳɫ
    void drawOneDigltColor(int i);
    //��ȡ��check����������
    int getMatX(int x);
    int getMatY(int y);


public:
    //������������ȡһ���������digitList�е�λ��
    int getDigitLocal(int x,int y);
    //digitList�����������ѡ���digit�б�,��Ҫ������Ļ��ȥ��digit
    vector<Digit>digitList;
    vector<Digit> getDigitList();
    //����digitList������Ԫ��
    void swapDigit(int i1,int i2);
    //���ݵ�n��С���������������
    void rebuildDigit(Digit d,int n);
    DigitMananger();
    //��ʼ��ȫ��
    void initAll();
    //��(xs-xe)(ys-ye)�ľ������Զ����digit
    void addDigitToRect(int xs,int ys,int xe,int ye);

    //��������check
    void rebulidCheck();

    //������ɫͼ����ɫ
    void setColorList(vector<QColor> cL);
    //����ÿ����ɫ��Ӧ�ı���
    void setColorRatio(vector<int> r);
    //�����е�����Ϳɫ
    void drawAllDigltColor();
    //������,���check����
    void printCheck(int xs,int ys,int xe,int ye);


};

#endif // DIGITMANANGER_H
