//
//  main.cpp
//  sqlite3-test
//
//  Created by Tom on 14-6-20.
//  Copyright (c) 2014年 jiaozicat. All rights reserved.
//

#include <iostream>
#include "CppSQLite3.h"

// sample
// www.codeproject.com/Articles/6343/CppSQLite-C-Wrapper-for-SQLite

int main(int argc, const char * argv[])
{

    // insert code here...
    // std::cout << "Hello, World!\n";
    CppSQLite3DB db;
    std::cout << "sqlite version: " << db.SQLiteVersion() << std::endl;
    db.open("test.db");
    
    db.execDML("create table emp(empno int, empname char(20));");
    
    int nRows = db.execDML("insert into emp values (7, 'David Beckham');");
    std::cout << nRows << " rows inserted " << std::endl;
    
    return 0;
}

