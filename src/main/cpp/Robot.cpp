#include "Robot.h"

void Robot::RobotInit() {
	mFLTurn.SetNeutralMode(ctre::phoenix::motorcontrol::NeutralMode::Coast);
	mFRTurn.SetNeutralMode(ctre::phoenix::motorcontrol::NeutralMode::Coast);
	mBRTurn.SetNeutralMode(ctre::phoenix::motorcontrol::NeutralMode::Coast);
	mBLTurn.SetNeutralMode(ctre::phoenix::motorcontrol::NeutralMode::Coast);
}

void Robot::TeleopInit() {
	mFLTurn.NeutralOutput();
	mFRTurn.NeutralOutput();
	mBRTurn.NeutralOutput();
	mBLTurn.NeutralOutput();
}

void Robot::TeleopPeriodic() {
	printf(
		"0 FL: %d\n"
		"1 FR: %d\n"
		"2 BR: %d\n"
		"3 BL: %d\n",
		mFLEnc.GetValue(), mFREnc.GetValue(), mBREnc.GetValue(), mBLEnc.GetValue()
	);
}

#ifndef RUNNING_FRC_TESTS
int main() {
	return frc::StartRobot<Robot>();
}
#endif