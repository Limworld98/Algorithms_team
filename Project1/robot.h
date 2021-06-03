#pragma once
#include <iostream>
#include <string>
#include "map.h"

using namespace std;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

class robot
{
private:
    int x, y;
public:
    robot();
	void randomMove(Map map);
	void spinMove(Map map);
	void zigzagMove(Map map);
	void printMap(Map& map);
};

robot::robot() {
    x = 0; y = 0;
}

void robot::printMap(Map& map)
{
    const string a = "■";  //벽
    const string b = "□";  //청소하지 않은공간
    const string c = "◆"; //로봇청소기

    for (int i = 0; i < map.width; i++)
    {
        for (int j = 0; j < map.height; j++)
        {
            switch (map.map[i][j])
            {
            case 0:
                cout << b;
                break;
            case 1:
                cout << a;
                break;
            case 2:
                cout << c;
                break;
            }
        }
        cout << endl;
    }
}

void robot::randomMove(Map map)
{

}

void robot::spinMove(Map map)
{

}

void robot::zigzagMove(Map map)
{

}

