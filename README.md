RobotMovement
=============

Robot Movement Library

Functions
=========

void initTimer()

  * This function is used in order to initialize TA0 and TA1 timers
  * TAO/1 CRR0 are used for the period of the pulse width
  * OUTMOD_5 is used for half cycles

void moveRightMotorForward()
{
	TA0CCTL0 &= ~(OUTMOD_7);
 	TA0CCTL0 |= OUTMOD_5;
 	_delay_cycles(10000);
 	TA0CCTL1 &= ~(OUTMOD_7);
 	TA0CCTL1 |= OUTMOD_4;        
}

  * TA0 1 and 0 are used for the connections to the right motor. Applying power to 1 and ground to 0 will move the right motor forward while switching power and ground will send the motor back.

void moveLeftMotorForward()
{
	TA1CCTL0 &= ~(OUTMOD_7);
 	TA1CCTL0 |= OUTMOD_5;
 	_delay_cycles(10000);
 	TA1CCTL1 &= ~(OUTMOD_7);
 	TA1CCTL1 |= OUTMOD_4;       
}

  * TA1 1 and 0 are used for the connections to the left motor. Applying power to 1 and ground to 0 will move the left motor forward while switching power and ground will send the motor back.
  
void RobotMovement(unsigned char direction)

  * The RobotMovement chooses the direction of the whole robot by using both motors
  * moveLeftMotorForward() and moveRightMotorForward() will cause the whole robot to move forward
