// hotel.h -- 符号常量和 hotel.c 中所有的函数的原型
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define HOTEL5 0.95

// 显示选择列表
int menu(void);

// 返回预定的天数
int getnights(void);

// 根据费率、入住天数计算费用
// 并显示结果
void showprice(double rate, int nights);
