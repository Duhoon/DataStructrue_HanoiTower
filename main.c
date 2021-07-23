//
//  main.c
//  HanoiTower
//
//  Created by duh8n on 2021/07/14.
//

#include <stdio.h>

void HanoiTower(int num, char from, char by, char to){
    
    if(num == 1){
        printf("원반 1을 %c에서 %c로 옮깁니다. \n", from, to);
    }else{
        HanoiTower(num-1, from, to, by);
        printf("원반 %d를 %c에서 %c로 옮깁니다. \n", num, from, to);
        HanoiTower(num-1, by, from, to);
    }
    
}

int main(int argc, const char * argv[]) {
    
    HanoiTower(3, 'a', 'b', 'c');
    
    return 0;
}
