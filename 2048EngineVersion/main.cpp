#include <graphics.h>
#include <stdlib.h>
#include <time.h>

/*
	����˵��������Ŀ��һ��2048��Ϸ�����������Ϸ�ľ���ʵ�ֲ��÷�����ʽ��ƣ�
	�����ݾ����淨��д����Ӧ����ۣ������Ǹ����淨�����������㷨�Ӷ�ʵ��
	�����淨��
	д�����ڵ�����ۣ�����Ϸ�����������д��һ����Ϸ���磬Ȼ������淨���о��������

	ÿһ��������ÿһ�ζ�Ӧ�Ĳ����л���ж�Ӧ���ƶ�������ײ����Ӧ�ķ������ж�Ӧ���ж�
	�Ƿ��ܹ����ж�Ӧ����ӡ�
	�����о�Ҫ�õ�
*/

struct Graphy
{
	
};



void creatGraphy(int num,int x, int y,int size, color_t color)
{
	setcolor(color);
	setfillcolor(color);
	bar(x-size/2, y-size/2, x + size/2, y + size/2);
}



int main()
{
}