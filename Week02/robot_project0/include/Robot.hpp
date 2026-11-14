#pragma once

#include <string>

class Robot
{
public:
    Robot(std::string name, double max_speed);
    bool setSpeed(double requestedSpeed);
    void stop();
    void report() const;

private:
    std::string name_;
    double max_speed_;
    double speed_;
};