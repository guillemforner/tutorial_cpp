//
// Sample Program: Biorhythm
// Description   : Calculates biorhythm based on the current
//                 system date and birth date entered
//
// File 1 of 2-other file is CCNUBRC

#include <math.h>

class Date
{
  public:
    Date();
    int DaysSince(const char *date);
    
  protected:
    int curYear, curDay;
    static const int dateLen = 10;
    static const int numMonths = 12;
    static const int numDays[];
};

class BirthDate : public Date
{
  public:
    BirthDate();
    BirthDate(const char *birthText);
    int daysOld() { return(DaysSince(text)); }
    
  private:
    char text[Date::dateLen+1];
};

class BioRhythm 
{
  public:
    BioRhythm(char *birthText) : birthDate(birthText)
    {
      age = birthDate.daysOld();
    }
    BioRhythm() : birthDate() 
    {
      age = birthDate.daysOld();
    }
    ~BioRhythm() {}
    
    int AgeInDays()
    {
      return(age);
    }
    double Physical() 
    {
      return(Cycle(pCycle));
    }
    double Emotional()
    {
      return(Cycle(eCycle));
    }
    double Intellectual()
    {
      return(Cycle(iCycle));
    }
    int ok()
    {
      return(age >= 0);
    }
    
  private:
    int age;
    double Cycle(int phase)
    {
      return(sin(fmod((double)age, (double)phase) / (double)phase * M_2_PI));
    }
    BirthDate birthDate;
    static const int pCycle = 23;       // Physical Cycle - 23 days
    static const int eCycle = 28;       // Emotional Cycle - 28 days
    static const int iCycle = 33;       // Intellectual Cycle - 33 days
};
