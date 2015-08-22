
#pragma config(Motor,  port2,           shooterleft,   tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           shooterright,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           spinnyintakeofdoomnumber1,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           garry,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           therollmodel, tmotorVex393_MC29, openLoop)

#include "controller.h"
#include "drive.h"

#include "drive.c"

task main()
{
	while(1) {
		motor[shooterleft] = motor[shooterright] = 127;
		motor[spinnyintakeofdoomnumber1] = motor[garry] = motor[therollmodel] = 127;
	}
}
