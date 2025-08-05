# Pig Dice 3.0

## Background
After creating a solution for Pig Dice 2.0, we now have an object oriented solution to the Pig Dice game. The next version of this game will 
enhance the Pig Dice 2.0 game so that it supports a two player game where the players compete against one another to see who can reach 50 points 
in the fewest turns. To accomplish this, you will create a <b>NewGame</b> class that will be derived from the <b>Game</b> class created in the 
Pig Dice 2.0 solution. Derived classes like the <b>NewGame</b> class significantly improve reusability of a program through the principle of 
inheritance. 

You will also learn how to create documentation of the projects architecture to show how the objects in the program are related. This is 
especially useful when you are modifying existing code or adding new objects to provide more features to the existing code base.

"Unified Modeling Language" (UML) is a standard visual notation used to design and document object-oriented programming (OOP) systems, 
allowing developers to graphically represent the structure, behavior, and relationships between different classes and objects within a 
software system.

Class diagrams are a central component of UML, showing the attributes, methods, and relationships between classes within a system. UML clearly
illustrates relationships between classes, including inheritance, association, aggregation, and composition.


Rules of Pig Dice:
<ol>
<li>See how many turns it takes to reach a minimum of 20 points</li>
<li>A turn is over when you roll a 1 or you choose to hold</li>
<li>If you roll a 1, then all points for that turn are lost</li>
<li>If you hold, then points for the turn are added to total score for the game and the turn count increases by 1</li>
</ol>

## Directions
Complete the PigDice1.cpp template provided which should use the procedural programming approach presented in CSC 175 to implement the Pig Dice game described above. 

### Your solution code should include the following:
<ul>
<li>Break the solution down into functions such as:</li>
<ul><li>playGame function</li>
<li>takeTurn function</li>
<li>roll function</li>
<li>hold function</li></ul>
<li>Pass parameters by reference between functions (no global variables)</li>
<li>Make use of loop constructs like the while loop</li>
<li>Make use of the GameState structure provided in the template</li>
</ul>

<b>Note: Your solution must recreate the <i>exact</i> user interface shown below.</b>




## Interface Prototype Example

### Test Case Output
<pre><b>Let's Play PIG Dice!

* See how many turns it takes you to get to 20.
* Turn ends when you hold or roll a 1.
* If you roll a 1, you lose all points for the turn.
* If you hold, you save all points for the turn.

TURN 1
roll or hold? (r/h): r
Die: 4
roll or hold? (r/h): r
Die: 2
roll or hold? (r/h): h
Score for turn:6
Total score:6


TURN 2
roll or hold? (r/h): k
Invalid choice! Try again.
roll or hold? (r/h): r
Die: 2
roll or hold? (r/h): r
Die: 3
roll or hold? (r/h): r
Die: 3
roll or hold? (r/h): h
Score for turn:8
Total score:14


TURN 3
roll or hold? (r/h): r
Die: 4
roll or hold? (r/h): r
Die: 1
Turn over. No score.
Score for turn:0
Total score:14


TURN 4
roll or hold? (r/h): r
Die: 2
roll or hold? (r/h): r
Die: 5
roll or hold? (r/h): h
Score for turn:7
Total score:21

You finished with a final score of 20 or more in 4 turns!</b></pre>




