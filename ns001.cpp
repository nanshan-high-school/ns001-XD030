#include <iostream>
#include <stack>
using namespace std;
int main() {
  stack<int> b;
  int n, m, c, t = 0, a = 1;
  int order[n];
  char d;
  cin >> n >> m;
  for (int j = 0; j < m; j++){
    cin >> d >> c; 
    if (d == 'a')
    { 
      for (int j = 0; j < c; j++)
      {
        b.push(a);
        a += 1;
      }
    }
    if (d == 'b')
    { 
      for(int e = 0; c > e; e++)
      {
        order[t] = b.top();
        b.pop();
        t++; 
      }
    }
  }
  for (int j = 0; j < n; j++)
  {
    cout << order[j] << " ";
  }
}
