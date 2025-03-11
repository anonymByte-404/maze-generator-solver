<h1>Maze Generator and Solver</h1>

<p>This project is a simple maze generator and solver implemented in C. The program generates a random maze and then attempts to find a path from the top-left corner to the bottom-right corner using a backtracking algorithm.</p>

<h2>Features</h2>
<ul>
  <li>Generates a random maze of specified dimensions.</li>
  <li>Displays the generated maze in the console.</li>
  <li>Solves the maze using a backtracking algorithm and displays the solution path.</li>
</ul>

<h2>Compilation and Running</h2>
<p>To compile the program, use the following command in your terminal:</p>
<pre><code>gcc main.c maze.c -o maze_generator</code></pre>
<p>To run the program, execute:</p>
<pre><code>./maze_generator</code></pre>

<h2>How It Works</h2>
<ol>
  <li><strong>Maze Generation</strong>: The program generates a random maze using a simple algorithm, represented as a 2D array of integers where <code>0</code> represents a path and <code>1</code> represents a wall.</li>
  <li><strong>Maze Solving</strong>: The solver uses a backtracking algorithm to find a path from the start point to the end point, marking the path along the way.</li>
  <li><strong>Output</strong>: The program prints both the generated maze and the solved maze to the console.</li>
</ol>

<h2>Future Improvements</h2>
<ul>
  <li>Implement different maze generation algorithms (e.g., Prim's, Kruskal's).</li>
  <li>Add user input for maze dimensions.</li>
  <li>Visualize the maze using graphics libraries.</li>
  <li>Optimize the maze-solving algorithm for efficiency.</li>
</ul>

<h2>License</h2>
<p>This project is licensed under the MIT License. See the <a href="LICENSE">LICENSE</a> file for more information.</p>
