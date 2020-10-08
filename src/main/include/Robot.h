#pragma once
#include <frc/TimedRobot.h>
#include <team195/CKSimMotor.h>

class Robot : public frc::TimedRobot
{
public:
  //Robot();

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
  // team195::CKSimMotor motor0;
  team195::CKSimMotor *motor0;
};
