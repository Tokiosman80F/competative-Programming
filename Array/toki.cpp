#include<bits/stdc++.h>

using namespace std;

const int val = 5 * pow(10, 4);

int main()
{
    long long arr[val] = {0};

    int n; cin >> n;
    int numbers;

    for(int i=0; i<n; ++i)
    {
        cin >> numbers;
        arr[numbers-1]++;
    }

    int maxxEle = *max_element(arr, arr+n);
    cout << "Maximum Count is: " << maxxEle << endl;

    for(int i=0; i<n; ++i)
    {
        if(arr[i] == maxxEle)
        {
            cout << "Most number: " << i+1 << endl;
            break;
        }
    }

    return 0;
}