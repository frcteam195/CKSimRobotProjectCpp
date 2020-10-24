#pragma once
#include <frc/TimedRobot.h>
#include <team195/CKSimAccelerometer.h>
#include <team195/CKSimMotor.h>
#include <team195/CKSim.h>
#include <frc/Joystick.h>

class Robot : public frc::TimedRobot
{
public:
    Robot();

    void RobotInit() override;
    void RobotPeriodic() override;

    void AutonomousInit() override;
    void AutonomousPeriodic() override;

    void TeleopInit() override;
    void TeleopPeriodic() override;

    void DisabledInit() override;
    void DisabledPeriodic() override;

    void TestInit() override;
    void TestPeriodic() override;

private:
    team195::CKSimMotor frontBackMotor;
    team195::CKSimMotor leftRightMotor;
    frc::Joystick mJoystick1;
    team195::CKSimAccelerometer accel1;
    static int
    setIPandReturnMotorId(const char *ip, int motorId)
    {
        team195::CKSim::SetIP(ip);
        return motorId;
    }
};
