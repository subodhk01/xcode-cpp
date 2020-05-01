//
//  E.cpp
//  skv
//
//  Created by Subodh Verma on 21/04/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    //cout << std::fixed << std::setprecision(5);
//    bool isPrime[1001];
//    for(int i=0; i<1001; i++){
//        isPrime[i]=true;
//    }
//    isPrime[0] = true;
//    isPrime[1] = true;
//    for(int i=2; i<1001; i++){
//        if(isPrime[i]==true){
//            for(int j=i*i; j<1001; j+=i){
//                isPrime[j] = false;
//            }
//        }
//    }
//    vector<int> primes;
//    for(int i=2; i<1002; i++){
//        if(isPrime[i]) primes.push_back(i);
//    }
//    int n,k;
//    cin>>n>>k;
//    int i = 0;
//    int kr = 0;
//    while(primes[i]+primes[i+1]+1<=n){
//        //cout<<primes[i]<<" "<<primes[i+1]<<" "<<primes[i]+primes[i+1]+1<<endl;
//        if( isPrime[primes[i]+primes[i+1]+1] ) kr++;
//        i++;
//    }
//    if(kr>=k) cout<<"YES"<<endl;
//    else cout<<"NO"<<endl;
//    return 0;
//}
