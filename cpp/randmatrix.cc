#include <iostream> 
#include <string>
#include <random>

using namespace std;

int main(){
    unsigned seed1 = chrono::system_clock::now().time_since_epoch().count();
    mt19937 g1 (seed1);
    
    int n = 10; 
    int m = 9;
    int matrix[n][m]; 
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            matrix[i][j] = g1();
        }
    }
    cout << "[" << endl;
    for(int i = 0; i < n-1; i++){
        cout << "\t" << "[";
        for(int j = 0; j < m-1; j++){
            cout << matrix[i][j] << "\t";
        }
        cout << matrix[i][m-1] << "]" << endl;
    }
    cout << "]" << endl; 
}
