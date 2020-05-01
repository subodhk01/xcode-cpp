//
//  285-B.cpp
//  skv
//
//  Created by Subodh Verma on 25/01/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    //cout << std::fixed << std::setprecision(5);
//    int n,s,t;
//    cin>>n>>s>>t;
//    vector<int> a(n+1);
//    vector<int> p_counter(n+1);
//    for(int i=1; i<n+1; i++){
//        cin>>a[i];
//    }
//    int answer = 0;
//    int count = 0;
//    int x = s;
//    p_counter[x]=1;
//    while(1){
//        if(x==t){
//            answer = 1;
//            break;
//        }
//        int temp = a[x];
//        x = temp;
//        if(p_counter[x]==1){
//            break;
//        }
//        p_counter[x]=1;
//        count++;
//    }
//    if(answer==1){
//        cout<<count<<endl;
//    }
//    else{
//        cout<<-1<<endl;
//    }
//        
//    return 0;
//}
