//
//  Costomer.hpp
//  银行管理系统
//
//  Created by Zirui Zheng  on 8/13/23.
//

#ifndef Costomer_hpp
#define Costomer_hpp

#include <iostream>
#include <iterator>
#include <queue>
#include "Person.hpp";

class Costomer : public Person{
private:
    std::queue<std::string> transactions;
    int balance;
    
public:
    const int getBalance() const{
        return balance;
    }
    
    void viewTransactions() const{
        std::cout<<std::endl;
        int j = 1;
        
        for(auto i : transactions){
            std::cout<<'<'<<j<<'>'<< *i << std::endl;
        }
    }
};
//day 2
#endif /* Costomer_hpp */
