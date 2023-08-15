//
//  Person.hpp
//  银行管理系统
//
//  Created by Zirui Zheng  on 8/13/23.
//

#ifndef Person_hpp
#define Person_hpp

#include <iostream>

class Person{
private:
    std::string username;
    std::string password;
    
    Person(std::string& u, std::string& p){
        username = u;
        password = p;
    }
    
    
    
public:
    void create(std::string u = "null", std::string p = "null"){
        if(u == "null" || p == "null"){
            std::cout<<"/nThe username or password is invalid, please redo it again"<<std::endl;
            return;
        }
        Person(u, p);
        std::cout<<"Person succefully created";
    }
    
    const std::string getUser() const{
        return username;
    }
    
    const std::string getPassword() const{
        return password;
    }
    
    void changePassword(const std::string& p){
        password = p;
    }
    
    void changeUsername(const std::string& u){
        username = u;
    }
   
};


#endif /* Person_hpp */
