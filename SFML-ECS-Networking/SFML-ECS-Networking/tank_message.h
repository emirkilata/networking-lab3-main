#pragma once
#include <string>

// A simple tank update message
struct TankMessage {
    float x, y;
    float rotation;
    std::string colour;
};