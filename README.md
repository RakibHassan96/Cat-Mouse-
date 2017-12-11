# Cat Mouse 

Two cats named A and B are standing at integral points on a line. Cat A is standing at point x and cat B is standing at point y. Both cats run at the same speed, and they want to catch a mouse named C that is hiding at integral point z on the line.

You are given a number of test cases in the form of x, y, and z. For each test case, print the appropriate answer on a new line:
- If cat A catches the mouse first, print “Cat A”.
- If cat B catches the mouse first, print “Cat B”.
- If both cats reach the mouse at the same time, the two cats fight and the mouse escapes. In this case print “Mouse C”.


Input Format:
- The first line contains a single integer T denoting the number of test cases.
- Each of the subsequent T lines contains three space-separated integers describing the respective values of x (cat A's location), y (cat B's location), and z (mouse C's location) on the line.

Constraints:
1 < x, y, z < 100

Output Format:
On a new line for each test case, print “Cat A” if cat A catches the mouse first, “Cat B” if cat B catches the mouse first, or “Mouse C” if the mouse escapes.