//
//  main.cpp
//  CodeUp
//
//  Created by dongho on 2020/03/13.
//  Copyright © 2020 dongho. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int num;
    cin >> num;
    vector<vector <int> > data;
    vector<vector <int> > map;
    
    //data 입력
    int input;
    for(int i=0; i<num; i++){
        data.push_back(vector<int>());
        for(int j=0; j<4; j++){
            cin >> input;
            data[i].push_back(input);
        }
    }
    
    //격자판 0으로 셋팅 좌표를 1부터 쓸꺼임
    for(int i=0; i<=x; i++){
        map.push_back(vector <int>());
        for(int j=0; j<=y; j++)
            map[i].push_back(0);
    }
    
    //막대세팅
    for(int i=0; i<num; i++){
        int xx = data[i][2];
        int yy = data[i][3];
        for(int j=0; j<data[i][0]; j++){
            map[xx][yy] = 1;
            if(data[i][1] == 0)
                yy++;
            else
                xx++;
        }
        
    }
    
    //맵출력
    for(int i=1; i<=x; i++){
        for(int j=1; j<=y; j++)
            cout << map[i][j] << " ";
        cout << endl;
    }
}
