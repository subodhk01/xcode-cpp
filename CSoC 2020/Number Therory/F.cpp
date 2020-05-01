//
//  F.cpp
//  skv
//
//  Created by Subodh Verma on 22/04/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    //cout << std::fixed << std::setprecision(5);
//    long long int n;
//    cin>>n;
//    if(n==0){
//        cout<<"0 0 0"<<endl;
//        return 0;
//    }
//    if(n==1){
//        cout<<"1 0 0"<<endl;
//        return 0;
//    }
//    if(n==2){
//        cout<<"1 1 0"<<endl;
//        return 0;
//    }
//    if(n==3){
//        cout<<"1 1 1"<<endl;
//        return 0;
//    }
//    vector<int> fib;
//    fib.push_back(0);
//    fib.push_back(1);
//    fib.push_back(1);
//    int i=3;
//    while( fib[i-1] <= n ){
//        fib.push_back(fib[i-1]+fib[i-2]);
//        i++;
//    }
//    cout<<fib[i-3]<<" "<<fib[i-5]<<" "<<fib[i-6]<<endl;
//    return 0;
//}
