#include <chrono>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  // Start measuring time
  auto start = chrono::high_resolution_clock::now();

  for (int i = 0; i < 10000; ++i) {
    // cout << "hello world" << endl;
    printf("hello world\n");
  }

  auto end = chrono::high_resolution_clock::now();

  // Calculate the duration
  chrono::duration<double> duration = end - start;

  cout << "Time taken: " << duration.count() << " seconds" << endl;
}
