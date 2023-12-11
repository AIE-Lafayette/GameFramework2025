#include "ActorArray.h"

void ActorArray::addActor(Actor* actor)
{
    //Create a new array with a size one greater than our old array
    
    //Copy the values from the old array to the new array
 

    //Set the last value in the new array to be the actor we want to add
    
    //Set old array to hold the values of the new array
   
    //Increase the actor count by one
}

bool ActorArray::removeActor(Actor* actor)
{
    //Exit the function if the actor was null

    //Create variable to store if the actor was removed

    //Create a new temporary array with a size one less than our old array
     
    //Create variable to access temporary array index
     
    //Copy values from the old array to the new array except the actor to delete
        //If the actor to delete was skipped, set the actor removed variable to true.
    

    //Set the old array to the new array and decrease the actor count if the actor was removed

    //Delete the temporary array
    
    //Return whether or not the removal was successful
}

bool ActorArray::removeActor(int index)
{
    //Exit the function if the actor was null

    //Create variable to store if the actor was removed

    //Create a new temporary array with a size one less than our old array

    //Create variable to access temporary array index

    //Copy values from the old array to the new array except the index to delete
        //If the index to delete was skipped, set the actor removed variable to true.


    //Set the old array to the new array and decrease the actor count if the actor was removed

    //Delete the temporary array

    //Return whether or not the removal was successful
}

Actor* ActorArray::getActor(int index)
{
    //Return null if the index is out of bounds

    //Return the actor at the given index
}

bool ActorArray::contains(Actor* actor)
{
    //Iterate through actor array
        //return the current actor if it matches the argument

    //Otherwise, return false.
}
