# include <iostream>
using namespace std;

    void fun(int n){
       for(int i=1; i<=n; i++)
    {    
        if(i%2==0){
        cout<< i<<endl;}
    }
}
int main(){
int n=20;
fun(n);
return 0;
} 