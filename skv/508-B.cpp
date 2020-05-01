//
//  508-B.cpp
//  skv
//
//  Created by Subodh Verma on 06/01/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//

//#include <bits/stdc++.h>
//using namespace std;
//
//
//
//
//int main() {
//    //cout << std::fixed << std::setprecision(5);
//    vector<int> integer;
//    string s;
//    cin>>s;
//    for(int i=0; i<s.size(); i++){
//        integer.push_back((int)s[i]-48);
//    }
//    int ecount = 0;
//    for(int x:integer){
//        if(x%2==0) ecount++;
//    }
//    if( ecount == integer.size() ){
//        cout<<-1;
//        return 0;
//    }
//    auto it=integer.end()-1;
//    
//    if(*it % 2 == 0) {
//        auto max = max_element(integer.begin(), integer.end()-1);
//        int temp = integer[0];
//        integer[0] = *max;
//        integer[max-integer.begin()] = temp;
//    }
//    for(int x:integer) cout<<x<<" ";
//    return 0;
//}


