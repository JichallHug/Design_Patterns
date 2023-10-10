/**
 * @file car_builder.cpp
 * @brief This is a brief description of the file.
 *
 * More detailed description of the file.
 *
 * @date 2023/10/10
 * @authoer Jichall Huang
 */

#include "car_builder.h"
#include <iostream>

namespace DesignPatterns{
void BuildYellowCar::BuildColor()
{
    std::cout << "Yellow ";
}

void BuildYellowCar::BuildWheel()
{
    std::cout << "Four Wheels ";
}

void BuildRedBike::BuildColor()
{
    std::cout << "Red ";
}

void BuildRedBike::BuildWheel()
{
    std::cout << "Two Wheels ";
}

BuildCar::BuildCar(Car &car)
{
    car_ = &car;
}

void BuildCar::GetCarInfo()
{
    std::cout << "I'm a ";
    car_->BuildColor();
    car_->BuildWheel();
    std::cout << "Car" << std::endl;
}

}
