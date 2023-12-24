#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int resp;
    for(int a=1; a<=9999; a++){
        cout << "? A " << a << endl;
        cin >> resp;
        if(resp == 1){
            for(int b=1;b<=9999;b++){
            	if(a==9999 && b==4237) continue;
            	cout << "? B " << b << endl;
        		cin >> resp;
        		if(resp==1){
        			cout<<"! "<<a+b;
        			return 0;
				}
			}
			int b=10000;
			cout<<"! "<<a+b;
			return 0;
        }
    }
    int a=10000;
    for(int b=1;b<=9999;b++){
    	if(b==4237) continue;
        cout << "? B " << b << endl;
       	cin >> resp;
       	if(resp==1){
       		cout<<"! "<<a+b;
       		return 0;
		}			
	}
    int b=10000;
    cout<<"! "<<a+b;
}