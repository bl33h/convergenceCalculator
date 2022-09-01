/*---------------------------------------------------------------------------
Copyright (C), 2022-2023, Sara Echeverria (bl33h)
@author Sara Echeverria
FileName: ConvergenceCalculator
@version: I
Creation: 25/08/2022
Last modification: 31/08/2022
------------------------------------------------------------------------------*/
// Imports
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <iostream>
#include <math.h>
#include <errno.h>

// Namespace
using namespace std;

// Parameters to follow
// --- Variables ---
int n; // *Max value
double function; // *Summatory

// Method to evaluate the function
// --- Adapted function basing it on another one from StackOverflow ---
void *convergenceEvaluation(void *thread_number)
{
    long number = (long)thread_number; // *Long is used in order to have more space
    double* result = new double;
    *result = 3/(pow(2,number)); // *Power
    return result;
}

// Main method
int main()
{
    // --- Inputs ---
    cout << "---------------------------------------------------------"<<endl;
    cout << "Type the maximum value of your series (n): ";
    cin >> n;
    cout << endl;
    cout << "The maximum value (n) is... " << n << endl;

    // --- Variables ---
    int a;
    long i;

    // --- Pthreads properties and creation ---
    pthread_t tid;
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    // --- Void method ---
    void *ptr_function;

    // --- For cycle ---
    for(int i = 0; i<=n ;i++)
    {
        a = pthread_create(&tid, &attr, convergenceEvaluation, (void *)i);
        a = pthread_join(tid, &ptr_function);
        function += (*(double*) ptr_function);
    }

    // --- Result print ---
    cout << "---------------------------------------------------------"<<endl;
    cout << endl;
    cout << "The result of the function (summatory) is: " << function << endl;
    cout << endl;
    pthread_exit(NULL);
    return 0;
}   