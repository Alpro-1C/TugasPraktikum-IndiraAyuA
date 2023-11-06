#include <iostream>

using namespace std;

int main(){
 int n;

 cout << "Masukkan tinggi piramida yang di inginkan: ";
 cin >> n;

 char currentChar = '*';
 for (int i = 0; i <= n; i++){
  for (int j = n; j > i; j--){
   cout << " ";
  }

 for (int k = 1; k <= i; k++){
  cout << currentChar << " ";
  }

  cout << endl;
  }

return 0;
}
