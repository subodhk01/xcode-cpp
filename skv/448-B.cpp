//
//  448-B.cpp
//  skv
//
//  Created by Subodh Verma on 25/01/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    //cout << std::fixed << std::setprecision(5);
//    string s,t;
//    cin>>s;
//    cin>>t;
//    int answer = -1;
//    int t_len = t.size();
//    int s_len = s.size();
//    if( t_len > s_len ){
//        cout<<"need tree"<<endl;
//        return 0;
//    }
//    vector<int> found(s_len);
//    for(int i=0; i<t_len; i++){
//        for(int j=0; j<s_len; j++){
//            //cout<<t[i]<<" "<<s[j]<<endl;
//            if( t[i]==s[j] && found[j]==0 ){
//                found[j]=1;
//                break;
//            }
//            if(j==s_len-1){
//                cout<<"need tree"<<endl;
//                return 0;
//            }
//        }
//    }
//    int counter = 0;
//    int temp = 0;
//    vector<int> a(t_len);
//    for(int i=0; i<t_len; i++){
//        for(int j=counter; j<s_len; j++){
//            //cout<<t[i]<<" "<<s[j]<<endl;
//            if( t[i]==s[j] ){
//                a[i]++;
//                temp++;
//                counter = j+1;
//                break;
//            }
//        }
//    }
//    
//    int all_found=1;
//    for(int i=0; i<a.size(); i++){
//        if(a[i]==0){
//            all_found=0;
//        }
//    }
//    if( all_found==1 ){
//        cout<<"automaton"<<endl;
//        return 0;
//    }
//    if( s_len==t_len ){
//        cout<<"array"<<endl;
//        return 0;
//    }
//    cout<<"both"<<endl;
//    return 0;
//    
//}
