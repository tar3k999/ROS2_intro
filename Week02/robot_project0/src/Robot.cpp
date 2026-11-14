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

void Robot::setWheelSpeeds(double rwspd, double lwspd) 
{
    if  (rwspd >= 0 && rwspd <= max_speed_)     rwspd_ = rwspd;
    if  (lwspd >= 0 && lwspd <= max_speed_)     lwspd_ = lwspd;
}

void Robot::getLeftWheelSpeed() const
{
    std::cout<<"\nRobot : "<<name_<<"\n";
    std::cout<<"Left Wheel Speed : "<<lwspd_;
}
void Robot::getRightWheelSpeed() const
{
    std::cout<<"\nRobot : "<<name_<<"\n";
    std::cout<<"Right Wheel Speed : "<<rwspd_;
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