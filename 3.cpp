#include <iostream>
#include <cstdbool>
using namespace std;

class User
{
private:
    string login, password;
public:
    User(string login, string password)
    {
        this->login = login;
        this->password = password;
    }
    bool authorize(string login, string password)
    {
       if(this->login == login && this->password == password)
           return TRUE;
       return FALSE;
    }

};


int main(int argc, char *argv[])
{





    return 0;
}
