# include <iostream>
using namespace std;

    int fun(int n){
        int sum=0;
   for (int i = 0; i <= n; i++)  
    {  
         sum+=i; 

    }  
return sum;
}
int main(){
int n=20;
cout<<fun(n);
return 0;
} 