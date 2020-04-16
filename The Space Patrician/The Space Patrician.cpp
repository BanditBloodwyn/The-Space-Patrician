#include "Engine/TSP/TSPEngine.h"


int main()
{
    TSPEngine Game;

    if (Game.Construct(320, 144, 5, 5))
        Game.Start();

    return 0;
}