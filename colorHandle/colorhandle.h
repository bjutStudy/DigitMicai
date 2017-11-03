/**
 * @brief
 *  �������Ҫ���ô�ͼƬ����ȡ����ɫ
 *  ���˼·Ϊ��
 *  ��ͼƬ��������ɫ����ɫ������ɫ�Ƚϣ�
 *  ��ȡ��ɫ���г��ִ�������������ɫ
 * @author GaoYifan
 */

#ifndef COLORHANDLE_H
#define COLORHANDLE_H
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<QColor>
#include<map>
#include<queue>
#include<opencv2/core/core.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;
class ColorHandle
{
private:
    //��С�ɽ��ܾ���
    int minDist;
    //��ɫ�������б�
    std::vector<int>rls;
    std::vector<cv::Vec3b>cls;
    std::vector<QColor> qcls;
    //��ɫ���е���ɫ
    std::vector<cv::Vec3b>clcm;
    //��ɫ������ɫ��ͼ�е����ص����
    std::vector<long long>areas;

    //Ŀ��ɫ
    cv::Vec3b target;
    //���ͼ��
    cv::Mat result;

    //������Ŀ����ɫ�ľ���
    int getDistance(cv::Vec3b color)
    {
        return abs(color[0] - target[0])*abs(color[0] - target[0])
                + abs(color[1] - target[1])*abs(color[1] - target[1])
                + abs(color[2] - target[2])*abs(color[2] - target[2]);
    }
    int getDistance(Vec3b color1,Vec3b color2);
public:
    long long i;
    void readVolorLib();
    //�չ��캯��
    ColorHandle():minDist(2500)
    {
        //��ʼ��Ĭ�ϲ���
        target[0] = target[1] = target[2] = 0;
        readVolorLib();
    }
    //��ɫ�б�����
    vector<QColor> getCls();
    vector<int> getRls();
    //������С����
    void setColorDistanceThreshold(int distance);
    int getColorDistanceThreshold() const;
    //����Ŀ����ɫ
    void setTargetColor(unsigned char red, unsigned char green, unsigned char blue);
    void setTargetColor(cv::Vec3b color);
    //��ȡĿ����ɫ
    cv::Vec3b getTargetColor() const;
    //���㲢��������ɫ������
    void calculate(const cv::Mat &image);
    cv::Mat process(const cv::Mat &image);
    void setColor(Vec3b &tc, int r, int g, int b);
};

#endif // COLORHANDLE_H
