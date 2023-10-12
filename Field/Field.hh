#ifndef FIELD_HH
#define FIELD_HH

#include "../Controller/Coordinates.hh"
#include "Cell.hh"
#include <iostream>

#define MAX_SIZE 20
#define MIN_SIZE 2
#define DEF_SIZE 10
#define DEF_ENTRY 0

class Field
{
    int width;
    int height;
    Coordinates entry;
    Coordinates exit;
    Cell **cells;

    bool checkFieldSize(int width, int height);

public:
    Field(int width = DEF_SIZE, int height = DEF_SIZE);

    ~Field();

    const Cell& getCell(Coordinates coord) const;

    void setEntry(Coordinates entry);

    void setExit(Coordinates exit);

    void setPassable(Coordinates coordinates, bool passable = true);

    Coordinates getEntry();

    Coordinates getExit();

    int getWidth();

    int getHeight();

    bool checkCoordinates(Coordinates coord) const;
};

#endif