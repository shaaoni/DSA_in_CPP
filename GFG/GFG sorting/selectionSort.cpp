#include<bits/stdc++.h>
using namespace std;

// void swap(int a[], int m,int i)
// {
//     a[m] = a[m]^a[i];
//     a[i] = a[m]^a[i];
//     a[m] = a[m]^a[i];
//     return;
// }


// int selectionSort(int a[], int n)
// {
//     int m,i,j;
//     for(i=0;i<n;i++)
//     {
//         m=i;
//         for(j=i;j<n;j++){
//             if(m>a[j]){
//                 m=j;
//             }
//         }
//         //swap(a,m,i);
//          a[m] = a[m]^a[i];
//          a[i] = a[m]^a[i];
//          a[m] = a[m]^a[i];
//     }
//     return;
// }


int main()
{
    int ar[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    //selectionSort(ar,n);

    int m,i,j,temp;
    for(i=0;i<n;i++)
    {
        m=i;
        for(j=i;j<n;j++){
            if(ar[m]<ar[j]){
                m=j;
            }
        }
        //swap(a,m,i);

        //1.
        // if(m!=i){
        //     ar[m] = ar[m]^ar[i];
        //     ar[i] = ar[m]^ar[i];
        //     ar[m] = ar[m]^ar[i];
        // }


        //2.
        // temp = ar[i];
        // ar[i]= ar[m];
        // ar[m]=temp;

        //3.
        if(m!=i){
            ar[m]= ar[m]+ar[i];
            ar[i]= ar[m]-ar[i];
            ar[m]= ar[m]-ar[i];
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}