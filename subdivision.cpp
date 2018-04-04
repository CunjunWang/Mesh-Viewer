#include "subdivision.h"
#include <cstdlib>

//
// Public functions
//

Subdivision::Subdivision()
{
    // Default Constructor

    // YOUR CODE HERE
}


Subdivision::~Subdivision()
{
    // Destructor
    
    // YOUR CODE HERE
}


void Subdivision::initialize(TriMesh* controlMesh)
{
    // Initializes this subdivision object with a mesh to use as 
    // the control mesh (ie: subdivision level 0).

    // YOUR CODE HERE
}


TriMesh* Subdivision::subdivide(int level)
{
    // Subdivides the control mesh to the given subdivision level.
    // Returns a pointer to the subdivided mesh.

    // HINT: Create a new subdivision mesh for each subdivision level and 
    // store it in memory for later.
    // If the calling code asks for a level that has already been computed,
    // just return the pre-computed mesh!

    return NULL; // REPLACE THIS!

    // YOUR CODE HERE
}



//
// Private Functions
//


// YOUR CODE HERE

