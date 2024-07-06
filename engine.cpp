#include "engine.h"

Engine::Engine() : power(0) {}

Engine::Engine(int p) : power(p) {}

int Engine::getPower()
{
    return power;
}
