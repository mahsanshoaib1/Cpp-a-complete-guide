                     // difference of char array and int array
#include<iostream>
using namespace std;

int getlength(char[]);
void reverse(char[], int);
int main()
{
    // int and int array
    int arr[10];
    // cin>>arr;    // error in int array. in char aaray there is no error
    cout<<"Write some number: "<<endl;
    cin>>arr[0];
    cout<<arr<<endl;          // the address of 1st block, if we display char arrya like this, it will display the whole char arrays
    cout<<*arr<<endl;  // value at first block


    //       char and char array   
    /*
        char stores only one character. we can make an array of datatype char. 
        char array and int array has some differences. 
        last character of a char array is always a null value '\0
        spaces, tab, new lines and null characters are not included in char array. infact it doesnt even count the characters after the space. 
    */
    char char1 = 'a';
    char arr1[20];
    cout<<"write some characters: "<<endl;
    cin>>arr1;
    cout<<arr1<<endl;  // we cannot display int array like this. while char aaray can be. s
    cout<<"write your name: "<<endl;
    cin>>arr1;                          // if i put the space in the name, it will not include then later characters.
    cout<<"your name is "<<arr1<<endl;
    cout<<"write your name again: "<<endl;
    cin>>arr1;
    int len = getlength(arr1);

    cout<<"The length of array is: "<<len<<endl;

    reverse(arr1, len);
    cout<<"reversed name is "<<arr1<<endl;


    arr1[2] = '\0'; // always use ' ' , not " " this. it sucks
    cout<<"Added a null character after ah so: "<<arr1<<endl;

    return 0;
}


int getlength(char n[])
{
    int count=0;
    for(int i=0; n[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}


void reverse(char n[], int l)
{
    int s=0, e=l-1;
    while (s<e)
    {
        swap(n[s++], n[e--]);
    }
}
