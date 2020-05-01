//
//  265498-C.cpp
//  skv
//
//  Created by Subodh Verma on 12/01/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    cout << std::fixed << std::setprecision(9);
//    int n,m;
//    cin>>n>>m;
//    vector<double> p(n);
//    vector<int> a(n);
//    for(int i=0; i<n; i++){
//        double temp;
//        cin>>temp;
//        p[i] = temp;
//    }
//    for(int i=0; i<n; i++){
//        int temp;
//        cin>>temp;
//        a[i] = temp;
//    }
//    //for(double x:p)cout<<x<<" ";
//    //for(int x:a)cout<<x<<" ";
//    double sumless = 0;
//    double summore = 0;
//    for(int i=0; i<n; i++){
//        if(a[i]<m){
//            sumless += p[i];
//            p[i]=0;
//        }
//        else summore += p[i];
//    }
//    for(int i=0; i<n; i++){
//        p[i] += (sumless/summore)*p[i];
//    }
//    for(double x:p)cout<<x<<" ";
//    return 0;
//}
