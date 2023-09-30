#include<iostream>
using namespace std;
bool goable(int** arr, int y , int x,int n){
    if (x<n && y<n && arr[x][y]==1 && x>=0 && y>=0 ){
        return true;
    }
    return false;
}

bool rat(int** arr, int** solarr, int n, int y, int x) {
    if (x == n - 1 && y == n - 1) {
        solarr[x][y] = 1;
        return true;
    }

    if (goable(arr, y, x, n)) {
        solarr[x][y] = 1;
        if (rat(arr, solarr, n, y + 1, x)) {  // Try moving down
            return true;
        }
        if (rat(arr, solarr, n, y, x + 1)) {  // Try moving right
            return true;
        }
        if (rat(arr, solarr, n, y - 1, x)) {  // Try moving up
            return true;
        }
        if (rat(arr, solarr, n, y, x - 1)) {  // Try moving left
            return true;
        }
        solarr[x][y] = 0;
        return false;
    }

    return false;
}


int main()
{

    int n ;
    cin >> n ; 

    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]= new int[n];
    }
    
    
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    int** solarr = new int*[n];
    for (int i = 0; i < n; i++)
        {
            solarr[i]= new int[n];
        }

    for (int  i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                solarr[i][j]=0;
            }

        }

        rat(arr,solarr, n , 0, 0 );

          for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<solarr[i][j]<<" ";
            }
            cout<<endl;
        }
       for (int i = 0; i < n; i++) {
    delete[] arr[i];
    delete[] solarr[i];
}
delete[] arr;
delete[] solarr;

   return 0;
}