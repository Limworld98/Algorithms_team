#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include "map.h"

using namespace std;

// 아래, 위, 오른쪽, 왼쪽
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

class robot
{
private:
    int x, y;
public:
    robot();

    // type 1 : 시간 제한을 두고 알고리즘 수행
    // type 2 : 시간제한을 두지않고 coverage 100%를 달성할 때까지 수행
	void randomMove(Map map, int type);
	void spinMove(Map map, int type);
	void zigzagMove(Map map, int type);
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
    const string d = "▦"; // 청소 완료

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
            case 3:
                cout << d;
                break;
            }
        }
        cout << endl;
    }
}

void robot::randomMove(Map map, int type)
{
    for (int i = 0; i < map.width; i++) {
        for (int j = 0; j < map.height; j++) {
            if (map.map[i][j] == 2) {
                this->x = i;
                this->y = j;
            }
        }
    }
    srand((unsigned)time(NULL));

    int calc_cost = 0; // 연산 횟수
    int time_cost = 0; // 소요 시간
    int time_limit = 100; // 시간 제한
    int coverage = 0; // 청소 면적

    int map_size = map.width * map.height;

    while (true) {
        int dir = rand() % 4;
        int distance = (rand() % max(map.height, map.width)) + 1;
        calc_cost += 2;

        while ((distance > 0) && (map.map[this->x + dx[dir]][this->y + dy[dir]] != 1)) {
            distance--;
            map.map[x][y] = 3; // 청소 완료 표시

            this->x += dx[dir];
            this->y += dy[dir];
            map.map[x][y] = 2;

            calc_cost += 3;
            time_cost++;
            if (time_limit <= time_cost) {
                break;
            }

            // 청소 과정 출력 (데모 동영상 용)
            system("cls");
            this->printMap(map);
            Sleep(10);
        }

        coverage = 0;
        for (int i = 0; i < map.width; i++)
            for (int j = 0; j < map.height; j++)
                if (map.map[i][j] != 0)
                    coverage++;

        // 1번 : 시간제한을 두고 알고리즘을 수행
        if (type == 1) {
            if (time_limit <= time_cost) {
                break;
            }
        }

        // 2번 : 시간제한을 두지않고 coverage 100%를 달성할 때까지 수행
        if (type == 2) {
            if (coverage == map_size) {
                break;
            }
        }
    }

    cout << "맵크기 커버리지 연산횟수 소요시간" << endl;

    // 맵 크기 출력
    cout << map_size << " ";

    // 청소 면적 출력
    float coverage_rate = ((float)coverage / (map.width * map.height)) * 100;
    cout << coverage << " ";

    // 연산 횟수 출력
    cout << calc_cost << " ";

    // 소요 시간 출력
    cout << time_cost << " ";
}

void robot::spinMove(Map map, int type)
{

}

void robot::zigzagMove(Map map, int type)
{

}

