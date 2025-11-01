#include "space_station.h"

int up(int current_room,char rooms[2][rows][cols],int player_location[2]){
    /*player_location[1] = player_location[1] - 1;
    if(current_room == 1){
        rooms[0][player_location[1]+1][player_location[0]] = ' ';
        rooms[0][player_location[1]][player_location[0]] = 'a';
    }
    return 0;*/
    if (player_location[1] > 0) {  // 确保不会越界
        // 清除当前位置
        rooms[current_room][player_location[1]][player_location[0]] = ' ';
        // 更新玩家位置
        player_location[1] -= 1;
        // 设置新的玩家位置
        rooms[current_room][player_location[1]][player_location[0]] = 'a';
    }
    return 0;
}
int down(int current_room,char rooms[2][rows][cols],int player_location[2]){
    return 0;
}
int left(int current_room,char rooms[2][rows][cols],int player_location[2]){
    return 0;
}
int right(int current_room,char rooms[2][rows][cols],int player_location[2]){
    return 0;
}