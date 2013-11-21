/*
 * movement.h
 *
 *  Created on: Nov 19, 2013
 *      Author: C15Noel.Nicolas
 */

#ifndef MOVEMENT_H_
#define MOVEMENT_H_
#define FORWARD  1
#define REVERSE  2
#define LEFT  3
#define SHARPLEFT 4
#define RIGHT  5
#define SHARPRIGHT 6



void initTimer();
void RobotMovement(unsigned char direction);
void Stop();

#endif /* MOVEMENT_H_ */
