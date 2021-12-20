#include<windows.h>
#include<conio.h>
#include<time.h>
using namespace std;
void gotoxy(int x, int y)
{
COORD ;
c.X=x;
c.Y=y;
SetConsoleCursorPosition(GetstdHandle(STD_OUTPUT_HANDLE),C);
}

void hidecurson()
{
    CONSOLE_CURSOR_INFO CURSOR;
    cursor.dwsize=100;
    cursor.bVisible=false;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor);
}

bool gameOver;
int const screenheight=20;
int const screenWidth=30;
int map[screenHeight][screenHeight];
int scoreP1;
int scorep2;

class paddle{
pubic;
    int x;
    int y;
    int speed;
    char dir;
    int delay;
    int count_delay;


void draw(){

    for(int i=0;i<6;i++)
    map[y][x+i]=1;

}
void move()
{
    if(count_delay == deay && dir != 'S')
    {
        if( dir == "L" && x+speed > 0)
    x-= speed;
    }
    else if (dir == 'R' && x+speed < screenWidth-6)
    {
        x+=speed;
    }
    count_delay=0;
}
};

