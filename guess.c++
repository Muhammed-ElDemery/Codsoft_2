#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;




int main () {
    bool found = true;
    unsigned int goal = 0;
    srand(time(0));
    unsigned int target = rand() % 1000;

    cout << "Guess a number : \n";
    while(found)
    {
        cin >> goal;
        if (goal > target)
        {
            cout << "No, the vlaue is bigger than the target \n";

        }
        else if (goal < target){
            cout << "No, the vlaue is less than the target \n";
        }
        else {
            cout << "congratulations! \n";
            found = false;
        }
    }
    return 0;
}
