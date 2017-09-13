#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(NULL)); // using time to generate the seed
    int a = rand(); // calling the random function
    cout << a << endl;
    return 0;
}
