//
//  492-B.cpp
//  skv
//
//  Created by Subodh Verma on 03/01/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    cout << std::fixed << std::setprecision(9);
//    long long int n,l;
//    cin>>n>>l;
//    set <long long int> points;
//    for(int i=0; i<n; i++){
//        long long int temp;
//        cin>>temp;
//        points.insert(temp);
//    }
//    //points.insert(0);
//    //points.insert(l);
//    long long int distance = 0;
//    for(auto it=points.begin(); it!=next(points.end(), -1); it++){
//        auto it2 = next(it,1);
//        distance = max(distance, *(it2) - *(it));
//        //cout<<*it2<<" "<<*it<<endl;
//    }
//    long double answer = (float)distance/2;
//    //rcout<<answer<<endl;
//    auto it = points.rbegin();
//    if(l-*it > answer) answer = l-*it;
//    //cout<<l-*it<<endl;
//    auto it2 = points.begin();
//    if(*it2 > answer) answer = *it2;
//    //cout<<*it2<<endl;
//    cout<<answer;
//    return 0;
//}
