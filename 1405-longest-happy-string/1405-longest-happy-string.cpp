class Solution {
public:
    string longestDiverseString(int aa, int bb, int cc) {
        int maximum=0;
char a;
char b;
int minimum=0;
if(aa>=bb && aa>=cc){
    a='a';
    b='b';
maximum=aa;
minimum=bb+cc;
}else if(bb>=aa&& bb>=cc){
    a='b';
    b='c';
maximum=bb;
minimum=aa+cc;
}else if(cc>=aa&& cc>=bb){
    a='c';
    b='a';
maximum=cc;
minimum=aa+bb;
}
string ans;
if(maximum==minimum){
    while(maximum>0){
        if(maximum>2){
        ans.push_back(a);
         ans.push_back(a);
         ans.push_back(b);
         ans.push_back(b);
         maximum-=2;

    }else{
          ans.push_back(a);
         ans.push_back(b);
         maximum-=1;
    }


    }
}
int check=0;
        
if(maximum>minimum){
check=1;
while(maximum >0 && minimum>0 &&maximum!=minimum ){

if(maximum-minimum>=2){
ans.push_back(a);
ans.push_back(a);
// ans.push_back(b);
maximum-=2;
check=0;
// minimum-=1;
}else if(maximum-minimum==1){
    ans.push_back(a);
maximum-=1;
check=0;
}
if(maximum!=minimum){
    minimum-=1;
     ans.push_back(b);
     check=1;
}


}

if(maximum>0&&minimum==0){
    if(check==1){
        if(maximum>=2){
            ans.push_back(a);
            ans.push_back(a);
        }else{
                    ans.push_back(a);  
        }
    }
}
if(maximum==minimum){
    while(maximum>0){
        if(maximum>2){
            if(check==1){
        ans.push_back(a);
         ans.push_back(a);
         ans.push_back(b);
         ans.push_back(b);
     }else{
        ans.push_back(b);
         ans.push_back(b);
         ans.push_back(a);
         ans.push_back(a);

    
     }     maximum-=2;

    }else{
        if(check==1){
     ans.push_back(a);
      ans.push_back(b);
 }else{     
         ans.push_back(b);
          ans.push_back(a);
         maximum-=1;
 }
    }


    }
}
}else{

while(maximum >0 && minimum>0 &&maximum!=minimum ){

if(minimum-maximum>=2){
    // cout<<"ans "<<endl;
ans.push_back(b);
ans.push_back(b);
// ans.push_back(b);
minimum-=2;
check=0;
// minimum-=1;
}else if(minimum-maximum==1){
    ans.push_back(b);
minimum-=1;
check=0;
}
if(maximum!=minimum){
    maximum-=1;
     ans.push_back(a);
     check=1;
}


}

if(maximum==minimum){
    while(maximum>0){
        if(maximum>2){
            if(check==0){
        ans.push_back(a);
         ans.push_back(a);
         ans.push_back(b);
         ans.push_back(b);
     }else{
        ans.push_back(b);
         ans.push_back(b);
         ans.push_back(a);
         ans.push_back(a);

    
     }     maximum-=2;

    }else{
        if(check==0){
     ans.push_back(a);
          ans.push_back(b);
 }else{     
         ans.push_back(b);  
           ans.push_back(a);
       
 }  maximum-=1;
    }


    }
}


}

if(a=='a'){

    int temp=cc;
for(int i=0; i<ans.size(); i++){
    if(ans[i]=='b' && temp>0){
        ans[i]='c';
        temp-=1;
    }
}
}else if(a=='b'){
    int temp=aa;
for(int i=0; i<ans.size(); i++){
    if(ans[i]=='c' && temp>0){
        ans[i]='a';
        temp-=1;
    }
}
}else{  

 int temp=bb;

for(int i=0; i<ans.size(); i++){
    if(ans[i]=='a' && temp>0){
        ans[i]='b';
        temp-=1;
    }
}

}




return ans;
    }
};