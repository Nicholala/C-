#include <iostream>
using namespace std;
class Number{
	public:
		int n;
		Number(int q){
			n=q;
		}
		Number maxDivisor(Number s){
			int e=s.n;
			Number tmp(1);
			for(int q=1;q<=n;q++){
				if(n%q==0 && e%q==0){
					tmp.n=q;
				}
			}	
			return tmp;
		}
		void show(){
			cout<<n<<endl;
		}
}; 
int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1), no2(n2);
        Number no3 = no1.maxDivisor(no2);  //最大公约数
        no3.show();
    }
}
