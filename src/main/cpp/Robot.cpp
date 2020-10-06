/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018-2020 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"

#include <team195/CKSim.h>
#include <team195/CKSimMotor.h>
#include <iostream>
static team195::CKSimMotor motor0(0);
void Robot::RobotInit()
{
    team195::CKSim::GetInstance().SetIP("10.0.3.133");
}
void Robot::RobotPeriodic()
{
    std::cout << "Running prog" << std::endl;
    motor0.SetMotorValue(1.0f);
}

void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {}

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
