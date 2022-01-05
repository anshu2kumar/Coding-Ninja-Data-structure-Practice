#include <iostream>
using namespace std;

int lenghtString(char s[]){
  //base case
  if(s[0]=='\0'){
    return 0;
  }
  return 1+ lenghtString(s+1);

}

int main(){
  char s [100];
  cin >> s;
  int length= lenghtString(s);
  cout << length;


}