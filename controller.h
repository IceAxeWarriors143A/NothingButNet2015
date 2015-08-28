
#ifndef CONTROLLER_H
#define CONTROLLER_H

enum drive_mode {
	kHDRIVE1,
};

struct drive_controls {
	int placeholder;
};

struct controller {
	enum drive_mode dm;
	struct drive_controls drive_ctrls;
};

#endif
