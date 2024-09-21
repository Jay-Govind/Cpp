#include <iostream>
using namespace std;

// create own namespace
namespace Govind
{
    void display()
    {
        // comment
    }
}

int main()
{
    Govind::display(); // --> using own namespace

    cout << " Hello World from Govind !" << endl;
    return 0;
}

// ---------------------- 2nd Way ------------------------

int main2()
{
    std::cout << " Hello World from C++ !" << std::endl;
    return 0;
}

// ---------------------- 3rd Way ------------------------
using std::cout;
using std::endl;

int main3()
{
    cout << " Hello World from C++ !" << endl;
    return 0;
}