//
// Created by WUXIANGCHAO on 2021/12/9.
//

#ifndef STRUCT_SALES_DATA_H
#define STRUCT_SALES_DATA_H
#include <string>

struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif //STRUCT_SALES_DATA_H
