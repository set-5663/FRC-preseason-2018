#include "WPILib.h"
#include "MyHeader.h"

using namespace frc;

// From MyHeader.h
int add(int a, int b) {
    return a + b;
}

class Robot: public IterativeRobot {
public:
  Talon *left_motor;
  Talon *right_motor;
  RobotDrive *my_robot;
  Joystick *my_joy;
    Robot() { }

    void RobotInit() {
      left_motor = new Talon(left_motor_port);
      right_motor = new Talon(right_motor_port);
      my_robot = new RobotDrive(left_motor, right_motor);
      my_joy = new Joystick(0)
    }

    void DisabledInit() { }
    void AutonomousInit() { }
    void TeleopInit() { }
    void TestInit() { }

    void DisabledPeriodic() { }
    void AutonomousPeriodic() { }
    void TeleopPeriodic() { }
    void TestPeriodic() {
      my_robot->TankDrive(0.5,0.5);
     }
};

START_ROBOT_CLASS(Robot)
