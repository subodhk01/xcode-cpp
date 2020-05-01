//
//  450-B.cpp
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
//    long long int x,y,n, temp, answer=1;
//    cin>>x>>y;
//    cin>>n;
//    temp = (n)%6;
//    if(temp==1){
//        answer = (x) % 1000000007;
//    }
//    else if( temp==2 ){
//        answer = (y) % 1000000007;
//    }
//    else if( temp==3 ){
//        answer = (y-x) % 1000000007;
//    }
//    else if( temp==4 ){
//        answer = (-x) % 1000000007;
//    }
//    else if( temp==5 ){
//        answer = (-y) % 1000000007;
//    }
//    else if( temp==0 ){
//        answer = (x-y) % 1000000007;
//    }
//    //if( n==1 ) answer = x % 1000000007;
//    //if( n==2 ) answer = y % 1000000007;
//    if( answer<0 ){
//        answer = 1000000007 - ( -answer % 1000000007 );
//    }
//    cout<<answer<<endl;
//    return 0;
//}
