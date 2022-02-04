# include<bits/stdc++.h>


using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mergeWES(int X[],int Y[],int n, int m)
{
   for(int i=0;i<n;i++)
   {
       if(X[i]>Y[0])
       {
           swap(X[i],Y[0]);
           int first=Y[0];
           int k;
           for(k=1;k<m && Y[k]<first;k++)
           {
               Y[k-1]=Y[k];
           }
           Y[k-1]=first;
       }

   }


}

int main()
{
    int X[] = {1, 4, 7, 8, 10};
    int Y[] = {2, 3, 9};
    int n=sizeof(X)/sizeof(X[0]);
    int m=sizeof(Y)/sizeof(Y[0]);
    mergeWES(X,Y,n,m);
    cout << "X: ";
    printArray(X, n);
    cout << "Y: ";
    printArray(Y, m);

    return 0;
}

// Time--> O(n*m1);
// Space--> O(1);
