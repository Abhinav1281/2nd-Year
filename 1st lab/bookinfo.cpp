#include<iostream>
using namespace std;
struct book
{
    string aut;
    string name;
    double price;
};
int main()
{
    int n;
    cout<<"Enter number of books";
    cin>>n;
    struct book b[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter author of book-"<<(i+1);
        cin>>b[i].aut;
        cout<<"Enter name of book-"<<(i+1);
        cin>>b[i].name;
        cout<<"Enter price of book-"<<(i+1);
        cin>>b[i].price;
        
    }
    cout<<"Enter number of book to display";
    int bval;
    cin>>bval;
    cout<<"Author:"<<b[bval-1].aut;
    cout<<"\n NAME:"<<b[bval-1].name;
    cout<<"\n Price:"<<b[bval-1].price;

}
