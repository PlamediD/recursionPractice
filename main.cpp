#include <iostream>

#include <bits/stdc++.h>
using namespace std;


//Print reverse array
void printReverseArr1(int * arr, int size);
void printReverseArr(int arr[], int size);
void printArr(int arr[], int size);
int factorial(int n);
int fun1(int n);
void fun2(int n);
bool isPalindromeCheck(char str[],int s, int e);
bool isPalindrome(char str[]);
void printArray(int arr[], int size);
void reverseArray(int arr[], int start, int end);
void reverse(string s, int k=0);
int printDigit(int n);


int main() {
    std::cout << "Hello, World!" << std::endl;
    int arr[] ={1,2,3,4,5};
    int arr2[]={1};
    //printArr(arr2, 1);
    printReverseArr1(arr,5);
    cout<<"test 2"<<endl;
    printReverseArr(arr,5);

    cout<<"Test 3"<<endl;
    printArr(arr, 5);

    cout<<"Print digit"<<endl;
    cout<<printDigit(38)<<endl;
    cout<<"test 4"<<endl;
    cout<<"fact of 4: "<<factorial(4)<<endl;
    cout<<endl;
    cout<<"fact of 6: "<<factorial(6)<<endl;
    cout<<endl;
    cout<<"Factorial of 1: "<<factorial(1)<<endl;

    cout<<"Test 5"<<endl;
    cout<<fun1(4)<<endl;
    cout<<fun1(5)<<endl;
    cout<<"fun 2:  "<<endl;
    fun2(6);
    cout<<endl;
    cout<<"Palindrome check"<<endl;
    char str[]="plamedi";
    if(isPalindrome(str))
        cout<<"Yes"<<endl;
    else{
        cout<<"No"<<endl;
    }
    char str2 []="ana";
    if(isPalindrome(str2)){
      cout<<"Yes it is"<<endl;
    }
    else {
        cout<<"No";
    }
    cout<<"Reverse a string "<<endl;
    string test="Techie Delight";
    reverse(test);
    cout<<endl;

    cout<<"Function to reverse an array "<<endl;
    int arr1[] = {1, 2, 3, 4, 5, 6};

    // To print original array
    printArray(arr1, 6);

    // Function calling
    reverseArray(arr1, 0, 5);

    cout << "Reversed array is" << endl;

    // To print the Reversed array
    printArray(arr1, 6);
    return 0;
}

void reverse(string str, int k) {
    // base case: end of the string is reached
    //k=0;
    if (k == str.length()) {
        return;
    }
    else {

        // recur for the next character
        reverse(str, ++k);

        // print current character
        cout << str[k];
    }

}
void reverseArray(int arr[], int start, int end) {
    if (start >= end) {
        return;
    } else {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }

    // Recursive Function calling
    reverseArray(arr, start + 1, end - 1);
}


/* Utility function to print an array */
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

//check if the reverse of a string is the same word
bool isPalindromeCheck(char str[],int s, int e){

    //base case
    //string has only one character
    if(s==e){
        return true;
    }
    //first and last letter are not the same
    //word is never gonna be the same
    if (str[s] != str[e]){
        return false;
    }
    // If there are more than
    // two characters, check if
    // middle substring is also
    // palindrome or not.
    if (s < e + 1)
        return isPalindromeCheck(str, s + 1, e - 1);

    return true;

}
bool isPalindrome(char str[])
{
    int n = strlen(str);

    // An empty string is
    // considered as palindrome
    if (n == 0)
        return true;

    return isPalindromeCheck(str, 0, n - 1);
}


int fun1(int n) {
    if(n == 1)
        return 0;
    else
        return 1 + fun1(n/2);
}

void fun2(int n) {
    if(n == 0)
        return;
    fun2(n/2);
    cout << n%2 << endl;
}

void printReverseArr1(int *arr , int size){
    if(size == 0) {
        return;
    }
    else{
        cout<<arr[size-1]<<endl;
        printReverseArr1(arr,size-1);

    }
}

void printReverseArr(int arr[], int size);

void printReverseArr(int arr [], int size){
    if(size == 1)
        cout << arr[size-1] << endl;
    else{
        cout << arr[size-1] << endl;
        printReverseArr(arr,--size);
        //cout << arr[size] << endl;
    }
}


//print array
void printArr(int arr [], int size){
    if(size == 1)
        cout << arr[size-1] << endl;
    else{
        printArr(arr,--size);
        cout << arr[size] << endl;
    }
}
//Write a recursive function called factorial() that returns the product of the integers
// from 1 through n (i.e., n!).
// //You can assume that n > 0.
int factorial(int n){
    if(n==1){
        return n;
    }
    else{
        return(n*(factorial(n-1)));
    }
}
int printDigit(int n){
    if(n<10){
        return n;
    }
    else{
        return printDigit(n%10+ printDigit(n/10));
    }
}