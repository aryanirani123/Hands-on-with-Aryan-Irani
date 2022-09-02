/*
Declare an Array 
    type arrayName [ arraySize ];


*/
#include <iostream>
using namespace std;

int main(){
    
    // Declaring an Array
    string cars[4] = {"Volvo","Ford","BMW","Maruti"};
    
    // Access a particular element of the array
    //cout << cars[0];
    
    //Change an element from the array
    //cars[0] = "Toyota";
    //cout << cars[0];
    
    
    for (int i=0;i<4;i++) {
        
        //cout << cars[i] << "\n";
        
        //Print the index and the element
        //cout << i << ":" << cars[i] << "\n";
        
    }
    
    //Get the size of the array 
    //int numbers[5] = {10,20,30,40,50};
    //cout<< sizeof(numbers);
    
   
   // Type of Arrays 
   /*
   (1) One dimensional Array 
   (2) Two dimensional Array 
   */
   
   // declare a two dimensional array 
   
   //string letter [2][4];
   
   //add elements to the array 
   string letter [2][4] = {
       
       {"A","B","C","D"},
       {"E","F","G","H"}

   };
   
   // access elements of the array 
   
   //cout<< letter[0][2];
   
   // Change an element in a multidimensional Array 
   
   //letter [0][0] = "Z";
   //cout << letter[0][0];
   
   //Print all the elements from the array 
   for(int i = 0; i < 2; i++) {
       for(int j = 0; j < 4; j++) {
            cout << letter[i][j] << "\n";
           
       }
       
   }
    
    

    
    
}
