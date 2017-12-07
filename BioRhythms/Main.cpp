#include <iostream>
#include "Biorhythm.hpp"      //BioRhythm class and Date class
using namespace std;
static ostream& operator << (ostream&, BioRhythm&);

int main()
{
  BioRhythm bio;
  int code;

  if(!bio.ok())
  {
    cerr << "Error in birthdate specification - format is yyyy/mm/dd";
    code = 8;
  }
  else
  {
    cout << bio;    // write out birthdate for bio
    code = 0;
  }

  return(code);
}

ostream& operator<<(ostream& os, BioRhythm& bio)
{
  os << "Total Days  : " << bio.AgeInDays() << "\n";
  os << "Physical    : " << bio.Physical() << "\n";
  os << "Emotional   : " << bio.Emotional() << "\n";
  os << "Intellectual: " << bio.Intellectual() << "\n";

  return(os);
}
