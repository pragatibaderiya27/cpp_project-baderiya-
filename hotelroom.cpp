#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    const double price_per_room{30} , price_per_suite{40};
    const   double tax_rates{0.06};
    cout<<"hello welcome to skyhigh hotel"<<endl;
    cout<<"-------------------------------"<<endl;
    std::cout<<"How many suite do you want to book"<<endl;
    std::cout<<"How many rooms do you want to book"<<endl;
    int number_of_rooms{30},number_of_suite{10};
    cin >> number_of_suite;
    cin >> number_of_rooms;
    std::cout<<"number of room available are "<< number_of_rooms<< "number of suite are available "<< number_of_suite<<endl;
    std::cout<<price_per_room<< price_per_suite<<endl;
    std::cout<< "cost per room is "<< number_of_rooms*price_per_room<< endl;
    std::cout<< "cost per suite is "<< number_of_suite*price_per_suite<<endl;

    const double tax_per_room{0.06};
    std::cout<<"tax per room is "<< tax_per_room<<endl;
    cout<<"--------------------------------"<<endl;
    std::cout<<"The total Estimate is "<<  (number_of_rooms*price_per_room)+(number_of_suite*price_per_suite)  +(price_per_room*number_of_rooms+price_per_suite*number_of_suite*tax_per_room)<<endl;
    cout<<"this bill is valid for 30 days."<<endl;
    

    return 0;
}
