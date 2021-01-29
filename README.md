
# The Rocket-Challenge (SOLVED)

In this repository the Rocket Challenge has been solved following the instructions from below:

The exercise consist drawing a rocket in the command line. The executable is called *rocket* and acepts as parameter the amount of lines to draw the rocket, without counting the spike (|) and feet (three 'x' at the bottom).

Here is some examples:

````
%> rocket -l 5 

    |
    X
   XXX
  XXXXX
 XXXXXXX
XXXXXXXXX
X   X   X

%> rocket -l 20

                   |
                   X
                  XXX
                 XXXXX
                XXXXXXX
               XXXXXXXXX
              XXXXXXXXXXX
             XXXXXXXXXXXXX
            XXXXXXXXXXXXXXX
           XXXXXXXXXXXXXXXXX
          XXXXXXXXXXXXXXXXXXX
         XXXXXXXXXXXXXXXXXXXXX
        XXXXXXXXXXXXXXXXXXXXXXX
       XXXXXXXXXXXXXXXXXXXXXXXXX
      XXXXXXXXXXXXXXXXXXXXXXXXXXX
     XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
 XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
X                  X                  X

`````

Additionally, the program accepts an inversion flag. If set, the rocket is drawn upside down:
````
%> rocket -l 5 -i

X   X   X
XXXXXXXXX
 XXXXXXX
  XXXXX
   XXX
    X
    |

````
## Rules

1.   Use *cmake* a build tool. The executable has to build  by just calling:

````
cmake <path to CMakeLists.txt> && make 
````

you can use the template of this repository as starting point.

2. Use Git as scm tool.

3. You can use C++ standard up to c++17.

4. You can use all third party libraries you need, as long as the executable builds as described in Point 1.

5. Please document all assumptions you made.

