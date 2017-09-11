#include <iostream>
#include <chrono>
#include <random>

using namespace std;

int main (){
  unsigned seed1 = chrono::system_clock::now().time_since_epoch().count();

  mt19937 g1 (seed1);  // mt19937 is a standard mersenne_twister_engine
  cout << "A time seed produced: " << g1() << endl;

  return 0;
}
