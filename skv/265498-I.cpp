//
//  265498-I.cpp
//  skv
//
//  Created by Subodh Verma on 12/01/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//

//#include <bits/stdc++.h>
//using namespace std;
//
//char arrmin(string abba, long int start, long int end){
//    char lex = abba[start];
//    for(long int i=start; i<end; i++){
//        if(abba[i]<lex){
//            lex = abba[i];
//        }
//    }
//    return lex;
//}
//
//int main() {
//    //cout << std::fixed << std::setprecision(5);
//    string abba;
//    cin>>abba;
//    long int index = 1;
//    char mini = abba[0];
//    for(long int i=0; i<abba.size(); i++){
//        if(abba[i]<mini){
//            mini = abba[i];
//            index = i+1;
//        }
//    }
//    if(index==abba.size()){
//        mini = abba[0];
//        index = 1;
//        for(long int i=0; i<abba.size()-1; i++){
//            if(abba[i]<mini){
//                mini = abba[i];
//                index = i+1;
//            }
//        }
//    }
//    string result = "";
//    result+=mini;
//    mini = arrmin(abba, index, abba.size());
//    result += mini;
//    cout<<result;
//    
//    return 0;
//}
