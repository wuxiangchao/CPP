//
// Created by WUXIANGCHAO on 2021/12/30.
//
#include <iostream>

struct Sales_data{
    std::string  isbn() const { return bookNo;}
    Sales_data &combine(const Sales_data&);
    double avg_price() const;
    std:: string bookNo;
    unsigned  units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);

