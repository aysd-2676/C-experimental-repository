#include <iostream>

using namespace std;

int main() 
{
    int Birth_day ;
    int Birth_month ;
    int Birth_year ;
    int todays_date;
    int current_month;
    
    cout << "Enter today's date: " << endl;
    cout << "Date: ";
    cin >> todays_date;
    cout << "Month: ";
    cin >> current_month;
    cout << "Enter your Birth date:" << endl;
    cin >> Birth_day;
    cout << "Enter your Birth month (numerically):" << endl;
    cin >> Birth_month;
    cout << "Enter your Birth Year:" << endl;
    cin >> Birth_year;
    cout << "" << endl;
    
    if (Birth_month < current_month) cout << "Nice so you are " << 2024 - Birth_year << " years old!" << endl;
    if (Birth_month > current_month) cout << "Nice so you are " << 2023 - Birth_year << " years old!" << endl;
    if ((Birth_month == current_month) && (Birth_day < todays_date)) cout << "Nice so you are " << 2024 - Birth_year << " years old!" << endl;
    if ((Birth_month == current_month) && (Birth_day > todays_date)) cout << "Nice so you are " << 2023 - Birth_year << " years old!" << endl;
    if ((Birth_month == current_month) && (Birth_day == todays_date)) cout << "A very happy " << 2024 - Birth_year << "th Birthday to you, wish a long life ahead!" << endl;
    return 0;
}