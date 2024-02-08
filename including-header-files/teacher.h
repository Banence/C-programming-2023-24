#ifndef _TEACHER_H // --> Header Guards
#define _TEACHER_H

#include "person.h"

struct teacher {
    struct person details;
    char teachingsubject[30];
};

#endif