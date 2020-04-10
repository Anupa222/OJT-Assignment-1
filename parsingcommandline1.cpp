#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(int argc,char *argv[])
{
	int i;
	cout<<argv[0]<<endl;
	cout<<"type"<<"\t"<<"value"<<"\t"<<"size"<<endl;
	for(i=1;i<argc;i++)
	{
		int a=atoi(argv[i]);
		if(a==0)
		{
			if(strlen(argv[i])==1)
			cout<<endl<<"char";
			else
			cout<<endl<<"string";
			cout<<"\t"<<argv[i]<<"\t"<<strlen(argv[i]);
		}
		else
		{
			float b=atof(argv[i]);
			if(a==b)
			{
				cout<<endl<<"int"<<"\t"<<a<<"\t"<<sizeof(a);
			}
			else
			cout<<endl<<"float"<<"\t"<<b<<"\t"<<sizeof(b);
		}
	}
}
