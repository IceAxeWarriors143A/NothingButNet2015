
#include "drive.h"
#include "controller.h"

void drive(enum drive_mode mode)
{
	switch(mode) {
		case kHDRIVE1:
			hdrive1();
			break;
		default:
			break;
	}
}

void hdrive1()
{

}
