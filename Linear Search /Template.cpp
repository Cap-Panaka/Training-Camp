#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x;
    cout<<"How many values?: ";
    cin>>n;
    
    vector<int>a(n);
    

    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
        cout<<"Enter the values to search: ";
    cin>>x;
    
    int flag=0;
    
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag =1;
            break;
        }
    }
    
    if(flag==1)
    {
        cout<<"Found"<<endl;
    }
    else 
    {
        cout<<"NOT FOUND"<<endl;
    }
    
    return 0;    
}



/*
#include<bits/stdc++.h>
using namespace std;

//Linear Search
int linearSearch(vector<int>& a ,int target)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    vector<int>a;
    a={1,6,7,4,6};
    int target = 6;
    int index= linearSearch(a,target);
    if(index==-1)
    {
            cout<<"Not found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }
}


*/




