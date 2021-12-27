#pragma once
//#define admin 0
//#define client 1
//#define employee 2
#define NOT_FOUND -1
CONST int DEF_VISIT_NUM = 0;
enum  userType { ADMIN = 0, EMPLOYEE, CLIENT};
enum  clientStatusType { REGULAR = 10, ONCE = 0, NEW = 15, VIP = 25 };