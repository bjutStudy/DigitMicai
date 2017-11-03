/**
 * @brief
 *  �������ڱ���Ͷ�ȡ�����Բ�
 * @author GaoYifan
 */
#ifndef FILEHANDLE_H
#define FILEHANDLE_H
#include <fstream>
#include <sstream>
#include <string>
#include <digit.h>
#include <vector>
#include <digitmananger.h>
using namespace std;
class FileHandle
{
public:
    //���캯��
    FileHandle();
    FileHandle(string filename);
    //�������ȡdigitmanager
    DigitMananger getDigitManager();
    void setDigitManager(DigitMananger dm);
    //�������ȡ�����
    void getSize(int&l,int&w,int&h);
    void setSize(int l,int w,int h);
    //�������ȡ��ɫ�б�����
    void setColorList(vector<QColor>,vector<int>);
    void getColorList(vector<QColor>&,vector<int>&);
    //�����ļ����ȡ�ļ�
    void save();
    void read();
private:
    //�ļ���
    string filename;
    DigitMananger dm;
    int h,l,w;
    vector<QColor> cls;
    vector<int> rls;
    //���ļ���д�ļ�
    ofstream fout;
    ifstream fin;
    //��ȡ�����
    void saveSize();
    void readSize();
    //��ȡ��ɫ�б�
    void saveColorList();
    void readColorList();
    //��ȡС�߿����
    void saveDigitList();
    void readDigitList();
    //��ȡһ��С�߿�
    void saveOneDigit(Digit d);
    Digit readOneDigit();

};

#endif // FILEHANDLE_H
