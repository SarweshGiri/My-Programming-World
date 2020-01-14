#include<iostream>
using namespace std;
int main()
{
	int c,n,i,first=0,second=1,next;
	int a[20],j=0,count=0;
	cin>>n;
	for(c=0;c<n;c++)
	{
		if(c<=1)
		next=c;
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		cout<<next<<endl;
		if(next>1 && first>1)
		{
			for(i=first+1;i<next;i++)
			{
				a[j]=i;
				count++;
				j++;
			}
		}
	}
	for(j=0;j<count;j++)
	{
	    cout<<" ";
		cout<<a[j];
	}
	return 0;
}
