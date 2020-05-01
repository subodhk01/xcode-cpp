//
//  454-B.cpp
//  skv
//
//  Created by Subodh Verma on 24/01/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    //cout << std::fixed << std::setprecision(5);
//    long int n;
//    cin>>n;
//    vector<int> a(n);
//    for(int i=0; i<n; i++){
//        cin>>a[i];
//    }
//    int phase = 1;
//    int answer = 0;
//    int count = 0;
//    for(int i=0; i<n-1; i++){
//        if(phase==1){
//            if(a[i]>a[i+1]){
//                phase = 2;
//            }
//            if(i==n-2){
//                if(a[n-2]>a[n-1] && a[n-1]>a[0] ){
//                    answer = -1;
//                    break;
//                }
//            }
//        }
//        if(phase==2){
//            if( a[i]>a[i+1] || a[i]>a[0] ){
//                answer = -1;
//                break;
//            }
//            if( i==n-2 ){
//                if( a[n-2]>a[n-1] || a[n-1]>a[0] ){
//                    answer = -1;
//                    break;
//                }
//            }
//            count++;
//        }
//    }
//    if( answer!=-1 ){
//        answer = count + 1;
//    }
//    cout<<answer<<endl;
//    
//    return 0;
//}
//
