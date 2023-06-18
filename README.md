# convergenceCalculator
A program that calculates the convergence of a function using multi-threading. It prompts the user to input the maximum value (n) for a series and then evaluates the function using pthreads. The convergenceEvaluation function is adapted to calculate the values of the function based on the input number. Finally, the program prints the result of the function's summation and terminates.

<p align="center">
  <br>
  <img src="https://zoewyatt.files.wordpress.com/2019/02/f2-disc-2.gif" alt="pic" width="500">
  <br>
</p>
<p align="center" >
  <a href="#Files">Files</a> •
  <a href="#Features">Features</a> •
  <a href="#how-to-use">How To Use</a> 
</p>

## Files

- src: the file that implements de solution.
- flowchart: flowchart: the model construction.

## Features
The main features of the application include:
- Multi-threading: The code utilizes pthreads to create and manage multiple threads concurrently, allowing for parallel execution of the convergenceEvaluation function.
- User Input: The code prompts the user to input the maximum value (n) for the series, allowing customization and flexibility in evaluating the function.
- Function Evaluation: The code evaluates the convergence of a function using the convergenceEvaluation method, which calculates and returns the values based on the input number.
- Result Display: The code prints the result of the function's summation, providing the final outcome of the convergence calculation.
- Error Handling: The code includes error handling mechanisms, such as checking for thread creation errors (variable 'a') and handling memory allocation for the result pointer.
- Code Organization: The code follows a modular structure with clear comments and sections, making it easy to understand and maintain.


## How To Use
To clone and run this application, you'll need [Git](https://git-scm.com) and a [C++ compiler](https://www.fdi.ucm.es/profesor/luis/fp/devtools/mingw.html) installed on your computer. From your command line:

```bash
# Clone this repository
$ git clone https://github.com/bl33h/convergenceCalculator

# Open the folder
$ cd src

# Run the app
$ g++ convergenceCalculator.cpp -o convergenceCalculator
$ ./convergenceCalculator
```

Alternatively, you can run the code using Google Colab:
1. [Open Google Colab](https://colab.research.google.com) in your web browser.
2. Click on "File" in the top menu, then select "Open notebook".
3. In the "GitHub" tab, enter the repository URL: https://github.com/bl33h/convergenceCalculator
4. Choose the desired notebook file and click "Open".
5. Follow the instructions within the Colab notebook to execute the code.

Note: Running the code in Google Colab requires an internet connection and a Google account. It provides a convenient online environment for executing code without the need for local setup or dependencies.
