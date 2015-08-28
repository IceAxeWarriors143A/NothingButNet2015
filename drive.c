
#include "drive.h"

static void hdrive1();

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

static void hdrive1()
{

}
