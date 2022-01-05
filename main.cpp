// #include <iostream>
// using namespace std;

// int lenghtString(char s[]){
//   //base case
//   if(s[0]=='\0'){
//     return 0;
//   }

//   //dont ask how. recursion will do
//   return 1+ lenghtString(s+1);

// }

// int main(){
//   char s [100];
//   cin >> s;
//   int length= lenghtString(s);
//   cout << length;


// }



#include <iostream>
#include <cstring>
using namespace std;

void replacePi(char s[]){
  int l= strlen(s);
  if(l==0 || l==1){
    return;
  }
  if(s[0]=='p'&& s[1]=='i'){
    s[0]='3';
    s[1]='.';
//shifting from 2 to last all characters by 2 space right
for(int i=l+2;i>1;i--){
  s[i]=s[i-2];
}
s[2] = '1';
s[3] = '4';
  }

  replacePi(s+1);


}
int main(){
  char s[100];
  cin >> s;
  replacePi(s);
  cout<<s<<endl;
}