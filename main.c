
#include "motors.h"
#include "drive.h"

/* "Link" with other files */
#include "drive.c"

static void init_motors();

task main()
{
	init_motors();

	while(1) {
		motor[mlshooter] = motor[mrshooter] = 127;
		motor[mintake_s1] = motor[mintake_s2] = motor[mintake_s3] = 127;
	}
}

static void init_motors()
{
	motorType[mleftside] = tmotorVex393_MC29;
	motorType[mrightside] = tmotorVex393_MC29;
	motorType[mstrafe] = tmotorVex393_MC29;
	motorType[mintake_s1] = tmotorVex393_MC29;
	motorType[mintake_s2] = tmotorVex393_MC29;
	motorType[mintake_s3] = tmotorVex393_MC29;
	motorType[mlshooter] = tmotorVex393_MC29;
	motorType[mrshooter] = tmotorVex393_MC29;
	bMotorReflected[mrightside] = true;
}
