#include <graphics.h>
#include <stdlib.h>
#include <time.h>

/*
	开发说明：本项目是一个2048游戏，但是这个游戏的具体实现采用仿真形式设计，
	即根据具体玩法，写出对应世界观，而不是根据玩法抽象出具体的算法从而实现
	具体玩法。
	写出对于的世界观，即游戏引擎的做法，写出一个游戏世界，然后根据玩法进行具体操作。

	每一个方块在每一次对应的操作中会进行对应的移动，当碰撞到对应的方块会进行对应的判断
	是否能够进行对应的相加。
	这其中就要用到
*/

typedef struct Posistions
{
	int x;
	int y;
}Posistion;



typedef struct Boxs {
	Posistions pos;
	int size;
	color_t color;
	int nun;
}Box[16];

void Move() {

}

void creatGraphy(int num,int x, int y,int size, color_t color)
{
	cleardevice();
	setcolor(color);
	setfillcolor(color);
	bar(x-size/2, y-size/2, x + size/2, y + size/2);
}



int main()
{
}