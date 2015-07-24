
#pragma config(Motor,  port2,           shooterleft,   tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           shooterright,   tmotorVex393_MC29, openLoop)

#include "controller.h"

task main()
{
	while(1) {
		motor[shooterleft] = 127;
		motor[shooterright] = 127;
	}
}
