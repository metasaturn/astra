#include <bits/stdc++.h>
using namespace std;
int main() {
    int i=0,j,sum=0;
	char a[255],x;
	
	cin>>x;	
	cin.ignore();
	cin.getline(a,255);
	while (a[i]!='\0'){
		i++;
	} 
	//cout<<i<<endl;
	for (j=0;j<i;j++){
		if (a[j]==x) sum++; 
	}
	//cout<<sum<<endl;
	cout<<fixed<<setprecision(2)<<sum*1.0/i*100<<"%"<<endl;
	printf("%.2f%%",sum*1.0/i*100);
	return 0;
}
