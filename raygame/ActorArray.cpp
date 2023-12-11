#include "ActorArray.h"

void ActorArray::addActor(Actor* actor)
{
    //Create a new array with a size one greater than our old array
    Actor** temp = new Actor * [m_actorCount + 1];

    //Copy the values from the old array to the new array
    for (int i = 0; i < m_actorCount; i++)
    {
        temp[i] = m_actors[i];
    }

    //Set the last value in the new array to be the actor we want to add
    temp[m_actorCount] = actor;

    //Set old array to hold the values of the new array
    m_actors = temp;

    //Increase the actor count by one
    m_actorCount++;
}

bool ActorArray::removeActor(Actor* actor)
{
    //Exit the function if the actor was null
    if (!actor)
        return false;

    //Create variable to store if the actor was removed
    bool actorRemoved = false;

    //Create a new temporary array with a size one less than our old array
    Actor** temp = new Actor * [m_actorCount - 1];

    //Create variable to access temporary array index
    int j = 0;

    //Copy values from the old array to the new array except the actor to delete
    for (int i = 0; i < m_actorCount; i++)
    {
        //If the actor to delete was skipped, set the actor removed variable to true.
        if (m_actors[i] == actor)
        {
            actorRemoved = true;
            continue;
        }

        temp[j] = m_actors[i];
        j++;
    }
    

    //Set the old array to the new array and decrease the actor count if the actor was removed
    if (actorRemoved)
    {
        delete[] m_actors;
        m_actors = temp;
        m_actorCount--;
    }
    
    //Return whether or not the removal was successful
    return actorRemoved;
}

bool ActorArray::removeActor(int index)
{
    //Exit the function if the index is out of bounds
    if (index < 0 || index >= m_actorCount)
        return false;

    //Create variable to store if the actor was removed
    bool actorRemoved = false;

    //Create a new temporary array with a size one less than our old array
    Actor** temp = new Actor * [m_actorCount - 1];

    //Create variable to access temporary array index
    int j = 0;

    //Copy values from the old array to the new array except the actor to delete
    for (int i = 0; i < m_actorCount; i++)
    {
        //If the actor to delete was skipped, set the actor removed variable to true.
        if (i == index)
        {
            actorRemoved = true;
            continue;
        }

        temp[j] = m_actors[i];
        j++;
    }


    //Set the old array to the new array and decrease the actor count if the actor was removed
    if (actorRemoved)
    {
        delete[] m_actors;
        m_actors = temp;
        m_actorCount--;
    }

    //Return whether or not the removal was successful
    return actorRemoved;
}

Actor* ActorArray::getActor(int index)
{
    //Return null if the index is out of bounds
    if (index < 0 || index >= m_actorCount)
        return nullptr;

    //Return the actor at the given index
    return m_actors[index];
}

bool ActorArray::contains(Actor* actor)
{
    //Iterate through actor array
    for (int i = 0; i < m_actorCount; i++)
    {
        //return the current actor if it matches the argument
        if (m_actors[i] == actor)
            return true;
    }

    //Otherwise, return false.
    return false;
}
