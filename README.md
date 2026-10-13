# cis165-lab2
sum.cpp and mpg.cpp: the actual readable C++ source files, with the original assigned values restored.

          **sum.cpp**
          **Code explanation sum.cpp**
          I set 2 integer variables value1 and value2. The program save them in memory.
          I set a variable total that save a space for the integer in memory.
          The program does the sum of the constants and asign the value to total.
          The program display the string "Total value" and the value of the variable total.
          
          **Test**
          Program	Values used	Expected result before running	Actual output	Match or fix
          sum.cpp — assigned values	50 and 100 / calculation 150 /	run 150 /	check OK
          sum.cpp — changed values	-50 and 100 / calculation 50 /	run 50 /	check OK

                  **mpg.cpp**
                  **code explanation gpm.cpp**
                  First I set 2 integers to storage the tank capacity and the miles the car can make with the fuel.
                  The program calculat how many miles per gallon we can do by dividing the fuel capacity/miles run.
                  After my first run, I realized that the variables were integers so the result gave me an integer.
                  I change the variables to floating so the result is accurate.
                  
                  **Test**
                  Program	Values used	Expected result before running	Actual output	Match or fix
                  mpg.cpp — assigned values	16 and 312 / calculation 19.5 /	run 19 /	check NO GOOD
                  Change variables from int to float
                  mpg.cpp — changed values	16 and 132 / calculation 19.5 /	run 19.5 /	check OK
