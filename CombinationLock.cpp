//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
    
    int n, f[3], m[3], result[3], pro=1;
    int i;
    
    cin >> n;
    for(i=0;i<3;i++){
        cin >> f[i];
    }
    for(i=0;i<3;i++){
        cin >> m[i];
    }
    
    for(i=0;i<3;i++){
        if(f[i]>m[i]){
            result[i]=f[i]-m[i];
        }
        else{
            result[i]=m[i]-f[i];
        }
        if(result[i]>n/2){
            result[i]=n-result[i];
        }
        if(result[i]<=5){
            pro*=5-result[i];
        }
    }
    if(pro==1 && result[0]*result[1]*result[2]>=125){
        pro=0;
    }
    
    if(n>=5){
        cout << 2*5*5*5-pro << endl;
    }
    else{
        cout << n*n*n << endl;
    }
    
    return 0;
}
