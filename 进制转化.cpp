#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int n,a,b,c;
int sum,x;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		sum=0;
		x=0;
	    for(int j=1;j<=100000;j++){
			if(x<=a){
				sum++;
	    	}
	        else break;
			x=pow(b,j);
		}
	    for(int k=sum;k>=1;k--){
	    	for(int q=0;q<=b;q++){
	    		if(q*pow(b,(k-1))>a){
	    			cout<<q-1;
	    			a=a-((q-1)*pow(b,(k-1)));
	    			break; 
	    			}
	    		if(q*pow(b,(k-1))==a){
	    			cout<<q;
	    			a=a-(q*pow(b,(k-1)));
	    			break;
	    			}
	    		}	
    		} 
    		cout<<endl; 
    	}
    }

