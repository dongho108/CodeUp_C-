//
//  main.cpp
//  CODEIT_C++
//
//  Created by dongho on 2020/03/12.
//  Copyright © 2020 dongho. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

//입력값 -1
int main() {
    vector <vector <int> > v;
    
    int input;
    for(int i=0; i<19; i++){
        v.push_back(vector<int>());
        for(int j=0; j<19; j++){
            cin >> input;
            v[i].push_back(input);
        }
    }
    int num, x, y;
    cin >> num;
    for(int i=0; i<num; i++){
        cin >> x >> y;
        for(int j=0; j<19; j++){
            if(v[x-1][j] == 0)
                v[x-1][j] = 1;
            else
                v[x-1][j] = 0;
            if(v[j][y-1] == 0)
                v[j][y-1] = 1;
            else
                v[j][y-1] = 0;
            
        }
    }
    
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            cout << v[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
