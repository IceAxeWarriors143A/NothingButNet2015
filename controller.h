
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "drive.h"

struct drive_controls {
	int placeholder;
};

struct controller {
	enum drive_mode dm;
	struct drive_controls drive_ctrls;
};

#endif
