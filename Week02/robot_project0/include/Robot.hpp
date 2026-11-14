#pragma once

#include <string>

class Robot
{
public:
    Robot(std::string name, double max_speed);
    bool setSpeed(double requestedSpeed);

    void setWheelSpeeds(double rwspd, double lwspd);
    void getLeftWheelSpeed() const;
    void getRightWheelSpeed() const;

    void stop();
    void report() const;

private:
    std::string name_;
    double max_speed_;
    double speed_;
    double rwspd_;
    double lwspd_;
};