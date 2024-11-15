// hotel occupancy

#include <iostream>
using namespace std;

int GetFloors();
int GetRoomsFloor(int floorNumber);
int GetOccupied(int floorNumber, int numRooms);
//int GetTotalRooms(int floorNumber, int unoccupied);
void DisplayResults(int rooms, int unoccupied);

const int minFloors = 15;
const int minRoomsPF = 10;

int main(){
int numberOfFloors = GetFloors();
  
  int totalRooms = 0;
  int totalOccupiedRooms = 0;
  for (int floorNumber = 1; floorNumber <= numberOfFloors; numberOfFloors++){
 if (floorNumber==13)
   continue;
    else{
    totalRooms += GetRoomsFloor(floorNumber);
    totalOccupiedRooms += GetOccupied(floorNumber, totalRooms);}
}
  

  
}



int GetFloors(){
int floors;
  cout << "Please enter the number of floors." << endl;
  cin >> floors;
  
while (floors < minFloors){
  cout << "Must be at least " << minFloors << " floors." << endl;
  cout << "Please enter again." << endl;
  cin >> floors;
}
  return floors;
}

int GetRoomsFloor(int floorNumber){
  int rooms;
    cout << "Please enter the number of rooms on floor #: "<< floorNumber << endl;
    cin >> rooms;

  while (rooms < minRoomsPF){
    cout << "Must be at least " << minRoomsPF << " rooms." << endl;
    cout << "Please enter again." << endl;
    cin >> rooms;
  }
    return rooms;

  
}

int GetOccupied(int floorNumber, int numberOfRooms, int numRooms){

  
    cout << "Please enter the number of occupied rooms on floor #: "<< floorNumber << endl;
    cin >> numRooms;

  while (numRooms > numberOfRooms){
    cout << "You can't have more than " << numberOfRooms << " rooms." << endl;
    cout << "Please enter the number of occupied rooms." << endl;
    cin >> numRooms;
  }
    return numRooms;


}

void DisplayResults(int totalRooms, int totalOccupiedRooms){
cout << totalRooms << endl;
cout << totalOccupiedRooms << endl;
cout << totalRooms/totalOccupiedRooms << endl;

  
}