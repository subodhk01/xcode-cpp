//
//  C.cpp
//  skv
//
//  Created by Subodh Verma on 21/04/20.
//  Copyright © 2020 IIT BHU. All rights reserved.
//

//#include <bits/stdc++.h>
//using namespace std;
//
//int nod(long long int x){
//    int temp = 0;
//    x = abs(x);
//    while(x>0){
//        x = x/10;
//        temp++;
//    }
//    return temp;
//}
//
//int main() {
//    //cout << std::fixed << std::setprecision(5);
//    long long int n;
//    cin>>n;
//    if(n>0) cout<<n;
//    else{
//        int last_digit = abs(n%10);
//        int secondlast_digit = abs((n/10)%10);
//        if(last_digit>=secondlast_digit)cout<<n/10;
//        else{
//            long long int x = 0;
//            int digits = nod(n);
//            for (int i=1; i<digits; i++){
//                x += (pow(10,i-1))*(n%10);
//                if(i==1) n = n/100;
//                else n = n/10;
//            }
//            cout<<x;
//        }
//    }
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    //cout << std::fixed << std::setprecision(5);
//    long long int n;
//    cin>>n;
//    if(n>0) cout<<n;
//    else{
//        long long int a = n/10;
//        long long int b = n / 100 * 10 + n%10;
//        cout<<max(a,b);
//    }
//    return 0;
//}
