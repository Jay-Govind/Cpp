#include <iostream>
using namespace std;

int main()
{
    float price = 9.99;
    int wholeNumber = static_cast<int>(price);
    cout << wholeNumber << endl;

    int roundedprice = (int) price;
    cout << roundedprice << endl;
    
    return 0;
}