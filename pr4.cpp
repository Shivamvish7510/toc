#include <iostream>
using namespace std;

#include <iostream>
#include <string>
using namespace std;
void state1(string w, int index);
void state2(string w, int index);
void state3(string w, int index);
void state4(string w, int index);

void state1(string w, int index){
   if(index==w.length()){
        cout<<" string not Accepted";
      return;
   }
   else{
    if (w[index]=='a'){
        state2(w,index+1);
    }
    else if(w[index]=='b'){
        state4(w,index+1);
    }
    }
   }

  
void state2(string w, int index){
   if(index==w.length()){
        cout<<" string not Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state2(w,index+1);
        }
        else if(w[index]=='b'){
            state3(w,index+1);
        }
      
    }
   }

void state3(string w, int index){
   if(index==w.length()){
        cout<<" string  Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state2(w,index+1);
        }
        else if(w[index]=='b'){
            state3(w,index+1);
        }
      
    }
   }
void state4(string w, int index){
   if(index==w.length()){
        cout<<" string not Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state4(w,index+1);
        }
        else if(w[index]=='b'){
            state4(w,index+1);
        }
      
    }
   }

int main() {
    string w;
    cout<<" enter the string containing a and b only"<<endl;
    cout << "Enter a string: ";
    getline(cin, w);  
    if (w.empty()) {
        cout << "Empty string is not accepted" << endl;
    } else {
        state1(w, 0); 
    }

    return 0;
}
