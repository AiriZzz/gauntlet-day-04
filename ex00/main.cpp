#include "Entity.hpp"
#include <iostream>
#include <vector>
#include <map>
#include <set>

std::vector<Entity> rosters;


int main(){

    rosters.push_back(Entity{7, "orc", 30});
    rosters.push_back(Entity{2, "bat", 8});
    rosters.push_back(Entity{42, "boss", 300});
    rosters.push_back(Entity{13, "rat", 4});

    std::cout << "--roster-- \n";


    for(const Entity& roster : rosters ) //Print out Entitys inside vector, read only
    {
        std::cout << roster.id << " " << roster.name + " (Hp " << std::to_string(roster.hp) + " ) \n";
    }

    //Scan front to back, and erase entity with hp<5

    for(auto it = rosters.begin() ; it != rosters.end();)
    {
        if(it->hp < 5 ) it = rosters.erase(it);
        else    ++it    ;
    }

    std::cout <<"--survivors-- \n";

        for(const Entity& roster : rosters ) //Print out Entitys inside vector
    {
        std::cout << roster.id << " " << roster.name + " (Hp " << std::to_string(roster.hp) + " ) \n";
    }
}