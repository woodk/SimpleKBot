#ifndef SIMPLEKBOT_H_
#define SIMPLEKBOT_H_

#include "IterativeRobot.h"

class CANJaguar;
class KBotDrive;
class Joystick;

/**
 * This is a stripped down version of "BuiltinDefaultCode" modified to drive KBot2010."
 */
class SimpleKBot : public IterativeRobot
{

public:
	SimpleKBot();
	~SimpleKBot();
	
	void RobotInit(void);
	void DisabledInit(void);
	void AutonomousInit(void);
	void TeleopInit(void);
	void DisabledPeriodic(void);
	void AutonomousPeriodic(void);
	void TeleopPeriodic(void);
	void DisabledContinuous(void){};
	void AutonomousContinuous(void){};
	void TeleopContinuous(void){};

private:
	CANJaguar *m_leftJaguar1;
	CANJaguar *m_leftJaguar2;
	CANJaguar *m_rightJaguar1;
	CANJaguar *m_rightJaguar2;

	// Declare variable for the robot drive system
	KBotDrive *m_robotDrive;		// KBotDrive is an extension of RobotDrive
	
	// Declare a variable to use to access the driver station object
	DriverStation *m_ds;						// driver station object
	
	// Declare variables for the two joysticks being used
	Joystick *m_rightStick;			// joystick 1 (arcade stick or right tank stick)
	Joystick *m_leftStick;			// joystick 2 (tank left stick)

	// Local variables to count the number of periodic loops performed
	UINT32 m_autoPeriodicLoops;
	UINT32 m_disabledPeriodicLoops;
	UINT32 m_telePeriodicLoops;
		
};

#endif
