#define _CRT_SECURE_NO_WARNINGS
#ifndef __BANKING_COMMON_H__
#define __BANKING_COMMON_H__

#include <iostream>
#include <cstring>
using namespace std;
const int NAME_LEN = 20;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
enum { Level_A = 7, Level_B = 4, Level_C = 2 };
enum { NORMAL = 1, CREDIT = 2 };

#endif