//
//  main.cpp
//  1099
//
//  Created by dongho on 2020/03/13.
//  Copyright © 2020 dongho. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <vector <int> >map;
    
    
    //데이터입력
    
    for(int i=0; i<11; i++){
        map.push_back(vector <int>());
        map[0].push_back(0);
    }
    int input;
    for(int i=1; i<11; i++){
        map[i].push_back(0);
        for(int j=1; j<11; j++){
            cin >> input;
            map[i].push_back(input);
        }
    }
    
    //길찾기
    int x=2, y=2;
    while(map[x][y] != 2){
        map[x][y] = 9;
        if(map[x][y+1] == 1){
            if(map[x+1][y] == 1)
                break;
            x++;
        }
        else
            y++;
    }
    if(map[x][y] == 2)
        map[x][y] = 9;
    //출력
    for(int i=1; i<11; i++){
        for(int j=1; j<11; j++)
            cout << map[i][j] << " ";
        cout << endl;
    }
    return 0;
}
