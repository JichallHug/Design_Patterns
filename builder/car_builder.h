/**
 * @file car_builder.h
 * @brief This is a brief description of the file.
 *
 * More detailed description of the file.
 *
 * @date 2023/10/10
 * @authoer Jichall Huang
 */

#ifndef DESIGN_PATTERNS_CAR_BUILDER_H
#define DESIGN_PATTERNS_CAR_BUILDER_H

namespace DesignPatterns {

class Car {
public:
    virtual void BuildWheel() {};
    virtual void BuildColor() {};
};

class BuildYellowCar : public Car {
public:
    void BuildWheel() override;
    void BuildColor() override;
};

class BuildRedBike : public Car {
public:
    void BuildWheel() override;
    void BuildColor() override;
};

class BuildCar {
public:
    void BuildCarRegister(Car &car);
    void GetCarInfo();
    void Init();

private:
    Car *car_ = nullptr;
};

}

#endif /* DESIGN_PATTERNS_CAR_BUILDER_H */
