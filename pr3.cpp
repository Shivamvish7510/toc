#include <iostream>
using namespace std;

#include <iostream>
#include <string>
using namespace std;
void state1(string w, int index);
void state2(string w, int index);
void state3(string w, int index);
void state4(string w, int index);
void state5(string w, int index);
void state6(string w, int index);
void state7(string w, int index);
void state8(string w, int index);
void state9(string w, int index);
void state10(string w, int index);
void state11(string w, int index);
void state12(string w, int index);
void state13(string w, int index);
void state14(string w, int index);
void state15(string w, int index);

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
        state6(w,index+1);
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
            state3(w,index+1);
        }
        else if(w[index]=='b'){
            state10(w,index+1);
        }
      
    }
   }

void state3(string w, int index){
   if(index==w.length()){
        cout<<" string not  Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state4(w,index+1);
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
            state5(w,index+1);
        }
        else if(w[index]=='b'){
            state3(w,index+1);
        }
      
    }
   }
void state5(string w, int index){
   if(index==w.length()){
        cout<<" string Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state5(w,index+1);
        }
        else if(w[index]=='b'){
            state3(w,index+1);
        }
      
    }
   }
void state6(string w, int index){
   if(index==w.length()){
        cout<<" string not Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state13(w,index+1);
        }
        else if(w[index]=='b'){
            state7(w,index+1);
        }
      
    }
   }
void state7(string w, int index){
   if(index==w.length()){
        cout<<" string not Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state7(w,index+1);
        }
        else if(w[index]=='b'){
            state8(w,index+1);
        }
      
    }
   }
void state8(string w, int index){
   if(index==w.length()){
        cout<<" string not Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state7(w,index+1);
        }
        else if(w[index]=='b'){
            state9(w,index+1);
        }
      
    }
   }
void state9(string w, int index){
   if(index==w.length()){
        cout<<" string  Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state7(w,index+1);
        }
        else if(w[index]=='b'){
            state9(w,index+1);
        }
      
    }
   }
void state10(string w, int index){
   if(index==w.length()){
        cout<<" string not Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state11(w,index+1);
        }
        else if(w[index]=='b'){
            state10(w,index+1);
        }
      
    }
   }
void state11(string w, int index){
   if(index==w.length()){
        cout<<" string not Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state11(w,index+1);
        }
        else if(w[index]=='b'){
            state12(w,index+1);
        }
      
    }
   }
void state12(string w, int index){
   if(index==w.length()){
        cout<<" string  Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state11(w,index+1);
        }
        else if(w[index]=='b'){
            state10(w,index+1);
        }
      
    }
   }
void state13(string w, int index){
   if(index==w.length()){
        cout<<" string not Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state13(w,index+1);
        }
        else if(w[index]=='b'){
            state14(w,index+1);
        }
      
    }
   }
void state14(string w, int index){
   if(index==w.length()){
        cout<<" string not Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state15(w,index+1);
        }
        else if(w[index]=='b'){
            state14(w,index+1);
        }
      
    }
   }
void state15(string w, int index){
   if(index==w.length()){
        cout<<" string  Accepted";
      return;
   }
   else{
        if (w[index]=='a'){
            state13(w,index+1);
        }
        else if(w[index]=='b'){
            state14(w,index+1);
        }
      
    }
   }

int main() {
    string w;
    cout<<" enter the string containing min four length of a,b : "<<endl;
    cout << "Enter a string: ";
    getline(cin, w);  
    if (w.empty()) {
        cout << "Empty string is not accepted" << endl;
    } else {
        state1(w, 0); 
    }

    return 0;
}
