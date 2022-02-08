#pragma once

#include <ctre/Phoenix.h>
#include <frc/AnalogInput.h>
#include <frc/TimedRobot.h>

class Robot : public frc::TimedRobot {
	public:
		void RobotInit() override;
		void TeleopInit() override;
		void TeleopPeriodic() override;

	private:
		// TalonSRX mFLDrive{21};
		TalonSRX mFLTurn{22};
		frc::AnalogInput mFLEnc{0};
		// TalonSRX mFRDrive{23};
		TalonSRX mFRTurn{24};
		frc::AnalogInput mFREnc{1};
		// TalonSRX mBRDrive{25};
		TalonSRX mBRTurn{26};
		frc::AnalogInput mBREnc{2};
		// TalonSRX mBLDrive{27};
		TalonSRX mBLTurn{28};
		frc::AnalogInput mBLEnc{3};
};
