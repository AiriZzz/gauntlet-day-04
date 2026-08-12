#include "Entity.hpp"
#include <iostream>
#include <vector>
#include <map>
#include <set>

std::vector<Entity> rosters;
std::map<int, Entity> byId;          // ordered id -> entity table

void lookForId(int id)
{
        auto it = byId.find(id);              // find() looks up without inserting
        if (it != byId.end()){
            std::cout<< "Id " << it->first << ": " << it->second.name << " \n" ;
        }
        else std::cout<< "Id " << id << ": Not Found \n" ;
}

int main(){

    rosters.push_back(Entity{7, "orc", 30});
    rosters.push_back(Entity{2, "bat", 8});
    rosters.push_back(Entity{42, "boss", 300});
    rosters.push_back(Entity{13, "rat", 4});

    for (const auto& entity : rosters)
    {
        byId[entity.id] = entity;
    }

    lookForId(42);
    lookForId(99);

    std::cout <<"--entities by id-- \n";

    for (const auto& [id, e] : byId)      // walks ids in ascending order
        std::cout << id << ' ' << e.name << '\n';

}