
#include<bits/stdc++.h>
using namespace std;

void takeinput(int a[][11]){
    int sum=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
                sum++;
        }
    }
}
void print(int a[][10]){
for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
                cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
//l
void leddar(int *value){
//int temp
if(*value==24){
*value=96;
} if(*value==10){
*value=50;

}
 if(*value==59){
    *value=90;}
 if(*value==31){
*value=76;
}
 if(*value==77){
*value=97;
}
 if(*value==65){
*value=84;
} if((*value)==99){
*value=24;

}
//cout<<"hi"<<endl;

}

int main(){
int a[10][10];

 int sum=1;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
              a[i][j]=sum++;
        }
    }
//takeinput(a);
print(a);
int player1=0;
int player2=0;
int temp1,temp2;
while(player1!=100 || player2!=100){
     //char p1='a';
    char d;
    cout<<"player1 turn"<<endl;
    cin>>d;
    if(d=='a'){
      temp1=rand()%6+1;
    }
    if(player1+temp1<=100){
    player1=player1+temp1;
    }

    leddar(&player1);
    //char p2='b';
    char c;
    cout<<"player2 turn"<<endl;
    cin>>c;
    if(c=='b'){
      temp2=rand()%6+1;
    }
    if(player2+temp2<=100){
    player2=player2+temp2; }

    leddar(&player2);
    if(player1!=player2){
        int k=player1/10;
        int l=player1%10-1;
         a[k][l]= -1;
          int m=player2/10;
        int n=player2%10-1;
         a[m][n]= -2;
         print(a);
          a[k][l]= player1;
          a[m][n]=player2;
         cout<<"****************"<<endl;
          cout<<"****************"<<endl;
          if (player1==100||player2==100){
            if(player1==100){
                cout<<"PLAYER1 WON"<<endl;
            }
            else{
                cout<<"PLAYER2 WON"<<endl;
            }
            break;
          }
    }
}
return 0;

}