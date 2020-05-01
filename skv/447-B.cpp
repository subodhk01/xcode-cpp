//
//  447-B.cpp
//  skv
//
//  Created by Subodh Verma on 22/01/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    //cout << std::fixed << std::setprecision(5);
//    string s;
//    cin>>s;
//    int k;
//    cin>>k;
//    vector<int> v(26);
//    for(int i=0; i<26; i++){
//        cin>>v[i];
//    }
//    long int answer = 0;
//    for(int i=1; i<=s.size(); i++){
//        answer += i*(v[s[i-1]-97]);
//    }
//    int length = s.size() +1;
//    while (k--) {
//        int max=v[0], index=0;
//        for(int i=0; i<26; i++){
//            if( v[i]>max ){
//                max = v[i];
//                index = i;
//            }
//        }
//        answer += max*(length);
//        length++;
//    }
//    cout<<answer<<endl;
//    return 0;
//}
