//
//  dummyFile.cpp
//  
//
//  Created by Adarsh Panicker on 01/05/21.
//

#include "dummyFile.hpp"

void Journal::insertLogInJournal(const std::string log)
{
    vJournal.push_back(log);
}

void Journal::showJournal()
{
    for (int i = 0; i < vJournal.size(); ++i)
    {
        std::cout << vJournal[i] << std::endl;
    }
}

int main()
{
    Journal* journal = new Journal();
    journal->insertLogInJournal("Hello");
    journal->showJournal();
    journal->insertLogInJournal("Going to add log");
    journal->insertLogInJournal("Going to start app");
    journal->insertLogInJournal("Going to mix and match");
    journal->showJournal();
}
