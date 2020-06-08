#include "Engine/TSP/TSPEngine.h"


int main()
{
    TSPEngine Game;

    if (Game.Construct(640, 360, 2, 2))
        Game.Start();

    return 0;
}