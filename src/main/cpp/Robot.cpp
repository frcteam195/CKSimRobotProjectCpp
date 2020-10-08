/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018-2020 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"

#include <iostream>

//Cannot use a static variable here. Must be class instance var to avoid issue with sequence of lib static initialization.
//Otherwise a nullptr err will occur on the mutexes inside CKSimLib
//The motor that is initialized with the setIPandReturnMotorId method must be declared first in the header file
Robot::Robot() : frontBackMotor(setIPandReturnMotorId("10.0.3.133", 0)),
                 leftRightMotor(1) {}

void Robot::RobotInit()
{
}
void Robot::RobotPeriodic()
{
    frontBackMotor.SetMotorValue(1.0f);
}

void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic()
{
    std::cout << "Running auto prog" << std::endl;
}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic()
{
    std::cout << "Running teleop prog" << std::endl;
}

void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}
void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main()
{
    return frc::StartRobot<Robot>();
}
#endif
