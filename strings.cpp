#include <iostream>
#include <algorithm>
#include <string>
 using namespace std;
int main(){
    string str;
    // string str1(5,'n');
    // cout<<str1;
    // getline(cin,str);

                                     // sum two strings
    string s1 = "fam";
    string s2 = "ily";
    // s1.append(s2);
    // s1 = s1 + s2;
    // cout<<s1+s2<<endl;
                                     //to acces any character from string
    // cout<<s1[1]<<endl;
                                     //to clear all the character from the string
    // s1.clear();        
                                    // to compare  ht strings
    // if(s1.compare(s2)==0)
    //  cout<<"strings are equal";                                
    // cout<<s2.compare(s1)<<endl;  
                                  //to check whether string is empty or not
    // s1.empty();
                                 // to erase any group of character or char
    string s3 = "nincompoop";
    // s3.erase(3,3);
    // cout<<s3<<endl;  
                               //to fin the word it gives the first index
    // cout<<s3.find("com");                                                                                                                 
     
                              //to insert new string
    // s3.insert(2,"lol");
    // cout<<s3<<endl;
                             //to find length or size
    // s3.length();
                            //  to find substring
    // string s = s3.substr(6,4);
    // cout<<s<<endl;
                        //    string to integer
    // string s = "786";
    // int x =stoi(s);
    // cout <<x<<endl;
                        // int to string
    // int x= 786;
    // cout<<to_string(x) + "2"<<endl;
    string s = "xcmnmvcxmfasl";
    sort(s.begin(),s.end());
    cout<<s<<endl;
      return 0;      

}