#include <iostream>
#include <string>
#include <cctype>

int main() {
  std::string s;
  std::cin>>s;
  int count=0,a=0;

  while(s.find("dz=")!=std::string::npos){
    count++;
    s.replace(s.find("dz="),3,"AAA");
  }
  while(s.find("c=")!=std::string::npos){
    count++;
    s.replace(s.find("c="),2,"AA");
  }
  while(s.find("c-")!=std::string::npos){
    count++;
    s.replace(s.find("c-"),2,"AA");
  }
  while(s.find("d-")!=std::string::npos){
    count++;
    s.replace(s.find("d-"),2,"AA");
  }
  while(s.find("lj")!=std::string::npos){
    count++;
    s.replace(s.find("lj"),2,"AA");
  }
  while(s.find("nj")!=std::string::npos){
    count++;
    s.replace(s.find("nj"),2,"AA");
  }
  while(s.find("s=")!=std::string::npos){
    count++;
    s.replace(s.find("s="),2,"AA");
  }
  while(s.find("z=")!=std::string::npos){
    count++;
    s.replace(s.find("z="),2,"AA");
  }
  while(s[a]){
    if(islower(s[a])||s[a]=='-'||s[a]=='=')
      count++;
      a++;
  }
  std::cout<<count;
}