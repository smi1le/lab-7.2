#pragma once
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

const Vector2f STANDARD_SIZE_PIECES = {60, 30};
const Vector2f RESIZING_PIECES = { 30, 15 };
const unsigned int NUMBER_PIECES = 5;
const Vector2f SIZE_WINDOW = { 800, 650 };
const Vector2f INITIAL_COORD_FIRTS_PIECES = { -100, 25 };
const Vector2f INITIAL_COORD_SECOND_PIECES = { -100, 85 };
const Vector2f INITIAL_COORD_THIRD_PIECES = { -100, 145 };
const Vector2f INITIAL_COORD_FOURTH_PIECES = { -100, 205 };
const Vector2f INITIAL_COORD_FIFTH_PIECES = { -100, 265 };
const Color COLOR_PIECES = Color::Color(21, 21, 247);
const float RIGHT_BOUNDARY = SIZE_WINDOW.x - 100.0f;
const float LEFT_BOUNDARY = 25.0f;
const float UP_BOUNDARY = 25.0f;
const float DOWN_BOUNDARY = SIZE_WINDOW.y - 25.0f;
const Vector2f HORIZONTAL_SPEED = { 0.1f, 0.0f };
const Vector2f VERTICAL_SPEED = { 0.0f, 0.03f };
const float DECELERATION = 0.002f;
const float DELAY_IN_HORIZONTAL_ACCELERATION = 0.05f;
const float RATE_DISPLACEMENT = 0.018f;
