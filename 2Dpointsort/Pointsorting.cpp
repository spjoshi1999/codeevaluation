#include<iostream>
#include<fstream>
#include <cmath>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
string path1 = "";
string path2="";
string garbage = "";
int cnt = 0;
cout << "Enter file path to read a file ";
getline(cin, path1);
cout << "Enter file path to write into a file ";
getline(cin,path2);

ifstream infile(path1.c_str());
ofstream outf(path2.c_str());

vector<pair<double,pair<double,double>>> vec;
            
double z[3];
double x[3];
double y[3];
while(infile)
{
   for(int i=0;i<3;i++)
   {
      infile >> x[i];
   }
    for(int i=0;i<3;i++)
   {
      infile >> y[i];
   }
}
 for(int i=0;i<3;i++)
   {
      z[i]=sqrt(x[i]*x[i]+y[i]*y[i]);
      vec.push_back({z[i],{x[i],y[i]}});

   }

   sort(vec.begin(),vec.end());

   for(int i=0;i<3;i++)
   {
       
       outf << vec[i].second.first <<",";
       outf << vec[i].second.second <<" " ;
       outf << " Distance " << vec[i].first <<"  " ;
       outf << "\n";
   }


     
cout << " data entry successfull";

infile.close();
outf.close();




cin.ignore();
cin.get();
return 0;
}