#include<iostream>
using namespace std;

void solver (int n, char source, char auxiliary, char destination)
{
    if(n==0)
        return;
    
    if(n==1)
    {
        cout<<source<<" "<<destination<<endl;
        return;
    }
    
    solver(n-1, source, destination ,auxiliary);
    cout<<source<<" "<<destination<<endl;
    solver(n-1, auxiliary, source, destination);
    

}
int main()
{
	cout<<"Enter total number of disks : ";
	int n;
	cin>>n;
	
	solver(n,'S', 'A', 'D');
	
}
