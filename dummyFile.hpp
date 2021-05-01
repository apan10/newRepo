//
//  dummyFile.hpp
//  
//
//  Created by Adarsh Panicker on 01/05/21.
//

#ifndef dummyFile_hpp
#define dummyFile_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

class Journal
{
private:
    std::string log;
    std::vector<std::string> vJournal;
public:
    void showJournal();
    void insertLogInJournal(const std::string log);
};

#endif /* dummyFile_hpp */
