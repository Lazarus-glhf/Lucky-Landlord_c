#include <graphics.h>
#include <conio.h>

int main()
{
    initgraph(640, 480); // ��ʼ��ͼ�δ��ڣ����ÿ�Ⱥ͸߶�

    // ����һ����ɫ�ľ���
    setfillcolor(RED); // ���������ɫΪ��ɫ
    fillrectangle(100, 100, 200, 200); // ���ƾ��Σ����Ͻ�����Ϊ(100, 100)�����½�����Ϊ(200, 200)

    // ����һ����ɫ��Բ��
    setfillcolor(BLUE); // ���������ɫΪ��ɫ
    fillellipse(320, 240, 50, 50); // ����Բ�Σ�Բ������Ϊ(320, 240)���뾶Ϊ50

    _getch(); // �ȴ��û��������������

    closegraph(); // �ر�ͼ�δ���

    return 0;
}