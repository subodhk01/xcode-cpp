//
//  monk and his friends.cpp
//  skv
//
//  Created by Subodh Verma on 02/01/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//
//#include <bits/stdc++>
//using namespace std;
//
//int main() {
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        set<int> candies;
//        vector<int> queries;
//        for(int i=0; i<n+m; i++ ){
//            int temp;
//            if(i<n){
//                cin>>temp;
//                candies.insert(temp);
//            }else{
//                cin>>temp;
//                queries.push_back(temp);
//            }
//        }
//        for(int i=0; i<queries.size(); i++){
//            if (binary_search(candies.begin(), candies.end(), queries[i])) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//    }
//    return 0;
//}
