#include <iostream>
#include <string>
using namespace std;

void state1(string w, int i);
void state2(string w, int i);
void state3(string w, int i);
void state4(string w, int i);

void state1(string w, int i){
  if(i==w.length()){
    cout << "String Accepted." << endl;
    return;
  }

  if(w[i]=='a') state4(w, i+1);
  else if(w[i]=='b') state2(w,i+1);
  else cout << "Symbol " << w[i] << " is not in alphabet set, {a,b}";
}

void state2(string w, int i){
  if(i==w.length()){
    cout << "String Rejected." << endl;
    return;
  }

  if(w[i]=='a') state3(w, i+1);
  else if(w[i]=='b') state1(w,i+1);
  else cout << "Symbol " << w[i] << " is not in alphabet set, {a,b}";
}

void state3(string w, int i){
  if(i==w.length()){
    cout << "String Rejected." << endl;
    return;
  }

  if(w[i]=='a') state2(w, i+1);
  else if(w[i]=='b') state4(w, i+1);
  else cout << "Symbol " << w[i] << " is not in alphabet set, {a,b}";
}

void state4(string w, int i){
  if(i==w.length()){
    cout << "String Rejected." << endl;
    return;
  }

  if(w[i]=='a') state1(w,i+1);
  else if(w[i]=='b') state3(w,i+1);
  else cout << "Symbol " << w[i] << " is not in alphabet set, {a,b}";
}

int main(){
  string w;
  cout << "Enter string: ";
  getline(cin,w);
  if(w.empty()) cout << "String Accepted." << endl;
  else state1(w,0);
}
