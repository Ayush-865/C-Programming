    #include<iostream>
    using namespace std;
    int main()
    {
    int array[10]={0,1,2,3,4,5,6,1,1,7};
    int sum1=0;
    int sum2=0;
    for (int tr = 0; tr <10; tr++)
    {
    for (int i = 0; i<=tr ; i++)
    {
        for (int j = tr+1; j < 10; j++)
        {
           sum1=sum1+array[i];
           sum2=sum2+array[j];

           if (sum1==sum2)
    { 
        for (int i = 0; i <= tr; i++)
        {
        cout<<"array 1 is :  "<<array[i]<<" "<<endl;
        }

        for (int j= tr+1; j <10; j++)
        {
            cout<<"array 1 is :  "<<array[j]<<" "<<endl;
        }   
    }

    }  
    }
    }
    cout<<endl;
    return 0;
    }

