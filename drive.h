
#ifndef DRIVE_H
#define DRIVE_H

#include "controller.h"

void drive(enum drive_mode mode, struct controller* ctrlr);
void hdrive1(struct controller* ctrlr);

#endif
