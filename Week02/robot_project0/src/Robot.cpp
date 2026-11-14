#include <iostream>
#include "Robot.hpp"

Robot::Robot(const std::string name, double maxspeed)
    : name_(name), max_speed_(maxspeed), speed_(0.0)
    {
        std::cout<< name_<<" initialized.\n";
    }

bool Robot::setSpeed(double requestedSpeed)
{
    if (requestedSpeed < 0 || requestedSpeed > max_speed_)     return false;

    speed_ = requestedSpeed;
    return true;
}

void Robot::stop()
{
    speed_ = 0.0;
    std::cout<<"\n"<<name_<<" stopped.\n";
}

void Robot::report() const
{
    std::cout<<"\nRobot : "<< name_ <<".\n";
    std::cout<<"Current Speed : "<< speed_ <<"m/s. \n";
}