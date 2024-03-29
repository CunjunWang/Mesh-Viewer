Notes on using the template.

1- Example executable is provided. It needs to be executed from the
command-line (shell on Linux, powershell or cmd on Windows).

  - Open the command line.
  - Change directory into the template folder.
  - Run the executable:
      Linux  : ./example_exe/a7_sample      meshes/cyl2.obj
      Windows: .\example_exe\a7_sample.exe  meshes\cyl2.obj

      Note: you can replace ``meshes\cyl2.obj'' with the address of any
      other mesh file. Including the ones provided in the ``meshes''
      folder.

2- How the GUI works: you can see the functionality provided by
the gui in meshview.cpp under the function keyboard().

  - w: Toggle viewing mesh wireframe
  - l: Toggle lighting
  - v: Toggle drawing vertices
  - e: Toggle viewing edges
  - f: Toggle drawing faces
  - <: Reduce subdivision level
  - >: Increase subdivision level
  - q: exit
  - ESC: exit

3- Building and running the code:

   - If you are on MAC os Linux, read the Makefile instructions
     carefully before using it.  After choosing the right options in
     the makefile, you should be able to build the code by typing:
     $ make

   - If you are on Windows open a7.vcxproj with Visual Studio 2017.

   - To run the code on Linux use:
     $ ./meshview      meshes/cyl2.obj

   - On Windows, you can run the executable using cmd or
     powershell. First, build the code in Visual studio. Then, change
     directory into the template directory in cmd or
     powershell. Finally, run via
     $ .\a7.exe       meshes\cyl2.obj

   - If you want to directly run from Visual studio (or use the
     Debugger), you need to pass the mesh address via the Visual
     studio GUI.
       *  Right click on a7 in the solution explorer tab.
       *  From the left side expand Configuration Properties
       *  From the left side select Debugging
       *  Add the text ``meshes/cyl2.obj'' (or the address of any other
          mesh you want to open) to the field Command Arguments.
       *  Now when you execute via Visual studio the mesh file will be
          read by the program.
       *  Note that you must do this separately for debugging and release
          modes.  

4- Objective:

   - Implement the function TriMesh* Subdivision::subdivide(int
     level).  This function must subdivide the control mesh to the
     given subdivision level and then return a pointer to the
     subdivided mesh.
     
   - HINT: Create a new subdivision mesh for each subdivision level
     and store it in memory for later.  If the calling code asks for a
     level that has already been computed, just return the
     pre-computed mesh!
