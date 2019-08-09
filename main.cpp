#include <string>
#include <iostream>

using namespace std;

/*refreshing and practicing with practice problems from Problem Solving with C++, 10th edition
or from web-based tutorials*/

const double OUNCES_PER_METRIC_TON = 35273.92;

int main(){
    int ounceInput = 0;
    char enterAgain = 'y';
    cout << "Basic ounce to metric ton converter.\n";

    while (enterAgain != 'n' && enterAgain != 'N'){
        cout << "Please input the weight of the box in ounces: ";
        cin >> ounceInput;
        cout << endl << "You input " << ounceInput << " ounces.\nThis converts to " << (ounceInput / OUNCES_PER_METRIC_TON) << " Metric tons." << endl;
        cout << "Would you like to enter a new weight? (y/n)";
        cin >> enterAgain;
        if (enterAgain == 'n' || enterAgain == 'N'){
            cout << "Thank you for using this program";
        }
        
    }

    return 0;
    
}