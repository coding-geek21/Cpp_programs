//7) Write a c++ program to implement sorted and unsorted multimap.

#include<iostream>
#include<map>
#include <algorithm>
#include<iterator>
#include <bits/stdc++.h>

using namespace std;

typedef unordered_multimap<int, int>::iterator umit;
 
void printUmm(unordered_multimap<int, int> umm)
{
    umit it = umm.begin();
    
    cout<<"Multimap without sorting :"<<endl;
    cout << "\tKEY\tELEMENT\n";
    for (; it != umm.end(); it++)
        cout << '\t' << it->first
            << '\t' << it->second << '\n';
 
    cout << endl;
}

int main(){
	
	
	unordered_multimap<int, int> umm1(
        {{ 11, 1 },
          { 1, 2 },
          { 19, 10 },
          { 23, 7 },
          { 3, 9 },
          { 5, 6 },
          { 89, 1 }});
	
	printUmm(umm1);
	
	
	int i,n,key,val;
	multimap <int,int> M;
	
	M.insert(pair <int,int> (11,1));
	M.insert(pair <int,int> (1,2));
	M.insert(pair <int,int> (19,10));
	M.insert(pair <int,int> (23,7));
	M.insert(pair <int,int> (3,9));
	M.insert(pair <int,int> (5,6));
	M.insert(pair <int,int> (89,1));
	
	multimap <int, int> :: iterator itr;
    cout << "\nMultimap after sorting : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = M.begin(); itr != M.end(); ++itr)
    {
        cout << '\t' << itr->first
            << '\t' << itr->second << '\n';
    }
    cout << endl;	
	
	
	return 0;
}
