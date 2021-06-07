#include "robot.h"
#include "blueprint.h"
#include <vector>
using namespace std;

int main()
{
	// map , type , time
	Map m(blueprints[0]);
	robot a;
	a.zigzagMove(m, 1, 50);	
}