#include<iostream>
#include "Robot.hpp"

int main()
{
    Robot robot0("LFR-01", 7);

    if (robot0.setSpeed(3.6))       std::cout<<"Speed Accepted.\n";

    robot0.report();
    robot0.stop();
    robot0.report();

    if (!robot0.setSpeed(10))       std::cout<<"Speed Rejected. \n";
    robot0.report();

    robot0.setWheelSpeeds(3.5,6);
    robot0.getLeftWheelSpeed();
    robot0.getRightWheelSpeed();

    return 0;
}