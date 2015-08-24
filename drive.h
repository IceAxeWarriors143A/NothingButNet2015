
#ifndef DRIVE_H
#define DRIVE_H

#include "controller.h"

enum drive_mode {
	kHDRIVE1,
};

void drive(enum drive_mode, const struct controller*);
void hdrive1(const struct controller*);

#endif
