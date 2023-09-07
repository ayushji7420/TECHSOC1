#include<iostream>
using namespace std;
void sum(int x,int y){
    cout<<x+y<<"\n";
}
void subtract(int x,int y){
    cout<<x-y<<"\n";
}
void multiply(int x,int y){
    cout<<x*y<<"\n";
}
void divide(int x,int y){
    cout<<x/y<<"\n";
}
double exponent(double b,double p){
    double num=1;
    for(int i=1;i<=p;i++){
        num*=b;
    }
    return num;
}
double factorial(int x){
    double a=1;
    for(int i=1;i<=x;i++){
        a*=i;
    }
    return a;
}
double sin(double x){
    double num=0;
        for(int i=0;i<=100;i++){
            if(i%2==0){
               num+=exponent(x,2*i+1)/factorial(2*i+1);
            }
            else{
               num-=exponent(x,2*i+1)/factorial(2*i+1);
            }
        }
        //cout<<num;
        return num;
}
double cos(float x){
    cout<<sin(1.57-x)<<endl;
    
}
double tan(float x){
    cout<<sin(x)/cos(x)<<endl;
}
int main(){
    int ch;
    while(1){
        cout<<"Enter the choice number:\n1.add\n2.subtract\n3.multiply\n4.division\n5.exponent\n6.sine\n7.cosine\n8.tangent\n9.Exit";
        cin>>ch;
        if(ch==1){
            int k;
            int m;
            cout<<"Enter the first number:";
            cin>>k;
            cout<<"Enter the second number:";
            cin>>m;
            sum(k,m);
        }
        else if(ch==2){
            int k;
            int m;
            cout<<"Enter the first number:";
            cin>>k;
            cout<<"Enter the second number:";
            cin>>m;
            subtract(k,m);
        }
        else if(ch==3){
            int k;
            int m;
            cout<<"Enter the first number:";
            cin>>k;
            cout<<"Enter the second number:";
            cin>>m;
            multiply(k,m);
        }
        else if(ch==4){
            int k;
            int m;
            cout<<"Enter the first number:";
            cin>>k;
            cout<<"Enter the second number:";
            cin>>m;
            divide(k,m);
        }
        else if(ch==5){
            int k;
            int m;
            cout<<"Enter the first number:";
            cin>>k;
            cout<<"Enter the second number:";
            cin>>m;
            cout<<exponent(k,m);
        }
        else if(ch==6){
            double y;
            cout<<"Enter the angle in degree:";
            cin>>y;
            y = y*3.14/180;
            double x = sin(y);
            cout << x <<endl;
        }
        else if(ch==7){
            float x;
            cout<<"Enter the angle in degree:";
            cin>>x;
            x*=3.14;
            x/=180;
            cos(x);
        }
        else if(ch==8){
            float x;
            cout<<"Enter the angle in degree:";
            cin>>x;
            x*=3.14;
            x/=180;
            tan(x);
        }
        else if(ch==9){
            break;
        }
        else{
            cout<<"Enter the correct choice\n";
        }
    }
}

