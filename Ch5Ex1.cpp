// get the sum of all entered numbers

#include <iostream>
using namespace std;

int GetUserNumber();
int GenerateSum(int number);
void DisplaySum();



int main(){

  GetUserNumber();
  GenerateSum(GetUserNumber());
  DisplaySum();
  
}

int GetUserNumber(){
int number;
  cout << "Please enter the top number for the sum." << endl;
cin >> number;
  return number;

  while (number < 0){
    cout << "Please enter a positive number." << endl;
     cout << "Please enter the top number for the sum." << endl;
    cin >> number;
    
  }
}

int GenerateSum(int topNumber){
int sum = 0;
  for (int num = 1; num <= topNumber; num++){
 sum += num;
  return sum;}
}


void DisplaySum(int topNumber,int sum){
cout << "The sum from 1 to " << topNumber << " is " << sum << endl;  
}


