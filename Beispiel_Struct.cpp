//JUST FOR TEST

#include <iostream>

struct feld
{
    int x {};
    int y {};
};

enum class himmelsrichtung {nord, ost, sued, west};


feld move (feld aktuellePosition, himmelsrichtung aktuell, bool wall) {
    feld movement;
    movement.x = aktuellePosition.x;
    movement.y = aktuellePosition.y;
    return movement;
}



int main()
{
feld XY = move ({1, 2}, himmelsrichtung::nord, true);
    std::cout << XY.x << '\n';
    std::cout << XY.y << '\n';

    return 0
}
