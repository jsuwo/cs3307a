class Time 
{
  public:

    Time(int h, int m, int s);

    inline const int hours() const
    {
      return this->_h;
    }

    inline const int minutes() const
    {
      return this->_m;
    }

    inline const int seconds() const
    {
      return this->_s;
    }

    Time operator+(const Time& rhs);   // allows Time + Time
    Time operator+(const int seconds); // allows Time + int

  private:
    int _h;
    int _m;
    int _s;
};
