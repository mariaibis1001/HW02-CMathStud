# HW02-CMathStud
This assignment focuses on constructors, destructors, class composition, and initializer lists.  
There are two classes that will work with each other.

The first is a class called CQuadratic, which represents a second-order quadratic equation (e.g., 3x2 + 2x + 9). 
CQuadratic will only have one constructor (type constructor), which will take the coefficients of the quadratic 
equation (e.g., 3, 2, 9) and assign them to it’s three private data members (the three coefficient variables). 
The class also has an Evaluate function that passes a value, say x, and returns the evaluated expression f(x)
(e.g., for f(x) = 3x2 + 2x + 9).  Lastly, it has a destructor that will display to stdout “CQuadratic destructor!!!”

The second class is called CMathStud which represents a math student.  
Every CMathStud has his/her own particular quadratic equation.  The constructor for CMathStud will only require the 
first two coefficients (x2 and x) as arguments; the third is optional to provide (default to 0). CMathStud has a
getMyValue method, which accepts a value for x and should return f(x) for the math student’s quadratic equation.
