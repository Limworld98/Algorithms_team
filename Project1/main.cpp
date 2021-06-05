#include "robot.h"
#include "blueprint.h"
#include <vector>
using namespace std;

int main()
{
	Map m(blueprints[11]);
	robot a;
	a.randomMove(m, 1);
}
