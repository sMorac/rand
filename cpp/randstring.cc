#include <iostream> 
#include <string>
#include <random>

using namespace std;

int main(){
    unsigned seed1 = chrono::system_clock::now().time_since_epoch().count();
    mt19937 g1 (seed1);
    const char a[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    auto idx_rand = bind(uniform_int_distribution<int>(0,sizeof(a)-1), g1);
    int s_len = 10;  
    string s;
    s.reserve(s_len+1);
    
    for (int i = 0; i < s_len; ++i) {
        s +=  a[idx_rand()];
    }
    s[s_len] = 0;
    cout << s << endl;
}
