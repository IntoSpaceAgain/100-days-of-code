#include "raylib.h"
#include "Mover.h"

Mover::Mover() : m_xpos(GetScreenWidth() / 2), m_ypos(GetScreenHeight() / 2)
{
}

void Mover::draw()
{
    DrawCircle(m_xpos, m_ypos, 2.0f, WHITE);
}

void Mover::move()
{
    int randChoice{GetRandomValue(0, 3)};

    switch (randChoice)
    {
    case 0:
        m_xpos += 1; // move right
        break;
    case 1:
        m_xpos -= 1; // move left
        break;
    case 2:
        m_ypos += 1; // move down
        break;
    case 3:
        m_ypos -= 1; // move up
        break;
    }
}

void Mover::update()
{
    move();
    if (m_xpos > GetScreenWidth())
        m_xpos = 0;
    if (m_xpos < 0)
        m_xpos = GetScreenWidth();
    if (m_ypos > GetScreenHeight())
        m_ypos = 0;
    if (m_ypos < 0)
        m_ypos = GetScreenHeight();
}