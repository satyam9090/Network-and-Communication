#include<iostream>
    using namespace std;

int main()
{
    int i,x,A[100],counter=0,cnt=0;
    cout<<"Enter Sequence to stop enter -1\n";
    for(i=0;i<100;i++)
    {   cin>>x;
        if(x!=-1)
        {
            A[i]=x;
            counter++;
        }
        else
            break;
    }

    cout<<"\nStufing the Sequence\n";

    int k=0,counter2=0,B[100];

    for(i=0;i<counter;i++)
    {
        if(cnt==5)
        {
            B[k]=0;
            k++;
            B[k]=A[i];
            if(B[k]==0)
                cnt=0;
            else
                cnt=1;
            k++;
        }
        else if(A[i]==1)
                {
                    cnt++;
                    B[k]=1;
                    k++;
                }
        else
        {
            B[k]=0;
            k++;
            cnt=0;
        }
    }

    if(counter==5)
    {
        if(cnt==5)
        {
            B[k]=0;
            k++;
        }
    }
    cout<<"\nStuffed Sequence: ";
    counter2=k;
    for(i=0;i<k;i++)
        cout<<B[i]<<" ";

    int C[100];
    k=0;
    cnt=0;
    for(i=0;i<counter2;i++)
    {
        if(cnt==5)
        {
            cnt=0;
        }
        else if(B[i]==1)
                {
                    cnt++;
                    C[k]=1;
                    k++;
                }
        else
        {
            C[k]=0;
            k++;
            cnt=0;
        }
    }
    cout<<"\nDe-Stuffed Sequence: ";
    for(i=0;i<k;i++)
        cout<<C[i]<<" ";


    return 0;
}
