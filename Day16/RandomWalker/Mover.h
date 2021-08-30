#ifndef MOVER_H
#define MOVER_H

class Mover
{
private:
    int m_xpos{};
    int m_ypos{};
    void move();

public:
    Mover();
    void draw();
    void update();
};

#endif // MOVER_H