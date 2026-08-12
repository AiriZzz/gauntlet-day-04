#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

std::set<int> ids;

void MembershipCount(const std::set<int>& ids,int id)
{

    if (ids.count(id))
    {
        std::cout << "is " << id << " Spawned? Yes \n";
    }
    else std::cout << "is " << id << " Spawned? No \n";
}

int main(){

        ids.insert(7);
        ids.insert(2);
        ids.insert(7);
        ids.insert(42);
        ids.insert(13);
        ids.insert(2);
        ids.insert(42);    
    
        std::cout << "--spawned (unique, sorted)-- \n" ;
    for (int id : ids) std::cout << id << '\n';

    std::cout << "Count: " << ids.size() << " \n";

    MembershipCount(ids, 42);
    MembershipCount(ids, 99);

}