/* Five inbuilt function in c++
1)strlen();
2)strcmp();
3)strcpy();
4)strncpy();
5)strcat();*/

#include <iostream>
#include<cstring> 
#include<string>
// This is  a must for a inbuilt futn in c++

using namespace std;

int main()

{
    // 1)string length 
    
  /*  char input[100];
    
    cout<<"Enter a string:"<<endl;
    
    cin>>input;
    int length = strlen(input);
    
    cout<<"Your string length is ="<<length; 
    
    
    
    // Another way
    
    int length(char input[]){

int count=0;
for(int i=0;input[i]!='\0';i++)
{
count++;

}
return count;
}
int main(){


char name[100];
cout<<"enter your name"<<endl;
cin>>name;
cout<<"your name is :"<<name<<endl;


cout<<"the legth of string is:"<<length(name);


}

    
    
    
    
    */
    
   // 2) string compare
    /*char str1 [100];
    char str2 [100];

cout<<"your str1 and str2 is"<<str1<<str2<<endl;
    cin>>str1;
    cin>>str2;

    if (strcmp(str1,str2)== 0)
    {
        cout<<"the given string is equal"<<endl;

    }
else
    {
    cout<<"the given string is not equal"<<endl;
}

    return 0;


} */

// 3) stringcpy

/*
char s1[]="Hello Sumit";
char s2 []=" Welcome to coding world";

cout<<"String s1 before a coppy = "<<s1<<endl;

strcpy(s1,s2);

cout<<"String s1 after a coppy = "<<s1<<endl;

cout<<"string s2 is = "<<s2<<endl;

//you can also try by using a loop

 */


//4) stringncpy


/*
  char sorce_pt[] = "It's Monday and it's raining";
    char destination_pt[40];
    
    int length = strlen(sorce_pt);
    cout<<" the length is = "<<length<<endl;

    /* count less than length of src */
    strncpy(destination_pt,sorce_pt,5);
    cout << destination_pt << endl;

    // count more than length of src 
    strncpy(destination_pt,sorce_pt,strlen(sorce_pt)+10);
    cout << destination_pt << endl;
    
  */
    
    
  //5) strcat()

    char dest[50] = "This is an";
    char src[50] = " example";
  
    strcat(dest, src);
    cout << dest ;
    
    
    return 0;
}
    
    

