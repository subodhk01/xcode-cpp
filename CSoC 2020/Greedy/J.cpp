//
//  J.cpp
//  skv
//
//  Created by Subodh Verma on 28/04/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    //cout << std::fixed << std::setprecision(5);
    int n;
    cin>>n;
    vector<long long int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int answer = 1;
    int temp = 1;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[i-1]) temp++;
        else {
            answer = max(answer,temp);
            temp = 1;
        }
    }
    answer = max(answer,temp);
    cout<<answer<<endl;
    return 0;
}
