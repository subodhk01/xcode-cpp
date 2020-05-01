//
//  265498-F.cpp
//  skv
//
//  Created by Subodh Verma on 12/01/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    //cout << std::fixed << std::setprecision(5);
//    string num;
//    cin>>num;
//    long int length = num.size();
//    unsigned long long int sum=0;
//    for(int i=0; i<length; i++){
//        sum += ((long long int)num[i]-48)*(i+1)*(length-i);
//    }
//    cout<<sum<<endl;
//
//    if(1){
//        unsigned long long int sum=0;
//        for(long int i=1; i<=length/2; i++){
//            unsigned long long int temp = ( (length*i) - (i*i) + (i) );
//            sum += ((long long int)num[i-1]-48) * temp ;
//        }
//        for(long int i=length; i>length/2; i--){
//            unsigned long long int temp = ( (length*(length-i+1)) - ((length-i+1)*(length-i+1)) + ((length-i+1)) );
//            sum += ((long long int)num[i-1]-48)* temp;
//        }
//        cout<<sum;
//        return 0;
//    }
//    else {
//        unsigned long long int sum=0;
//        for(long int i=1; i<=length/2; i++){
//            sum += ((long long int)num[i-1]-48) * ( (length*i) - (i*i) + (i) );
//        }
//        for(long int i=length; i>length/2 ; i--){
//            sum += ((long long int)num[i-1]-48) *( (length*(length-i+1)) - ((length-i+1)*(length-i+1)) + ((length-i+1)) ) ;
//        }
//        //sum += ((length/2)*( (length+4)/2 ) + 1)*( ((int)num[length/2 ]-48) );
//        cout<<sum;
//    }
//    long long int sum = 0;
//    for(long int i=0; i<length; i++){
//        for(long int k=i; k<length; k++){
//            for(long int j=i; j<=k; j++){
//                sum += ((int)num[j]-48);
//            }
//        }
//    }
//    
//    
//    return 0;
//}
