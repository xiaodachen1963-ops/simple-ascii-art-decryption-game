#ifndef SPACE_STATION_H
#define SPACE_STATION_H

#define rows 15
#define cols 8

int print_map(char map[15][8]);

int up(int current_room,char rooms[2][rows][cols],int player_location[2]);
int right(int current_room,char rooms[2][rows][cols],int player_location[2]);
int down(int current_room,char rooms[2][rows][cols],int player_location[2]);
int left(int current_room,char rooms[2][rows][cols],int player_location[2]);

#endif
