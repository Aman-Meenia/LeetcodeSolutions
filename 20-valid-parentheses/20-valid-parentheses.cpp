

class Stack{

public:
char *array;
int size;
//  top points to the top element index 
int top;

//  it will initialize the stack 
Stack(int size){
    this->size=size;
    array = new char[size];
    top=-1;
}


//  to check stack is full
bool isfull(){
    //  simply check if out top points to last index element , it mean that stack is full 
    if(top==size-1) return true;
    else return false;
}

//  to check stack is empty 

bool isempty(){
    if(top==-1) return true;
    else return false;
}


//  Push element in stack 
void pushelemnt(char element){
    if(isfull()) {
        cout<<" Stack is ful, we do insert any element anymore "<<endl;
        return;
    }
    top++;
    array[top]=element;

}

// pop element in a stack 
void popelemnt(){
    if(isempty()){
        cout<<" Stack is empty ,we cannot pop any element from stack"<<endl;
    }else{
     top--;   
    }
}
//  Peek Element -> It give top element of stack 
char peekelement(){
    if(isempty()){
        cout<<"Stack is empty "<<endl;
        return '#';
    }else{
return array[top];
    }
}







};


class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
       Stack st(n);



if(s.size()%2==1){
    cout<<" Expression is Invalid "<<endl;
        return false;
}else{

for(int i=0; i<n; i++){


    if(s[i]=='('  || s[i]=='[' || s[i]=='{'){
        st.pushelemnt(s[i]);

    }else{
        if(st.isempty()){
                cout<<" Expression is Invalid "<<endl;
                return false;
                break;
            }else{

char stacktop=st.peekelement();
if(s[i]==')'  && stacktop=='('){

    st.popelemnt();
        // cout<<"st,to "<<st.peekelement()<<endl;
}else if(s[i]=='}' && st.peekelement()=='{'){
    st.popelemnt();
}else if(s[i]==']' && st.peekelement()=='['){
    st.popelemnt();
}else{
cout<<" Expression is Invalid "<<endl;
        return false;
                break;
}




            }




    }
}

if(st.isempty()){
    cout<<"Expression is vaild "<<endl;
    return true;
}else{
cout<<" Expression is Invalid "<<endl;
    return false;
}

}
        
    }
};