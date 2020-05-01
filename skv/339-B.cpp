//
//  339-B.cpp
//  skv
//
//  Created by Subodh Verma on 01/01/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//
//#include <bits/stdc++>
//using namespace std;
//
//int main() {
//    int n,m;
//    cin>>n>>m;
//    vector<int> task(m);
//    for(int i=0; i<m; i++){
//        cin>>task[i];
//    }
//    long long int steps = 0;
//    int current = 1;
//    for(int i=0; i<task.size(); i++){
//        if(task[i] >= current){
//            steps += task[i]-current;
//            current = task[i];
//        }
//        else{
//            steps += (n-current)+task[i];
//            current = task[i];
//        }
//    }
//    cout<<steps;
//
//    return 0;
//}
