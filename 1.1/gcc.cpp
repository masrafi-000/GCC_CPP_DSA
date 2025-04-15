#include <iostream>
using namespace std;

int main()
{
    // cout << "Hey there" << endl;
    int items = 50;
    double cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    char currency = '$';
    char grade = 'h';
    int value = grade;
    cout << "Number of items: " << items << "\n";
    cout << "Cost per item: " << cost_per_item << "" << currency << "\n";
    cout << "Total cost = " << total_cost << "" << currency << "\n";
    cout << sizeof(value) << endl;
    return 0;
}
