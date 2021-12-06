// Matt Brundage II
// 12/4/2021
// TemperatureProject.cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare
    int temperatures[7][2];
    double highTemp = 0;
    double lowTemp = 0;

    // Request User Input
    cout << "Please Enter the Highest and Lowest Temperatures for the last 7 Days: ";
    for(int x = 0; x < 7; x++)
    {
        cout << "Day " << x + 1 << ": ";
        cin >> temperatures[x][0] >> temperatures[x][1];
    }
    // Calculate Averages
    for(int x = 0; x < 7; x++)
    {
        highTemp += temperatures[x][0];
        lowTemp += temperatures[x][1];
    }
    highTemp /= 7;
    lowTemp /= 7;

    // Display Results
    cout << "The average Temperatures for the last 7 days are; High: " << fixed << setprecision(1) << highTemp << "and Low: " << fixed << setprecision(1) << lowTemp;
}  // End Program