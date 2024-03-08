#include <iostream>
using namespace std;
#include <string>

class Hero
{

private:
    string name;

public:
    void setName(string &newName)
    {
        name = newName;
    }
    // Getter method for name
    string getName() const
    {
        return name;
    }
} 


int main()

{
    Hero person;
    person.setName("TOuqeer");

    person.getName();

    return 0;
}
